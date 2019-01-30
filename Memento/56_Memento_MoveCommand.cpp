#include "56_Memento_Point.h"
#include "56_Memento_Graphic.h"
#include "56_Memento_ConstraintSolverMemento.h"
#include "56_Memento_MoveCommand.h"
#include "56_Memento_ConstraintSolver.h"

namespace MementoNS
{
	MoveCommand::MoveCommand(Graphic * target, const Point & delta)
		:_state(0), _delta(delta),_target(target)
	{
	}

	void MoveCommand::Execute()
	{
		ConstraintSolver * solver = ConstraintSolver::Instance();
		_state = solver->CreateMemento(); // create a memento
		_target->Move(_delta);
		solver->Solve();
	}

	void MoveCommand::Unexecute()
	{
		ConstraintSolver * solver = ConstraintSolver::Instance();
		_target->Move(-_delta);
		solver->SetMemento(_state); // restore solver state
		solver->Solve();
	}
}
