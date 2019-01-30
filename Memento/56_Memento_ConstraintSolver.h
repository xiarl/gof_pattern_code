
namespace MementoNS
{
	class ConstraintSolver
	{
	public:
		static ConstraintSolver * Instance();

		void Solve();
		void AddConstraint(Graphic * startConnection, Graphic * endConnection);
		ConstraintSolverMemento * CreateMemento();
		void SetMemento(ConstraintSolverMemento *);
	private:
		// nontrival state and opperations for enforcing
		//connectivity semantics
		ConstraintSolverMemento * _csm;

		static ConstraintSolver ss_cs;
	};
}
