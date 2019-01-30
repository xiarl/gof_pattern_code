
namespace ObserverNS
{
	class Subject;

	class Observer
	{
	public:
		virtual ~Observer(){};
		virtual void Update(Subject * theChangeSubject) = 0;
	protected:
		Observer(){};
	};
}
