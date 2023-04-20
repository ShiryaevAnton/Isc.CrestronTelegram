using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Telegram.Bot.Types;
using Telegram.Bot;

namespace Isc.CrestronTelegram.Implementaion
{
    internal class UnregisrationHandler : ITextHandler
    {
        private readonly IRepo<User> _repo;

        public UnregisrationHandler(IRepo<User> repo)
        {
            _repo = repo;
        }

        public async Task Handler(ITelegramBotClient client, Message message, CancellationToken cancellationToken)
        {
            User user = new User(message.Chat.Id, message.Chat.FirstName);

            await _repo.Delete(u => u.Id == message.Chat.Id);

            await client.SendTextMessageAsync(message.Chat.Id, $"Unregistor");
        }
    }
}
