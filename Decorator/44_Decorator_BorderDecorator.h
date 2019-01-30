
namespace DecoratorNS
{
	class BorderDecorator : public Decorator
	{
	public:
		BorderDecorator(VisualComponent *, int borderWidth);

		virtual void Draw();
	private:
		void DrawBorder(int);
	private:
		int _width;
	};
}

