#include <iostream>
#include "47_Proxy_Point.h"
#include "47_Proxy_Graphic.h"
#include "47_Proxy_Image.h"

#include "47_Proxy_TextDocument.h"
#include "47_Proxy_ImageProxy.h"

namespace ProxyNS
{
	void fun_test()
	{
		TextDocument * text = new TextDocument;
		// ...
		text->Insert(new ImageProxy("anImageFileName"));
	}
}
