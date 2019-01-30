
namespace CMDNS
{
	class Application
	{
	public:
		void AddDocument(Document * doc);
	private:
		std::vector<Document*> _docs;
	};
}
