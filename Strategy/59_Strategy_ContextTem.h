
namespace StrategyNS
{
	template<typename AStrategy>
	class Context
	{
		void operation()
		{
			theStrategy.DoAlgorithm();
		}
		// ...
	private:
		AStrategy theStrategy;
	};
}
