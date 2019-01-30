#include "52_Command_Command.h"
#include "52_Command_SimpleCommand.h"

namespace CMDNS
{

	class MyClass
	{
	public:
		void Action();
	};
	void MyClass::Action()
	{

	}

	void testtemplate_Command()
	{
		MyClass * recevier = new MyClass;
		//...
		Command * aCommand = new SimpleCommand<MyClass>(recevier, &MyClass::Action);
	}

}
