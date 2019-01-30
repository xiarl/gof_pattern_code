namespace MementoNS
{
	class ConstraintSolver;

	class ConstraintSolverMemento
	{
	public:
		virtual ~ConstraintSolverMemento();
	private:
		friend class ConstraintSolver; // .....!!!!!!!!!!!friend .....
		ConstraintSolverMemento();

		//private constraint solver state
	};
}