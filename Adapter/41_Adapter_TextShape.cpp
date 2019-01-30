
#include "41_Adapter_Coord.h"
#include "41_Adapter_Point.h"

#include "41_Adapter_Shape.h"
#include "41_Adapter_Manipulator.h"
#include "41_Adapter_TextManipulator.h"

#include "41_Adapter_TextView.h"
#include "41_Adapter_TextShape.h"


namespace Adapter_Class
{
	TextShape::TextShape()
	{

	}

	void TextShape::BoundingBox(Adapter::Point & bottomLeft, Adapter::Point & topRight)const
	{
		Adapter::Coord bottom, left, width, height;

		GetOrigin(bottom, left);
		GetOrigin(width, height);

		bottomLeft = Adapter::Point(bottom, left);
		topRight = Adapter::Point(bottom+height, left+width);
	}

	bool TextShape::IsEmpty()const
	{

		return Adapter::TextView::IsEmpty();
	}

	Adapter::Manipulator * TextShape::CreateManipulator()const
	{
		return new Adapter::TextManipulator(this);
	}

}



namespace Adapter_Obj
{
	TextShape::TextShape(Adapter::TextView * t):_text(t)
	{

	}

	void TextShape::BoundingBox(Adapter::Point & bottomLeft, Adapter::Point & topRight)const
	{
		Adapter::Coord bottom, left, width, height;

		_text->GetOrigin(bottom, left);
		_text->GetOrigin(width, height);

		bottomLeft = Adapter::Point(bottom, left);
		topRight = Adapter::Point(bottom+height, left+width);
	}

	bool TextShape::IsEmpty()const
	{

		return _text->IsEmpty();
	}

	Adapter::Manipulator * TextShape::CreateManipulator()const
	{
		return new Adapter::TextManipulator(this);
	}

}
