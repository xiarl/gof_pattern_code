
namespace IteratorNS
{
	template<typename Item>
	class IteratorPtr
	{
	public:
		IteratorPtr(Iterator<Item> * i)
			:_i(i)
		{
		}

		Iterator<Item> * operator->() {return _i;}
		Iterator<Item> & operator*() {return *_i;}
	private:
		//disallow copy and assignment to avoid
		// multiple deletions of _i

		IteratorPtr(const IteratorPtr &);
		IteratorPtr& operator=(const IteratorPtr &);
	private:
		Iterator<Item> * _i;
	};
}
