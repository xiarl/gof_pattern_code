#include <iostream>
#include "45_Facade_Token.h"
#include "45_Facade_Scanner.h"

namespace FacadeNS
{
	Scanner::Scanner(std::istream & is)
		:_inputStream(is)
	{

	}

	Scanner::~Scanner(){}

	Token & Scanner::Scan()
	{
		// set _currToken from _inputStream
		return _currToken;
	}
}
