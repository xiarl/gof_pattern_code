namespace CoR
{
	enum eRequestType
	{
		Help,
		Print,
		Preview,
	};

	class Request
	{
	public:
		virtual eRequestType GetKind()const;

	};

	class HelpRequest : public Request
	{

	};

	class PrintRequest : public Request
	{

	};
}
