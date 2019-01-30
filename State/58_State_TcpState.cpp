#include "58_State_TCPOctetStream.h"
#include "58_State_TcpConnection.h"
#include "58_State_TcpState.h"

namespace StateNS
{
	void TCPState::Transmit(TCPConnection *, TCPOctetStream *)
	{
	}

	void TCPState::ActiveOpen(TCPConnection *)
	{		
	}

	void TCPState::PassiveOpen(TCPConnection *)
	{		
	}

	void TCPState::Close(TCPConnection *)
	{		
	}

	void TCPState::Synchronize(TCPConnection *)
	{		
	}

	void TCPState::Acknowledge(TCPConnection *)
	{		
	}

	void TCPState::Send(TCPConnection *)
	{		
	}

	void TCPState::ChangeState(TCPConnection * t, TCPState * s)
	{
		t->ChangeState(s);
	}
}

