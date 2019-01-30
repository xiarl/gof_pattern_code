
namespace MediatorNS
{
	class Button : public Widget
	{
	public:
		Button(DialogDirector *);

		virtual void SetText(const char * text);
		virtual void HandleMouse(MouseEvent & event);
		//...

	private:
		std::string _text;
	};
}
