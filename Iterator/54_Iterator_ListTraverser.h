
namespace IteratorNS
{
	template<typename Item>
	class ListTraverser
	{
	public:
		ListTraverser(List<Item> * aList);
		bool Traverse();
	protected:
		virtual bool ProcessItem(const Item &) = 0;
	private:
		ListIterator<Item> _iterator;
	};

	template<typename Item>
	ListTraverser<Item>::ListTraverser(List<Item> * aList)
		:_iterator(aList)
	{
	}

	template<typename Item>
	bool ListTraverser<Item>::Traverse()
	{
		bool result = true;
		for(
			_iterator.First();
			!_iterator.IsDone();
		_iterator.Next()
			)
		{
			result = ProcessItem(_iterator.CurrentItem());
			if (!result)
			{
				break;
			}
		}
		return result;
	}
}
