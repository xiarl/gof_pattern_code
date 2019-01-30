
namespace IteratorNS
{
	template<typename Item>
	class ReverseListIterator : public Iterator<Item>
	{
	public:
		ReverseListIterator(const List<Item> * alist);

		virtual void First();
		virtual void Next();
		virtual bool IsDone()const;
		virtual Item CurrentItem() const ;
	private:
		const List<Item> * _list;
		long _current;
	};

	template<typename Item>
	ReverseListIterator<Item>::ReverseListIterator(const List<Item> * alist)
		:_list(alist), _current(alist->Count())
	{

	}

	template<typename Item>
	void ReverseListIterator<Item>::First()
	{
		_current = _list->Count();
	}

	template<typename Item>
	void ReverseListIterator<Item>::Next()
	{
		--_current;
	}

	template<typename Item>
	bool ReverseListIterator<Item>::IsDone()const
	{
		return _current <= 0;
	}

	template<typename Item>
	Item ReverseListIterator<Item>::CurrentItem()const
	{
		if (IsDone())
		{
			throw IteratorOutOfBounds();
		} 
		else
		{
			return _list->Get(_current-1);
		}
	}
}
