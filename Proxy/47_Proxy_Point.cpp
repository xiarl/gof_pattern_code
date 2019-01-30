#include <iostream>
#include "47_Proxy_Point.h"

namespace ProxyNS
{
	Point::Point(int x,int y)
		:_x(x), _y(y)
	{

	}

	Point Point::Zero(0,0);

	bool Point::operator==(const Point & rp)
	{
		return _x == rp._x && _y == rp._y;
	}

	std::ostream & operator<<(std::ostream & os, const Point & pt)
	{
		os<<pt._x<<pt._y;
		return os;
	}
	std::istream & operator>>(std::istream & is, Point & pt)
	{
		is >> pt._x>>pt._y;
		return is;
	}
}
