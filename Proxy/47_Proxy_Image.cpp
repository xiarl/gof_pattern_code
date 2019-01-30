#include <iostream>
#include "47_Proxy_Point.h"
#include "47_Proxy_Graphic.h"
#include "47_Proxy_Image.h"

namespace ProxyNS
{
	Image::Image(const char * file)
		:_extentPt(0,0)
	{

	}

	Image::~Image()
	{

	}

	void Image::Draw(const Point & at)
	{

	}

	void Image::HandleMouse(Event & event)
	{

	}

	const Point & Image::GetExtent()
	{
		return _extentPt;
	}

	void Image::Load(std::istream & from)
	{

	}
	void Image::Save(std::ostream & to)
	{

	}
}
