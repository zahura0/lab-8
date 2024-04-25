#pragma once

class Item
{
private:
	int itemNo;
	char name[20];
	double price;

public:
	Item(int pItemNo,const char pName[]);
	void setPrice(double pPrice);
	double calcTotal(int qty);
	~Item();
};
