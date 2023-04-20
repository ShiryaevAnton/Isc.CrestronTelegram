using Newtonsoft.Json.Converters;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Isc.CrestronTelegram.Logger
{
    public class LoggerMessage
    {
        [JsonProperty("level")]
        [JsonConverter(typeof(StringEnumConverter))]
        public LogLevel Level { get; set; }
        [JsonProperty("message")]
        public string Message { get; set; }
        [JsonProperty("timeStamp")]
        public string TimeStamp { get; set; }
    }
}
