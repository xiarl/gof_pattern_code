
namespace StrategyNS
{
	class Compositor;
	class Composition
	{
	public:
		explicit Composition(Compositor *);
	private:
		Compositor * _compositor;
		Component * _components; //the list of components
		int _componentCount; //the number of components
		int _lineWidth; //the composition's line width
		int * _lineBreaks; //the position of linebreaks in components
		int _lineCount; // the number of lines
	public:
		void Repair();
	};
}
