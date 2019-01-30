
namespace VisitorNS
{
	class FloppyDisk : public Equipment
	{
	public:
		FloppyDisk();
		virtual void Accept(EquipmentVisitor &);
	};

	class Card : public Equipment
	{
	public:
		Card();
		virtual void Accept(EquipmentVisitor &);
	};


	class Chassis : public Equipment
	{
	public:
		Chassis();
		virtual void Accept(EquipmentVisitor &);
	private:
		std::vector<Equipment*> _parts;
	};


	class Bus : public Equipment
	{
	public:
		Bus();
		virtual void Accept(EquipmentVisitor &);
	};
}
