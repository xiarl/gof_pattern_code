#include "55_Mediator_MouseEvent.h"
#include "55_Mediator_DialogDirector.h"
#include "55_Mediator_Widget.h"


namespace MediatorNS
{
	Widget::Widget(DialogDirector * dd)
		:_director(dd)
	{
	}

	void Widget::Changed()
	{
		_director->WidgetChanged(this);
	}

	void Widget::HandleMouse(MouseEvent & /*event*/)
	{

	}
}

