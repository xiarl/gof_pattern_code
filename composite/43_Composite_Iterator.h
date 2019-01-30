
namespace CompositeNS
{
	class Watt
	{

	};

	typedef int Currency;


	template <typename Type>
	class Iterator
	{
	public:
		Iterator(Type tObj):currData_(tObj),HeadData_(tObj)
		{

		}
		void First()
		{
			currData_ = HeadData_;
		}
		Iterator Next()
		{
			return Iterator(++currData_);
		}
		bool IsDone()const
		{
			return currData_ == 0;
		}
 		Type  operator->()
 		{
 			return currData_;
 		}
	private:
		Type currData_;
		Type HeadData_;
	};

	template <typename Type>
	class List
	{

	};
}
