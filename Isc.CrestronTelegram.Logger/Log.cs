using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Isc.CrestronTelegram.Logger
{
    public class Log : ILogger, ILevelSetter, ITimeFormatSetter, ILoggerBuilder, ILoggerFormat
    {
        //real project - serilog or something else

        private LogLevel _level = LogLevel.Debug;
        private readonly List<Action<string>> _loggerOuts = new List<Action<string>>();
        private string _timeFormat = "yyyyMMddTHHmmss.ff";

        public string _format = "default";

        private Log()
        {

        }

        public static ILevelSetter CreateLogger() => new Log();

        public ITimeFormatSetter SetLevel(LogLevel level)
        {
            _level = level;
            return this;
        }

        public ILoggerFormat SetTimeFormat(string timeFormat)
        {
            if (string.IsNullOrEmpty(timeFormat)) return this;
            _timeFormat = timeFormat;
            return this;
        }

        public ILoggerBuilder WtiteTo(Action<string> output)
        {
            _loggerOuts.Add(output);
            return this;
        }

        public ILogger BuildLogger() => this;

        public void Debug(string message, params object[] @params)
        {
            if (LogLevel.Debug >= _level) Print(string.Format(message, @params), LogLevel.Debug);
        }

        public void Info(string message, params object[] @params)
        {
            if (LogLevel.Info >= _level) Print(string.Format(message, @params), LogLevel.Info);
        }

        public void Error(string message, params object[] @params)
        {
            if (LogLevel.Error >= _level) Print(string.Format(message, @params), LogLevel.Error);
        }

        public void Fatal(string message, params object[] @params)
        {
            if (LogLevel.Fatal >= _level) Print(string.Format(message, @params), LogLevel.Fatal);

        }

        private void Print(string data, LogLevel level)
        {
            var outString = "";
            if (_format == "default") Format(LogLevel.Error, data);
            if (_format == "json") outString
                    = JsonConvert.SerializeObject(new LoggerMessage { Level = level, Message = data, TimeStamp = DateTime.Now.ToString(_timeFormat) });

            _loggerOuts.ForEach(a => a(outString));
        }

        private string Format(LogLevel level, string data)
        {
            string levelName;

            switch (level)
            {
                case LogLevel.Debug:
                    levelName = "Debug";
                    break;
                case LogLevel.Info:
                    levelName = "Info";
                    break;
                case LogLevel.Error:
                    levelName = "Error";
                    break;
                default:
                    levelName = "";
                    break;
            }

            string time = DateTime.Now.ToString(_timeFormat);
            return $"[{levelName}][{time}][{data}]";
        }

        public ILoggerBuilder Json()
        {
            _format = "json";
            return this;
        }

        public ILoggerBuilder Default()
        {
            _format = "default";
            return this;
        }
    }
}
