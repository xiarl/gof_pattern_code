
#include "46_FlyWeight_BTree.h"
#include "46_FlyWeight_FontWindow.h"
#include "46_FlyWeight_GlyphContext.h"

namespace FlyWeightNS
{
	void funTest_flyweight()
	{
		GlyphContext gc;
		Font * times12 = new Font("Times-Roman-12");
		Font * timeItalic2 = new Font("Times-Italic-12");
		//...

		gc.SetFont(times12, 6);

		gc.Insert(6);
		gc.SetFont(timeItalic2, 6);
	}
}
