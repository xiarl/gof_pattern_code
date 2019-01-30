
namespace StateNS
{
	class TCPEstablished : public TCPState
	{
	public:
		static TCPState * Instance();

		virtual void Transmit(TCPConnection *, TCPOctetStream *);
		virtual void Close(TCPConnection*);
	private:
		static TCPEstablished ss_EState;
	};
}
