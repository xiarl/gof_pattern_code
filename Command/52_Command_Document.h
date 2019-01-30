
namespace CMDNS
{
	class Document
	{
	public:
		explicit Document(const char *);
		void Open();
		void Paste();
	private:
		const char * _name;
	};
}