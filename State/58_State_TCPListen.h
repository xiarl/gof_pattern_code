
namespace StateNS
{
	class TCPListen : public TCPState
	{
	public:
		static TCPState * Instance();

		virtual void Send(TCPConnection*);
		// ...
	private:
		static TCPListen ss_LState;
	};
}
