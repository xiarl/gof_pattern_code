#include "59_Strategy_ContextTem.h"

#include "59_Strategy_Coord.h"
#include "59_Strategy_Compositor.h"
#include "59_Strategy_SimpleCompositor.h"
#include "59_Strategy_TexCompositor.h"
#include "59_Startegy_ArrayCompositor.h"

#include "59_Strategy_Component.h"
#include "59_Strategy_Composition.h"

namespace StrategyNS
{
	class MyStrategy
	{
	public:
		void DoAlgorithm();
	};
	void funtestTemplate()
	{
		Context<MyStrategy> aContext;
	}

	void funtest_tt()
	{
		Composition * quick = new Composition(new SimpleCompositor);
		Composition * slick = new Composition(new TexCompositor);
		Composition * iconic = new Composition(new ArrayCompositor(100));
	}
}
