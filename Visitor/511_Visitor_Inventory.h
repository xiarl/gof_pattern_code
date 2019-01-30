
namespace VisitorNS
{
	class Inventory
	{
	public:
		Inventory():_total(0){}
		void Accumulate(Equipment * e);
		int GetValue()const;
	private:
		int _total;
	};
}
