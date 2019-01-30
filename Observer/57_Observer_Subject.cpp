#include <set>
#include "57_Observer_Observer.h"
#include "57_Observer_Subject.h"

namespace ObserverNS
{
	Subject::Subject()
	{
	}
	Subject::~Subject()
	{
	}

	void Subject::Attach(Observer * ob)
	{
		_observers.insert(ob);
	}

	void Subject::Detach(Observer * ob)
	{
		_observers.erase(ob);
	}

	void Subject::Notify()
	{
		for (std::set<Observer*>::iterator iter = _observers.begin();
			iter != _observers.end(); ++iter)
		{
			(*iter)->Update(this);
		}
	}
}
