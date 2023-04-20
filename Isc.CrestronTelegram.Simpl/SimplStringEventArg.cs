using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Isc.CrestronTelegram.Simpl
{
    public class SimplStringEventArg : EventArgs
    {
        public string Message { get; set; }
    }

    public delegate void SimplStringEventHandler(object sender, SimplStringEventArg args);
}
