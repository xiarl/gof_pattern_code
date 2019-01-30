#include "42_Bridge_View.h"

#include "42_Bridge_Point.h"

#include "42_Bridge_Coord.h"
#include "42_Bridge_WindowImp.h" ///......Ç°ÖÃÉùÃ÷£¿

#include "42_Bridge_Window.h"

#include "42_Bridge_ApplicationWindow.h"

namespace Bridge
{

	void ApplicationWindow::DrawContents()
	{
		GetView()->DrawOn(this);
	}
}

