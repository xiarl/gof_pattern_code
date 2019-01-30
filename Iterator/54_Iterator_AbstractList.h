
namespace IteratorNS
{
	template<typename Item>
	class AbstractList
	{
	public:
		virtual Iterator<Item> * CreateIterator()const = 0;
	};
}
