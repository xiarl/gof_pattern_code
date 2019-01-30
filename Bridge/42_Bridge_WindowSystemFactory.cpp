#include "42_Bridge_Point.h"
#include "42_Bridge_Coord.h"
#include "42_Bridge_WindowImp.h"
#include "42_Bridge_WindowSystemFactory.h"

namespace Bridge
{
	WindowSystemFactory * WindowSystemFactory::_instance = 0;

	WindowSystemFactory * WindowSystemFactory::Instance()
	{
		if (_instance == 0)
		{
			_instance = new WindowSystemFactory;			
		}
		return _instance;
	}

	WindowSystemFactory::WindowSystemFactory()
	{

	}

	WindowSystemFactory::~WindowSystemFactory()
	{

	}

	WindowImp * WindowSystemFactory::MakeWindowImp()
	{
		return 0;
	}
}
