using System;
using System.Threading.Tasks;
using Crestron.SimplSharp;
using Isc.CrestronTelegram.Logger;

namespace Isc.CrestronTelegram.Simpl
{
    public class SimplApi
    {
        private Bot _bot;

        public event SimplStringEventHandler SimplStringEvent;

        public void Init(string apiKey)
        {
            try
            {

                ILogger logger = Log.CreateLogger()
                                    .SetLevel(LogLevel.Error)
                                    .SetTimeFormat("")
                                    .Json()
                                    .WtiteTo(msg => CrestronConsole.PrintLine(msg))
                                    .WtiteTo(msg => ErrorLog.Notice(msg))
                                    .BuildLogger();

                _bot = new Bot(
                        apiKey, 
                        @"\nvram\telegram_storage.json",
                        msg => SimplStringEvent(this, new SimplStringEventArg { Message = msg}),
                        logger
                        );
                _bot.Start();
            }
            catch(Exception ex) 
            {
                CrestronConsole.PrintLine(ex.Message);
            }
        }

        public void SendDigital(string format, ushort value)
            => Task.Run(() => _bot.SendMessage(format, value != 0));

        public void SendAnalog(string format, ushort value)
            => Task.Run(() => _bot.SendMessage(format, value));

        public void SendString(string format, string value)
            => Task.Run(() => _bot.SendMessage(format, value));

       
    }
}
