
namespace ProxyNS
{
	class Image : public Graphic
	{
	public:
		Image(const char * file);//load image from a file
		virtual ~Image();

		virtual void Draw(const Point & at);
		virtual void HandleMouse(Event & event);

		virtual const Point & GetExtent();

		virtual void Load(std::istream & from);
		virtual void Save(std::ostream & to);
	private:
		//...
		Point _extentPt;
	};
}
