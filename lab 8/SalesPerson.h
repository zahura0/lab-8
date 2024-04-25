#pragma once
#include "item.h"

class SalesPerson
{
private:
	int empNo;
	char name[20];
	double sales;

public:
	SalesPerson(int empNo,const char pName[]);
	void calcSales(Item i1 , Item i2);
	void printSales();
	~SalesPerson();
};
