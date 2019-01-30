
namespace VisitorNS
{
	class FloppyDisk;
	class Card;
	class Chassis;
	class Bus;
	class EquipmentVisitor
	{
	public:
		virtual ~EquipmentVisitor(){};

		virtual void VisitFloppyDisk(FloppyDisk *){};
		virtual void VisitCard(Card *){};
		virtual void VisitChassis(Chassis *){};
		virtual void VisitBus(Bus *){};

		// and so on for other concrete subclasses of Equipment
	protected:
		EquipmentVisitor(){};
	};
}
