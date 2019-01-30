
namespace DecoratorNS
{
	class ScrollDecorator : public Decorator
	{
	public:
		ScrollDecorator(VisualComponent *);

		virtual void Draw();
// 	private:
// 		void DrawBorder(int);
// 	private:
// 		int _width;
	};
}
