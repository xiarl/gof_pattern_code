
namespace StrategyNS
{
	class TexCompositor : public Compositor
	{
	public:
		TexCompositor();

		virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
			int componentCount, int lineWidth, int breaks[]);
		// ...
	};
}
