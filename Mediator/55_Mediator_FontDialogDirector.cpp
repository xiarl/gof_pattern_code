#include <string>
#include <vector>
#include "55_Mediator_DialogDirector.h"
#include "55_Mediator_MouseEvent.h"
#include "55_Mediator_Widget.h"
#include "55_Mediator_Button.h"
#include "55_Mediator_ListBox.h"
#include "55_Mediator_EntryField.h"
#include "55_Mediator_FontDialogDirector.h"

namespace MediatorNS
{
	FontDialogDirector::FontDialogDirector()
	{

	}

	FontDialogDirector::~FontDialogDirector()
	{

	}

	void FontDialogDirector::WidgetChange(Widget * theChangeWidget)
	{
		if (theChangeWidget == _fontList)
		{
			_fontName->SetText(_fontList->GetSelection());
		} 
		else if (theChangeWidget == _ok)
		{
			// apply font change an dismiss dialog
			//...
		}
		else if(theChangeWidget == _cancel)
		{
			// dismiss dialog
		}
	}

	void FontDialogDirector::CreateWidgets()
	{
		_ok = new Button(this);
		_cancel = new Button(this);
		_fontList = new ListBox(this);
		_fontName = new EntryField(this);

		// fill the listBox with the available font names

		// assemble the widgets in the dialog
	}


}
