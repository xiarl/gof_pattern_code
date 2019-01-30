#include "59_Strategy_Component.h"
#include "59_Strategy_Composition.h"
#include "59_Strategy_Coord.h"
#include "59_Strategy_Compositor.h"

namespace StrategyNS
{
	Composition::Composition(Compositor * cr)
		:_compositor(cr), _components(0), _componentCount(0)
		, _lineWidth(0), _lineBreaks(0), _lineCount(0)
	{

	}

	void Composition::Repair()
	{
		Coord * natural = 0;
		Coord * stretchability = 0;
		Coord * shrinkability = 0;
		int componentCount = 0;
		int * breaks = 0;

		// prepare the arrays with the desired component sizes
		// ...

		// determine where the breaks are:
		int breakCount;
		breakCount = _compositor->Compose(natural, stretchability, shrinkability,
			componentCount, _lineWidth, breaks);

		// lay out components accrding to breaks
		// ...
	}
}
