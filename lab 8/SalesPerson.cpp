#include "SalesPerson.h"
#include <IOSTREAM>
#include <cstring>
using namespace std;

//d1
SalesPerson::SalesPerson(int pempNo,const char pName[]) {
	empNo = pempNo;
	strcpy_s(name, pName);

}

//d2
void SalesPerson::calcSales(Item i1, Item i2) {
	int qty1, qty2;

	cout << "Input quantity sold from 1 :";
	cin >> qty1;

	cout << "Input quantity sold from 2 :";
	cin >> qty2;

	sales = i1.calcTotal(qty1) + i2.calcTotal(qty2);
}

//d3
void SalesPerson::printSales(){
	cout << "Employee No :"<<empNo << endl ;
	cout << "Employee Name :" << name << endl ;
	cout << "Employee sales :" << sales << endl;
}

//d4
SalesPerson::~SalesPerson() {
	cout << "Emp No : " << empNo << "deleted" << endl;
}
