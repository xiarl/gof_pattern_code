#include "54_Iterator_def.h"
#include "54_Iterator_Employee.h"
#include "54_Iterator_Iterator.h"
#include "54_Iterator_AbstractList.h"
#include "54_Iterator_List.h"
#include "54_Iterator_ListIterator.h"
#include "54_Iterator_ListTraverser.h"
#include "54_Iterator_PrintNEmployees.h"

namespace IteratorNS
{
	PrintNEmployees::PrintNEmployees(List<Employee*> * aList, int n)
		:ListTraverser<Employee*>(aList),
		_total(n), _count(0)
	{
	}

	bool PrintNEmployees::ProcessItem(Employee * const & e)
	{
		++_count;
		e->Print();
		return _count < _total;
	}
}
