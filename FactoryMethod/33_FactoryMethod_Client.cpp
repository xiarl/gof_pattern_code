#include "33_Product.h"

#include "33_MyProduct.h"

#include "33_Createor.h"
#include "33_Template.h"

void Test_FactoryMethod_fun()
{
	FactoryMethod::StandardCreator<FactoryMethod::MyProduct> myCreator;
	FactoryMethod::Product * pGet = myCreator.CreateProduct();
}