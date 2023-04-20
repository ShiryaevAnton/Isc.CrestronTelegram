using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using JsonFlatFileDataStore;

namespace Isc.CrestronTelegram.Implementaion
{
    public class Repo<T> : IRepo<T> where T : class
    {
        private readonly IDocumentCollection<T> _collection;

        public Repo(IDataStore dataStore)
        {
            _collection = dataStore.GetCollection<T>();
        }

        public Task Delete(Predicate<T> predicate)
            => _collection.DeleteOneAsync(predicate);

        public T Get(Predicate<T> predicate)
            => _collection.Find(predicate).FirstOrDefault();

        public IEnumerable<T> GetAll()
            => _collection.AsQueryable().AsEnumerable();

        public Task Insert(T item)
            => _collection.InsertOneAsync(item);
    }
}
