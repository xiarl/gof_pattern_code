
namespace VisitorNS
{
	class CompositeElement;
	class ElementA;
	class ElementB;
	class Visitor
	{
	public:
		virtual void VisitElementA(ElementA *);
		virtual void VisitElementB(ElementB *);
		virtual void VisitCompositeElement(CompositeElement *){};

		// add so on for other concrete elements
	protected:
		Visitor();
	};
}
