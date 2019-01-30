//#include "41_Adapter_Manipulator.h"

namespace Adapter
{
	class TextManipulator : public Manipulator
	{
	public:
		explicit TextManipulator(const Shape * shapeObj);
	};
}

