
namespace FactoryMethod
{
	enum ProductID
	{
		MINE,
		YOURS,
		THEIRS,
	};
	class Creator
	{
	public:
		Creator():_product(0)
		{

		}
		virtual Product * Create(ProductID id);

	public://lazy initialization
		Product * GetProduct();
	protected:
		virtual Product * CreateProduct() = 0;
	private:
		Product * _product;
	};
}
