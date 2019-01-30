
#include "44_Decorator_VisualComponent.h"
#include "44_Decorator_Decorator.h"

#include "44_Decorator_TextView.h"
#include "44_Decorator_ScrollDecorator.h"
#include "44_Decorator_BorderDecorator.h"

namespace DecoratorNS
{

	void UseComponent(VisualComponent * contents)
	{

	}


	void funTestDecorator()
	{
		TextView * textView = new TextView(0);
		UseComponent(new BorderDecorator(new ScrollDecorator(textView), 1));
	}
}
