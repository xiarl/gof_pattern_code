namespace Bridge
{
	class WindowImp
	{
	public:
		virtual void ImpTop() = 0;
		virtual void ImpBottom() = 0;
		virtual void ImpSetExten(const Point &) = 0;
		virtual void ImpSetOrigin(const Point &) = 0;

		virtual void DeviceRect(Coord, Coord, Coord, Coord) = 0;
		virtual void DeviceText(const char *, Coord, Coord) = 0;
		virtual void DeviceBitmap(const char *, Coord, Coord) = 0;
		//lots more function for drawing on windows

	protected:
		WindowImp();
	};
}
