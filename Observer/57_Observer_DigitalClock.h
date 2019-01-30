
namespace ObserverNS
{
	class DigitalClock : public Widget, public Observer
	{
	public:
		DigitalClock(ClockTimer *);
		virtual ~DigitalClock();

		virtual void Update(Subject * theChangeSubject);
		// overrides Observer operation

		virtual void Draw();
		// overrides widget operation
		// defines how to draw the digital clock
	private:
		ClockTimer * _subject;
	};
}
