namespace StateNS
{
	class TCPState
	{
	public:
		virtual void Transmit(TCPConnection *, TCPOctetStream *);
		virtual void ActiveOpen(TCPConnection *);
		virtual void PassiveOpen(TCPConnection *);
		virtual void Close(TCPConnection*);
		virtual void Synchronize(TCPConnection*);
		virtual void Acknowledge(TCPConnection*);
		virtual void Send(TCPConnection*);
	protected:
		void ChangeState(TCPConnection *, TCPState *);
	};
}
