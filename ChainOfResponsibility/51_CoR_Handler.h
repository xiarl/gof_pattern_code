
namespace CoR
{
	class Handler
	{
	public:
		void HandleRequest(Request * theRequest); // ����Ƿ���Ҫ����Ϊ�麯�������� [10/28/2018 xiarl]
		void HandleHelp(HelpRequest *);
		void HandlePrint(PrintRequest *);
	};
}

