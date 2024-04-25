#include "item.h"
#include <IOSTREAM>
#include <cstring>
using namespace std;

//b1
Item::Item(int pItemNo, const char pName[]) {
	itemNo = pItemNo;
	strcpy_s(name, pName);
}

//b2
void Item::setPrice(double pPrice) {
	price = pPrice;

}

//b3
double Item::calcTotal(int qty) {
	return qty * price;
}

//b4
Item::~Item() {
	cout << "Item No : " << itemNo << "deleted" << endl;
}

