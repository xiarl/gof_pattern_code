
namespace Bridge
{

	class Display
	{

	};

	class Drawble
	{

	};

	class GC
	{

	};

	class XWindowImp : public WindowImp
	{
	public:
		XWindowImp();

		// remainder of public interface ...
		virtual void ImpTop();
		virtual void ImpBottom();
		virtual void ImpSetExten(const Point &);
		virtual void ImpSetOrigin(const Point &);

		virtual void DeviceRect(Coord, Coord, Coord, Coord);
		virtual void DeviceText(const char *, Coord, Coord);
		virtual void DeviceBitmap(const char *, Coord, Coord);

	private:
		// lots of X window system-specific state, including:
		Display * _dpy;
		Drawble _winid; //window id
		GC _gc; // window graphic context

		void XDrawRectangle(Display *, const Drawble &, int x,int y,int w,int h);
	};
}
