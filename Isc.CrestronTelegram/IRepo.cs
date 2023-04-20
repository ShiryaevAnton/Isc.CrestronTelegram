using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Isc.CrestronTelegram
{
    internal interface IRepo<T> where T : class
    {
        T Get(Predicate<T> predicate);
        IEnumerable<T> GetAll();
        Task Insert(T item);
        Task Delete(Predicate<T> predicate);
    }
}
