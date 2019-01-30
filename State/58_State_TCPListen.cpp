
#include "58_State_TCPOctetStream.h"
#include "58_State_TcpConnection.h"
#include "58_State_TcpState.h"
#include "58_State_TCPListen.h"
#include "58_State_TCPEstablished.h"


namespace StateNS
{

	TCPListen TCPListen::ss_LState;

	TCPState * TCPListen::Instance()
	{
		return &ss_LState;
	}

	void TCPListen::Send(TCPConnection * t)
	{
		// send SYN , receive SYN, ACK, etc
		ChangeState(t, TCPEstablished::Instance());
	}


}
