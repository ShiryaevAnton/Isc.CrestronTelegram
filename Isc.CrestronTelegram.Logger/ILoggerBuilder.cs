using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Isc.CrestronTelegram.Logger
{
    public interface ILoggerBuilder
    {
        ILoggerBuilder WtiteTo(Action<string> output);
        ILogger BuildLogger();
    }
}
