
namespace ObserverNS
{
	class Subject
	{
	public:
		virtual ~Subject();

		virtual void Attach(Observer *);
		virtual void Detach(Observer *);
		virtual void Notify();
	protected:
		Subject();
	private:
		std::set<Observer*>  _observers;
	};
}
