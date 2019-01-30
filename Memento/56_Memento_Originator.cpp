
#include "56_Memento_State.h"
#include "56_Menmento_Memento.h"
#include "56_Memento_Originator.h"

namespace MementoNS
{
	Memento * Originator::CreateMemento()
	{
		return 0;
	}

	void Originator::SetMemento(const Memento *)
	{

	}
}
