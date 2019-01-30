#include <set>
#include "57_Observer_Observer.h"
#include "57_Observer_Subject.h"

#include "57_Observer_ClockTimer.h"

namespace ObserverNS
{
	ClockTimer::ClockTimer()
	{
	}

	void ClockTimer::Tick()
	{
		// update internal time-kepping state
		// ...
		Notify();
	}

	int ClockTimer::GetHour()
	{

		return 1;
	}
	int ClockTimer::GetMinute()
	{

		return 2;
	}
	int ClockTimer::GetSecond()
	{

		return 3;
	}
}
