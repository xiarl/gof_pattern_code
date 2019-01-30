#include <iostream>
#include "47_Proxy_Point.h"
#include "47_Proxy_Graphic.h"
#include "47_Proxy_Image.h"
#include "47_Proxy_ImagePtr.h"

namespace ProxyNS
{
	Image * LoadAnImageFile(const char * file)
	{
		return new Image(file);
	}

	ImagePtr::ImagePtr(const char * imageFile)
		:_image(0), _imageFile(imageFile)
	{

	}

	ImagePtr::~ImagePtr()
	{
		delete _image;
	}

	Image * ImagePtr::operator->()
	{
		if (0 == _image)
		{
			LoadImage();
		}
		return _image;
	}

	Image & ImagePtr::operator *()
	{
		if (0 == _image)
		{
			LoadImage();
		}
		return *_image;
	}

	Image * ImagePtr::LoadImage()
	{
		if (0 == _image)
		{
			_image = LoadAnImageFile(_imageFile);
		}
		return _image;
	}

	void test_fun_Proxy_image()
	{
		ImagePtr imageP = ImagePtr("anImageFileName");
// 		imageP->Draw(Point(50, 100));
// 			//(image.operator->())->Draw(Point(50, 100));
	}
}
