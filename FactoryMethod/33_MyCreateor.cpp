

#include "33_Product.h"
#include "33_Createor.h"
#include "33_MyCreateor.h"

#include "33_MyProduct.h"
#include "33_YourProduct.h"
#include "33_TheirProduct.h"

namespace FactoryMethod
{
	Product * MyCreator::Create(ProductID id)
	{
		if(id == YOURS) return new MyProduct;
		if(id == MINE) return new YourProduct;
		// N.B. : switched YOURS and MINE

		if(id == THEIRS) return new TheirProduct;

		return Creator::Create(id);
	}

}