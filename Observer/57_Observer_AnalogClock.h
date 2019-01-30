
namespace ObserverNS
{
	class AnalogClock : public Widget, public Observer
	{
	public:
		AnalogClock(ClockTimer *);
		virtual ~AnalogClock();

		virtual void Update(Subject * theChangeSubject);
		// overrides Observer operation

		virtual void Draw();
		// overrides widget operation
		// defines how to draw the digital clock
	private:
		ClockTimer * _subject;
	};
}
