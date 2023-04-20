using System.Threading;
using System.Threading.Tasks;
using Telegram.Bot;
using Telegram.Bot.Types;

namespace Isc.CrestronTelegram
{
    internal interface ITextHandler
    {
        Task Handler(ITelegramBotClient client, Message message, CancellationToken cancellationToken);
    }
}
