#include "Sales_data.h"
#include <iostream>

Sales_data& Sales_data::combine(const Sales_data& item)
{
	sold_units += item.sold_units;
	sales_volume += item.sales_volume;
	return *this;
}

istream & read(istream& is, Sales_data& item)
{
	double price;
	is >> item.bookNo >> item.sold_units >> price;
	item.sales_volume = item.sold_units * price;
	return is;
}
ostream& print(ostream& os, const Sales_data& item)
{
	cout << item.sold_units << " book "<< item.bookNo << " are sold"<<endl;
	if (item.revenue() >= item.target_volume)
	{
		cout << "achieve the goal!!" << endl;
	}
	return os;
}

double Sales_data::target_volume = 1000;