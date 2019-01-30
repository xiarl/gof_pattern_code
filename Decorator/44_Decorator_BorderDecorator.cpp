#include "44_Decorator_VisualComponent.h"
#include "44_Decorator_Decorator.h"
#include "44_Decorator_ScrollDecorator.h"


namespace DecoratorNS
{
	ScrollDecorator::ScrollDecorator(VisualComponent * ac)
		:Decorator(ac)
	{

	}


	void ScrollDecorator::Draw()
	{
		Decorator::Draw();
	//	DrawBorder(_width);
	}

}

