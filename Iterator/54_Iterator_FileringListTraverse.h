
namespace IteratorNS
{
	template<typename Item>
	class FilteringListTraver
	{
	public:
		FilteringListTraverser(List<Item> * aList)
			:_iterator(aList)
		{
		}

		bool Traverse();
	protected:
		virtual bool ProcessItem(const Item &) = 0;
		virtual bool TestItem(const Item &) = 0;
	private:
		ListIterator<Item> _iterator;
	};

	template<typename Item>
	bool FilteringListTraver<Item>::Traverse()
	{
		bool result = true;
		for(
			_iterator.First();
			!_iterator.IsDone();
		_iterator.Next()
			)
		{
			if(TestItem(_iterator.CurrentItem()))
			{
				result = ProcessItem(_iterator.CurrentItem());
				if (!result)
				{
					break;
				}
			}
		}
		return result;
	}
}
