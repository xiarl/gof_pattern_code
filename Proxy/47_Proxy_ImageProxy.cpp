#include <iostream>
#include "47_Proxy_Point.h"
#include "47_Proxy_Graphic.h"
#include "47_Proxy_Image.h"
#include "47_Proxy_ImageProxy.h"

namespace ProxyNS
{
	ImageProxy::ImageProxy(const char * file)
		:_extent(0,0), _image(0)
	{
		_fileName = strdup(file);
	}
	ImageProxy::~ImageProxy()
	{
		delete _image;
		delete _fileName;
	}

	Image * ImageProxy::GetImage()
	{
		if (_image == 0)
		{
			_image = new Image(_fileName);
		}
		return _image;
	}

	const Point & ImageProxy::GetExtent()
	{
		if (_extent == Point::Zero)
		{
			_extent = GetImage()->GetExtent();
		}
		return _extent;
	}

	void ImageProxy::Draw(const Point & at)
	{
		GetImage()->Draw(at);
	}

	void ImageProxy::HandleMouse(Event & event)
	{
		GetImage()->HandleMouse(event);
	}

	void ImageProxy::Save(std::ostream & to)
	{
		to << _extent <<_fileName;
	}

	void ImageProxy::Load(std::istream & from)
	{
		from >> _extent >>_fileName;
	}
}
