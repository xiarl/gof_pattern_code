#include "44_Decorator_VisualComponent.h"
#include "44_Decorator_Decorator.h"


namespace DecoratorNS
{
	Decorator::Decorator(VisualComponent * ac):_component(ac)
	{

	}

	void Decorator::Draw()
	{
		_component->Draw();
	}
	void Decorator::Resize()
	{
		_component->Resize();
	}
}
