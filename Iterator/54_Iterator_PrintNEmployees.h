
namespace IteratorNS
{
	class PrintNEmployees : public ListTraverser<Employee*>
	{
	public:
		PrintNEmployees(List<Employee*> * aList, int n);

	protected:
		bool ProcessItem(Employee * const &);
	private:
		int _total;
		int _count;
	};
}
