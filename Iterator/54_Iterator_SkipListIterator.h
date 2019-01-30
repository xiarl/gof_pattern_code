

namespace IteratorNS
{

	template<typename Item>
	class SkipListIterator : public Iterator<Item>
	{
	public:
		SkipListIterator(const SkipList<Item> * alist);

		virtual void First();
		virtual void Next();
		virtual bool IsDone()const;
		virtual Item CurrentItem() const ;
	private:
		const SkipList<Item> * _list;
		long _current;
	};

	template<typename Item>
	SkipListIterator<Item>::SkipListIterator(const SkipList<Item> * alist)
		:_list(alist), _current(0)
	{

	}

	template<typename Item>
	void SkipListIterator<Item>::First()
	{
		_current = 0;
	}

	template<typename Item>
	void SkipListIterator<Item>::Next()
	{
		++_current;
	}

	template<typename Item>
	bool SkipListIterator<Item>::IsDone()const
	{
		return _current >= _list->Count();
	}

	template<typename Item>
	Item SkipListIterator<Item>::CurrentItem()const
	{
		if (IsDone())
		{
			throw IteratorOutOfBounds();
		} 
		else
		{
			return _list->Get(_current);
		}
	}
}
