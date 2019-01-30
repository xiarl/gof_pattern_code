
namespace CMDNS
{
	class Document;
	class PasteCommand : public Command
	{
	public:
		explicit PasteCommand(Document *);
		virtual void Execute();
	private:
		Document * _document;
	};
}
