#include "54_Iterator_def.h"
#include "54_Iterator_Employee.h"
#include "54_Iterator_Iterator.h"
#include "54_Iterator_AbstractList.h"
#include "54_Iterator_List.h"
#include "54_Iterator_ListIterator.h"
#include "54_Iterator_ReverseListIterator.h"
#include "54_Iterator_SkipList.h"
#include "54_Iterator_SkipListIterator.h"
#include "54_Iterator_IteratorPtr.h"


#include "54_Iterator_ListTraverser.h"
#include "54_Iterator_PrintNEmployees.h"

namespace IteratorNS
{


	void PrintEmployees(Iterator<Employee*> & i)
	{
		for (i.First(); !i.IsDone(); i.Next())
		{
			i.CurrentItem()->Print();
		}
	}


	void funTest()
	{
		List<Employee*> * employees = 0;
		//...
		ListIterator<Employee*> forward(employees);
		ReverseListIterator<Employee*> backward(employees);
		PrintEmployees(forward);
		PrintEmployees(backward);

		List<Employee*> listObj;
		AbstractList<Employee*> * employees_a = &listObj;
		Iterator<Employee*> * iter = employees_a->CreateIterator();
		PrintEmployees(*iter);
		delete iter;
		iter = 0;

		SkipList<Employee*> slistObj;
		employees_a = &slistObj;
		iter = employees_a->CreateIterator();
		PrintEmployees(*iter);
		delete iter;


		IteratorPtr<Employee*> iterP(employees_a->CreateIterator());
		PrintEmployees(*iterP);
	}



	void testFun_2()
	{
		List<Employee*> * employees = 0;
		//...

		PrintNEmployees pa(employees, 10); //ÄÚ²¿µü´úÆ÷
		pa.Traverse();
	}
}

