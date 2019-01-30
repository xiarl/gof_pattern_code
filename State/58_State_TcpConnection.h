
namespace StateNS
{
	class TCPOctetStream;
	class TCPState;

	class TCPConnection
	{
	public:
		TCPConnection();

		void ActiveOpen();
		void PassiveOpen();
		void Close();

		void Send();
		void Acknowledge();
		void Synchronize();

		void ProcessOctet(TCPOctetStream *);
	private:
		friend class TCPState;
		void ChangeState(TCPState *);
	private:
		TCPState * _state;
	};
}
