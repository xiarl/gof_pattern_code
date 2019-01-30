

namespace MediatorNS
{

	class Widget
	{
	public:
		Widget(DialogDirector *);
		virtual void Changed();

		virtual void HandleMouse(MouseEvent & event);
		//...
	private:
		DialogDirector * _director;
	};
}

