#include "56_Memento_State.h"
#include "56_Menmento_Memento.h"

namespace MementoNS
{
	Memento::~Memento()
	{
	}

	Memento::Memento()
	{

	}

	void Memento::SetState(State * st)
	{
		_state = st;
	}

	State * Memento::GetState()
	{
		return _state;
	}
}
