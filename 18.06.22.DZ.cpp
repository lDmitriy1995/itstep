#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "record.h"
using namespace std;

class records
{
public:
	records();
	void show();
	void add_record(record obj);
	void give_the_total_cost();
	void pecified_interval();
	void bigger_price(double obj);
private:
	vector<record> _records;
};

record.h
#pragma once
#include <iostream>
#include <string>
using namespace std;
class record
{
private:
	size_t product_number;
	string product_name;
	size_t number_of_products;
	double price_of_1_product;
	double cost;
public:
	record();
	record(string str);
	size_t get_product_number();
	string get_product_name();
	size_t get_number_of_products();
	double get_price_of_1_product();
	double get_cost();
};


int main()
#include <iostream>
#include <fstream>
#include <string>
#include "record.h"
#include "records.h"

using namespace std;

int main() {
	records stock;
	ifstream ifs("heap.dat", ios::in);
	if (!ifs.bad())
	{
		char buffer[255];
		while (!ifs.eof())
		{
			ifs.getline(buffer, 255);
			stock.add_record(record(buffer));
		}
		ifs.close();
	}
	stock.give_the_total_cost();

	system("pause");

	return 0;
}

record.cpp
#include "record.h"

record::record()
{
	size_t product_number = 0;
	string product_name = 0;
	size_t number_of_products = 0;
	double price_of_1_product = 0.0;
	double cost = 0.0;
}

records.cpp
