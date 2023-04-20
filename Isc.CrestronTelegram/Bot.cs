using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Isc.CrestronTelegram.Implementaion;
using JsonFlatFileDataStore;
using Isc.CrestronTelegram.Logger;

namespace Isc.CrestronTelegram
{
    public class Bot
    {
        private readonly IClient _client;
        private readonly IRepo<User> _repo;

        public Bot(string apiKey, string path, Action<string> unhandlerMessage, ILogger logger)
        {
            IDataStore dataStore = new DataStore(path);
            _repo = new Repo<User>(dataStore);
            _client = new Client(apiKey, GetHandler(_repo), unhandlerMessage, logger);
        }

        public void Start() => _client.Start();

        public async Task SendMessage<T>(string format, T value)
        {
            foreach (var user in _repo.GetAll())
                await _client.SendText(user.Id, string.Format(format, value));
        }

        private Dictionary<string, ITextHandler> GetHandler(IRepo<User> _repo)
            => new Dictionary<string, ITextHandler>
            {
                { "register", new RegistrationHandler(_repo)},
                { "unregister", new UnregisrationHandler(_repo)},
            };
    }
}
