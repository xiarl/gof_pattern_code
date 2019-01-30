
namespace IteratorNS
{
	const static long DEFAULT_LIST_CAPACITY2 = 20;
	template<typename Item>
	class SkipList : public AbstractList<Item>
	{
	public:
		SkipList(long size = DEFAULT_LIST_CAPACITY2);

		virtual Iterator<Item> * CreateIterator()const;

		long Count()const;
		Item & Get(long index) const;
		//...
	private:
		long _size;
		Item * _data;
	};

	template<typename Item>
	SkipList<Item>::SkipList(long size /* = DEFAULT_LIST_CAPACITY */)
		:_size(size)
	{
		_data = new Item[_size];
	}

	template<typename Item>
	long SkipList<Item>::Count()const
	{
		return _size;
	}

	template<typename Item>
	Item & SkipList<Item>::Get(long index)const
	{
		return _data[index];
	}

	template<typename Item>
	Iterator<Item> * SkipList<Item>::CreateIterator()const
	{
		return new SkipListIterator<Item>(this);
	}
}
