
#include "33_Product.h"
#include "33_Createor.h"

#include "33_MyProduct.h"
#include "33_YourProduct.h"

namespace FactoryMethod
{
	Product * Creator::Create(ProductID id)
	{
		if(id == MINE) return new MyProduct;
		if(id == YOURS) return new YourProduct;
		// repeat for remaining products

		return 0;
	}

	Product * Creator::GetProduct()
	{
		if (_product == 0)
		{
			_product = CreateProduct();
		}
		return _product;
	}
}