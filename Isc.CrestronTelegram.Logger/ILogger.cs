using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Isc.CrestronTelegram.Logger
{
    public interface ILogger
    {
        void Debug(string message, params object[] @params);
        void Info(string message, params object[] @params);
        void Error(string message, params object[] @params);
        void Fatal(string message, params object[] @params);
    }
}
