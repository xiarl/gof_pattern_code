
namespace MementoNS
{
	class MoveCommand
	{
	public:
		MoveCommand(Graphic * target, const Point & delta);
		void Execute();
		void Unexecute();
	private:
		ConstraintSolverMemento * _state;
		Point _delta;
		Graphic * _target;
	};
}
