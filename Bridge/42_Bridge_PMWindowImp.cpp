#include "42_Bridge_Coord.h"
#include "42_Bridge_Point.h"
#include "42_Bridge_WindowImp.h"
#include "42_Bridge_PMWindowImp.h"


namespace Bridge
{
	PMWindowImp::PMWindowImp()
	{

	}

	void PMWindowImp::DeviceRect(Coord, Coord, Coord, Coord)
	{
		//..........很多特化内容
	}

	void PMWindowImp::ImpTop()
	{

	}

	void PMWindowImp::ImpBottom()
	{

	}

	void PMWindowImp::ImpSetExten(const Point &)
	{

	}

	void PMWindowImp::ImpSetOrigin(const Point &)
	{

	}

	void PMWindowImp::DeviceText(const char *, Coord, Coord)
	{

	}

	void PMWindowImp::DeviceBitmap(const char *, Coord, Coord)
	{

	}
}

