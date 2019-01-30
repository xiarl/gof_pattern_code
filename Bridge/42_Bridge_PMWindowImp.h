
namespace Bridge
{
	class HPS
	{

	};

	class PMWindowImp : public WindowImp
	{
	public:
		PMWindowImp();

		// remainder of public interface ...
		virtual void ImpTop();
		virtual void ImpBottom();
		virtual void ImpSetExten(const Point &);
		virtual void ImpSetOrigin(const Point &);

		virtual void DeviceRect(Coord, Coord, Coord, Coord);
		virtual void DeviceText(const char *, Coord, Coord);
		virtual void DeviceBitmap(const char *, Coord, Coord);

	private:
		// lots of PM Window system-specific state, including:
		HPS _hps;
	};
}
