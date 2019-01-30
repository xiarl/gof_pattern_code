#include "44_Decorator_VisualComponent.h"
#include "44_Decorator_Decorator.h"
#include "44_Decorator_BorderDecorator.h"


namespace DecoratorNS
{
	BorderDecorator::BorderDecorator(VisualComponent * ac, int borderWidth)
		:Decorator(ac), _width(borderWidth)
	{

	}

	void BorderDecorator::DrawBorder(int width)
	{

	}

	void BorderDecorator::Draw()
	{
		Decorator::Draw();
		DrawBorder(_width);
	}

}
