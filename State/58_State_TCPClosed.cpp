
#include "58_State_TCPOctetStream.h"
#include "58_State_TcpConnection.h"
#include "58_State_TcpState.h"
#include "58_State_TCPClosed.h"
#include "58_State_TCPEstablished.h"
#include "58_State_TCPListen.h"


namespace StateNS
{

	TCPClosed TCPClosed::ss_CState;

	TCPState * TCPClosed::Instance()
	{
		return &ss_CState;
	}

	void TCPClosed::ActiveOpen(TCPConnection * t)
	{
		// send SYN, receive SYN, ACK, etc

		ChangeState(t, TCPEstablished::Instance());
	}

	void TCPClosed::PassiveOpen(TCPConnection * t)
	{
		ChangeState(t, TCPListen::Instance());
	}
}

