#pragma once
#include <string>
using namespace std;
class Sales_data
{
public:
	friend istream& read(istream&, Sales_data&);
	friend ostream& print(ostream& os, const Sales_data& item);
	const string& isbn() const { return bookNo; }
	double revenue() const { return sales_volume; }
	Sales_data& combine(const Sales_data&);
	double average() const { return sales_volume / sold_units; }
	static double target_volume;
private:
	string bookNo;
	unsigned sold_units = 0;
	double sales_volume = 0.0;
};

istream& read(istream&, Sales_data&);
ostream& print(ostream&, const Sales_data&);
