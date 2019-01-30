
namespace ProxyNS
{
	class Graphic
	{
	public:
		virtual ~Graphic(){};

		virtual void Draw(const Point & at) = 0;
		virtual void HandleMouse(Event & event) = 0;

		virtual const Point & GetExtent() = 0;

		virtual void Load(std::istream & at) = 0;
		virtual void Save(std::ostream & at) = 0;
	protected:
		Graphic(){}
	};
}
