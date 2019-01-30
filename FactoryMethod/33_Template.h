
namespace FactoryMethod
{
	template <class TheProduct>
	class StandardCreator : public Creator
	{
	public:
		virtual Product * CreateProduct();
	};

	template <class TheProduct>
	Product * StandardCreator<TheProduct>::CreateProduct()
	{
		return new TheProduct;
	}
}

