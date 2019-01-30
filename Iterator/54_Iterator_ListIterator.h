
namespace IteratorNS
{

	template<typename Item>
	class ListIterator : public Iterator<Item>
	{
	public:
		ListIterator(const List<Item> * alist);

		virtual void First();
		virtual void Next();
		virtual bool IsDone()const;
		virtual Item CurrentItem() const ;
	private:
		const List<Item> * _list;
		long _current;
	};

	template<typename Item>
	ListIterator<Item>::ListIterator(const List<Item> * alist)
		:_list(alist), _current(0)
	{

	}

	template<typename Item>
	void ListIterator<Item>::First()
	{
		_current = 0;
	}

	template<typename Item>
	void ListIterator<Item>::Next()
	{
		++_current;
	}

	template<typename Item>
	bool ListIterator<Item>::IsDone()const
	{
		return _current >= _list->Count();
	}

	template<typename Item>
	Item ListIterator<Item>::CurrentItem()const
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
