using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Telegram.Bot;
using Telegram.Bot.Types;
using Isc.CrestronTelegram.Logger;

namespace Isc.CrestronTelegram.Implementaion
{
    internal class Client : IClient
    {

        private readonly ITelegramBotClient _client;
        private readonly ILogger _logger;
        private readonly Dictionary<string, ITextHandler> _textHandlers;
        private readonly Action<string> _unhandlerMessage;

        public Client(string apiKey, Dictionary<string, ITextHandler> textHandlers, Action<string> unhandlerMessage, ILogger logger)
        {
            _client = new TelegramBotClient(apiKey) ?? throw new ArgumentNullException(nameof(apiKey));
            _textHandlers = textHandlers ?? throw new ArgumentNullException(nameof(textHandlers));
            _unhandlerMessage = unhandlerMessage ?? throw new ArgumentNullException(nameof(unhandlerMessage));
            _logger = logger ?? throw new ArgumentNullException(nameof(logger));
        }

        public void Start()
        {
            _logger.Debug("start listening");
            _client.StartReceiving(HandleUpdateAsync, HandlePollingErrorAsync);
        }

        public async Task SendText(long id, string message)
        {
            await _client.SendTextMessageAsync(id, message);
            _logger.Debug("send message: {0}, to user: {1}", message, id);
        }

        private async Task HandlePollingErrorAsync(ITelegramBotClient botClient, Exception exception, CancellationToken cancellationToken)
            => await Task.Run(() => _logger.Error("got error: {0}", exception.Message));
        

        private async Task HandleUpdateAsync(ITelegramBotClient botClient, Update update, CancellationToken cancellationToken)
        {
            if (update.Message is null) return;

            if (String.IsNullOrEmpty(update.Message.Text)) return;

            _logger.Debug("got text message: {0}, from user: {1}", update.Message.Text, update.Message.Chat.Id);

            _textHandlers.TryGetValue(update.Message.Text.ToLower(), out var textHandler);

            if (textHandler != null)
            { 
                await textHandler.Handler(_client, update.Message, cancellationToken);
                return;
            }

            _unhandlerMessage(update.Message.Text.ToLower());
        }


    }
}
