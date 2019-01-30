#include "44_Decorator_VisualComponent.h"
#include "44_Decorator_Decorator.h"
#include "44_Decorator_TextView.h"


namespace DecoratorNS
{
	TextView::TextView(VisualComponent * ac)
		:Decorator(ac)
	{

	}


	void TextView::Draw()
	{
		Decorator::Draw();
	}

}