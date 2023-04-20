using JsonFlatFileDataStore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Isc.CrestronTelegram.Implementaion
{
    internal class ResponseRepo : Repo<Response>
    {
        public ResponseRepo(IDataStore dataStore) : base(dataStore)
        {
        }
    }
}
