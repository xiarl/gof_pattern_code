
namespace MediatorNS
{
	class FontDialogDirector : public DialogDirector
	{
	public:
		FontDialogDirector();
		virtual ~FontDialogDirector();
		virtual void WidgetChange(Widget *);

	protected:
		virtual void CreateWidgets();

	private:
		Button * _ok;
		Button * _cancel;
		ListBox * _fontList;
		EntryField * _fontName;
	};
}
