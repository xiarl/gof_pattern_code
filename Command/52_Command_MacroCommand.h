
namespace CMDNS
{
	class MacroCommand : public Command
	{
	public:
		MacroCommand();
		virtual ~MacroCommand();

		virtual void Add(Command *);
		virtual void Remove(Command *);

		virtual void Execute();
	private:
		std::vector<Command*> _cmds;
	};
}
