#include <vector>
#include "55_Mediator_DialogDirector.h"
#include "55_Mediator_MouseEvent.h"
#include "55_Mediator_Widget.h"
#include "55_Mediator_ListBox.h"

namespace MediatorNS
{

	ListBox::ListBox(DialogDirector * dd)
		:Widget(dd),_lineSel(0)
	{
	}

	const char * ListBox::GetSelection()
	{
		if (_lineSel >= _listItems.size())
		{
			return 0;
		}
		else
		{
			return _listItems[_lineSel];
		}
	}

	void ListBox::SetList(std::vector<char *> * listItems)
	{
		_listItems.assign(listItems->begin(), listItems->end());
	}

	void ListBox::HandleMouse(MouseEvent & /*event*/)
	{

	}
}
