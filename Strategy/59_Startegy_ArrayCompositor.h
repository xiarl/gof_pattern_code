
namespace StrategyNS
{
	class ArrayCompositor : public Compositor
	{
	public:
		explicit ArrayCompositor(int );

		virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
			int componentCount, int lineWidth, int breaks[]);
		// ...
	};
}
