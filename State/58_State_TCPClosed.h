
namespace StateNS
{
	class TCPClosed : public TCPState
	{
	public:
		static TCPState * Instance();

		virtual void ActiveOpen(TCPConnection *);
		virtual void PassiveOpen(TCPConnection *);
	private:
		static TCPClosed ss_CState;
	};
}

