using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Newtonsoft.Json;

namespace Isc.CrestronTelegram
{
    public class User
    {
        public User(long id, string name)
        {
            Name = name;
            Id = id;
        }

        public string Name { get; }
        public long Id { get; }
    }
}
