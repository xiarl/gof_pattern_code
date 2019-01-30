
namespace DecoratorNS
{
	class TextView : public Decorator
	{
	public:
		TextView(VisualComponent *);

		virtual void Draw();
	};
}
