#include "42_Bridge_Point.h"
#include "42_Bridge_Coord.h"
#include "42_Bridge_WindowImp.h"

#include "42_Bridge_View.h"
#include "42_Bridge_Window.h"

#include "42_Bridge_IconWindow.h"

namespace Bridge
{
	IconWindow::IconWindow(View * contents, const char * pstr)
		:Window(contents),
		_bitmapName(pstr)
	{

	}
	void IconWindow::DrawContents()
	{
		WindowImp * imp = GetWindowImp();
		if (imp != 0)
		{
			imp->DeviceBitmap(_bitmapName, 0.0, 0.0);
		}
	}
}
