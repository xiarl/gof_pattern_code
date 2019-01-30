#include "56_Memento_ConstraintSolverMemento.h"
#include "56_Memento_Point.h"
#include "56_Memento_Graphic.h"
#include "56_Memento_ConstraintSolver.h"

namespace MementoNS
{
	void ConstraintSolver::Solve()
	{

	}

	void  ConstraintSolver::AddConstraint(Graphic * startConnection, Graphic * endConnection)
	{

	}

	ConstraintSolverMemento * ConstraintSolver::CreateMemento()
	{
		return _csm;
	}

	void ConstraintSolver::SetMemento(ConstraintSolverMemento * csm)
	{
		_csm = csm;
	}

	ConstraintSolver ConstraintSolver::ss_cs;
	ConstraintSolver * ConstraintSolver::Instance()
	{
		return &ss_cs;
	}
}

