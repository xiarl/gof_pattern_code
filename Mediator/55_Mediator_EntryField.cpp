#include <string>
#include "55_Mediator_DialogDirector.h"
#include "55_Mediator_MouseEvent.h"
#include "55_Mediator_Widget.h"
#include "55_Mediator_EntryField.h"

namespace MediatorNS
{
	EntryField::EntryField(DialogDirector * dd)
		:Widget(dd)
	{
	}

	void EntryField::SetText(const char * text)
	{
		_text.assign(text);
	}

	const char * EntryField::GetText()
	{
		return _text.c_str();
	}

	void EntryField::HandleMouse(MouseEvent & /*event*/)
	{

	}
}
