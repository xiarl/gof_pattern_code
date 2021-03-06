
namespace VisitorNS
{
	class PricingVisitor : public EquipmentVisitor
	{
	public:
		PricingVisitor();
		Currency GetTotalPrice();

		virtual void VisitFloppyDisk(FloppyDisk *);
	//	virtual void VisitCard(Card *);
		virtual void VisitChassis(Chassis *);
	//	virtual void VisitBus(Bus *);
		// ...
	private:
		Currency _total;
	};
}
