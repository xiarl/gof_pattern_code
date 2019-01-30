#include "58_State_TCPOctetStream.h"
#include "58_State_TcpConnection.h"
#include "58_State_TcpState.h"
#include "58_State_TCPEstablished.h"
#include "58_State_TCPListen.h"

namespace StateNS
{

	TCPEstablished TCPEstablished::ss_EState;

	TCPState * TCPEstablished::Instance()
	{
		return &ss_EState;
	}

	void TCPEstablished::Transmit(TCPConnection * t, TCPOctetStream * o)
	{
		t->ProcessOctet(o);
	}

	void TCPEstablished::Close(TCPConnection * t)
	{
		// send FIN , receive ACK of FIN

		ChangeState(t, TCPListen::Instance());
	}
}
