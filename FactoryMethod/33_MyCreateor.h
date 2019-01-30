namespace FactoryMethod
{
	class MyCreator : public Creator
	{
	public:
		virtual Product * Create(ProductID id);

	};
}
