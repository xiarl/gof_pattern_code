#include "51_CoR_HelpHandler.h"
#include "51_CoR_Widget.h"

namespace CoR
{
	Widget::Widget(Widget * parent, Topic t /* = NO_HELP_TOPIC */) :
		HelpHandler(parent, t), _parent(parent)
	{

	}
}

