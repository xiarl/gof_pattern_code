#include <string>
#include "55_Mediator_DialogDirector.h"
#include "55_Mediator_MouseEvent.h"
#include "55_Mediator_Widget.h"
#include "55_Mediator_Button.h"

namespace MediatorNS
{
	Button::Button(DialogDirector * dd)
		:Widget(dd)
	{
	}

	void Button::SetText(const char * text)
	{
		_text.assign(text);
	}

	void Button::HandleMouse(MouseEvent & /*event*/)
	{
		//...
		Changed();
	}

}

