#include <set>
#include "57_Observer_Observer.h"
#include "57_Observer_Subject.h"
#include "57_Observer_ClockTimer.h"
#include "57_Observer_Widget.h"

#include "57_Observer_AnalogClock.h"
namespace ObserverNS
{
	AnalogClock::AnalogClock(ClockTimer * s)
		:_subject(s)
	{
		_subject->Attach(this);
	}

	AnalogClock::~AnalogClock()
	{
		_subject->Detach(this);
	}

	void AnalogClock::Update(Subject * theChangeSubject)
	{
		if (theChangeSubject == _subject)
		{
			Draw();
		}
	}

	void AnalogClock::Draw()
	{
		//get the new values from the subject
		int hour = _subject->GetHour();
		int minute = _subject->GetMinute();
		// etc.

		// draw the digital clock
	}
}
