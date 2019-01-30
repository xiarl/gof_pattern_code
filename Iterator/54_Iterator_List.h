
namespace IteratorNS
{
	const static long DEFAULT_LIST_CAPACITY = 20;
	template<typename Item>
	class List : public AbstractList<Item>
	{
	public:
		List(long size = DEFAULT_LIST_CAPACITY);

		virtual Iterator<Item> * CreateIterator()const;

		long Count()const;
		Item & Get(long index) const;
		//...
	private:
		long _size;
		Item * _data;
	};

	template<typename Item>
	List<Item>::List(long size /* = DEFAULT_LIST_CAPACITY */)
		:_size(size)
	{
		_data = new Item[_size];
	}

	template<typename Item>
	long List<Item>::Count()const
	{
		return _size;
	}

	template<typename Item>
	Item & List<Item>::Get(long index)const
	{
		return _data[index];
	}

	template<typename Item>
	Iterator<Item> * List<Item>::CreateIterator()const
	{
		return new ListIterator<Item>(this);
	}

}
