
namespace MediatorNS
{
	class ListBox : public Widget
	{
	public:
		ListBox(DialogDirector *);

		virtual const char * GetSelection();
		virtual void SetList(std::vector<char *> * listItems);
		virtual void HandleMouse(MouseEvent & event);
		//...
	private:
		int _lineSel;
		std::vector<char *> _listItems;
	};
}
