#include "59_Strategy_Coord.h"
#include "59_Strategy_Compositor.h"
#include "59_Startegy_ArrayCompositor.h"


namespace StrategyNS
{
	ArrayCompositor::ArrayCompositor(int)
	{
	}

	int ArrayCompositor::Compose(Coord natural[], Coord stretch[], Coord shrink[], 
		int componentCount, int lineWidth, int breaks[])
	{
		return 0;
	}
}