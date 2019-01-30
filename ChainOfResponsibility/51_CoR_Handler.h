
namespace CoR
{
	class Handler
	{
	public:
		void HandleRequest(Request * theRequest); // 这个是否需要设置为虚函数，区别？ [10/28/2018 xiarl]
		void HandleHelp(HelpRequest *);
		void HandlePrint(PrintRequest *);
	};
}

