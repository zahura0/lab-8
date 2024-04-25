#include <iostream>
#include "SalesPerson.h"
#include<iostream>
using namespace std;


int main()
{	
	/*/static 
	
	//e1
	SalesPerson s1(001, "Amal");

	Item i1(1001, "Shampoo");
	Item i2(2002, "Conditioner");

	i1.setPrice(1000);
	i2.setPrice(2000);

	s1.calcSales(i1,i2);
	s1.printSales();*/


	//dynamic

	//e2
	
	SalesPerson* s1 = new SalesPerson(001, "Amal");

	Item *i1 = new Item(1001, "Shampoo");
	Item *i2 = new Item(2002, "Conditioner");

	i1->setPrice(1000);
	i2->setPrice(2000);

	s1->calcSales(*i1 , *i2);
	s1->printSales();

	delete i1, i2, s1;

	return 0;
}
