using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Telegram.Bot;
using Telegram.Bot.Types;

namespace Isc.CrestronTelegram.Implementaion
{
    internal class RegistrationHandler : ITextHandler
    {
        private readonly IRepo<User> _repo;

        public RegistrationHandler(IRepo<User> repo)
        {
            _repo = repo;
        }

        public async Task Handler(ITelegramBotClient client, Message message, CancellationToken cancellationToken)
        {

            if(_repo.Get(u => u.Id == message.Chat.Id) != null)
            {
                await client.SendTextMessageAsync(message.Chat.Id, $"{message.Chat.FirstName}, you're already registrated");
                return;
            }

            User user = new User(message.Chat.Id, message.Chat.FirstName);

            await _repo.Insert(user);           

            await client.SendTextMessageAsync(message.Chat.Id, $"{message.Chat.FirstName} thank you for registration");
        }
    }
}
