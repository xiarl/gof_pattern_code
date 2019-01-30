#include <set>
#include "57_Observer_Observer.h"
#include "57_Observer_Subject.h"
#include "57_Observer_ClockTimer.h"
#include "57_Observer_Widget.h"

#include "57_Observer_DigitalClock.h"
#include "57_Observer_AnalogClock.h"

namespace ObserverNS
{
	ClockTimer * timer = new ClockTimer;
	AnalogClock * analogClock = new AnalogClock(timer);
	DigitalClock * digitalClock = new DigitalClock(timer);
}
