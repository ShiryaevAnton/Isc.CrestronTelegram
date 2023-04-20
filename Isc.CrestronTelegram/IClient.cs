using System.Threading.Tasks;

namespace Isc.CrestronTelegram
{
    internal interface IClient
    {
        Task SendText(long id, string message);
        void Start();
    }
}