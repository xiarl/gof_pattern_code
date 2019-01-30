//#include "41_Adapter_Shape.h"
//#include "41_Adapter_TextView.h"

namespace Adapter_Class
{
	class TextShape : public Adapter::Shape, public Adapter::TextView
	{
	public:
		TextShape();

		virtual void BoundingBox(Adapter::Point & bottomLeft, Adapter::Point & topRight)const;
		virtual bool IsEmpty()const;
		virtual Adapter::Manipulator * CreateManipulator()const;
	};

}

namespace Adapter_Obj
{
	class TextShape : public Adapter::Shape
	{
	public:
		explicit TextShape(Adapter::TextView *);

		virtual void BoundingBox(Adapter::Point & bottomLeft, Adapter::Point & topRight)const;
		virtual bool IsEmpty()const;
		virtual Adapter::Manipulator * CreateManipulator()const;
	private:
		Adapter::TextView * _text;
	};
}

