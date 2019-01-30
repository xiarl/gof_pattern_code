
namespace CMDNS
{

	template<typename Receiver>
	class SimpleCommand : public Command
	{
	public:
		typedef void (Receiver::* Action)();

		SimpleCommand(Receiver * r, Action a)
			:_receiver(r), _action(a)
		{

		}

		virtual void Execute();

	private:
		Action _action;
		Receiver * _receiver;
	};

	template<typename Receiver>
	void SimpleCommand<Receiver>::Execute()
	{
		(_receiver->*_action)();
	}
}
