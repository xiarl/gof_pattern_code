#include "42_Bridge_Coord.h"
#include "42_Bridge_Point.h"
#include "42_Bridge_WindowImp.h"
#include "42_Bridge_XWindowImp.h"

#include <cmath>

namespace Bridge
{
	XWindowImp::XWindowImp()
	{

	}

	void XWindowImp::DeviceRect(Coord x0, Coord y0, Coord x1, Coord y1)
	{
		int x =0, y = 0, w = 0, h = 0;
// 		x = round(min(x0, x1));
// 		y = round(min(y0, y1));
// 		w = round(abs(x0 - x1));
// 		h = round(abs(y0 - y1));
		XDrawRectangle(_dpy, _winid, x,y,w,h);
	}

	void XWindowImp::XDrawRectangle(Display *, const Drawble &, int x,int y,int w,int h)
	{

	}

	void XWindowImp::ImpTop()
	{

	}

	void XWindowImp::ImpBottom()
	{

	}

	void XWindowImp::ImpSetExten(const Point &)
	{

	}

	void XWindowImp::ImpSetOrigin(const Point &)
	{

	}

	void XWindowImp::DeviceText(const char *, Coord, Coord)
	{

	}

	void XWindowImp::DeviceBitmap(const char *, Coord, Coord)
	{

	}
}
