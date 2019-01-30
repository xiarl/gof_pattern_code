
namespace CompositeNS
{
	class Chassis : public CompositeEquipment
	{
	public:
		explicit Chassis(const char *);
		virtual ~Chassis(){};

		virtual Watt Power();
		virtual Currency NetPrice();
		virtual Currency DiscountPrice();
	};


	class Cabinet : public CompositeEquipment
	{
	public:
		explicit Cabinet(const char *);
		virtual ~Cabinet(){};

		virtual Watt Power();
		virtual Currency NetPrice();
		virtual Currency DiscountPrice();
	};


	class Bus : public CompositeEquipment
	{
	public:
		explicit Bus(const char *);
		virtual ~Bus(){};

		virtual Watt Power();
		virtual Currency NetPrice();
		virtual Currency DiscountPrice();
	};

	class Card : public CompositeEquipment
	{
	public:
		explicit Card(const char *);
		virtual ~Card(){};

		virtual Watt Power();
		virtual Currency NetPrice();
		virtual Currency DiscountPrice();
	};
}

