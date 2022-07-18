abonent.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

class abonent
{
private:
	size_t ident_number;
	string familia;
	string name;
	string otchestvo;
	size_t credit_card;
	size_t debet;
	size_t credit;
	size_t  mezhdun_time;
	size_t  gorod_time;

public:
	abonent();
	abonent(size_t ident_number,
		string familia,
		string name,
		string otchestvo,
		size_t credit_card,
		size_t debet,
		size_t credit,
		size_t  mezhdun_time,
		size_t  gorod_time);
	size_t get_ident_number();
	string get_familia();
	string get_name();
	string get_otchestvo();
	size_t get_credit_card();
	size_t get_debet();
	size_t get_credit();
	size_t get_mezhdun_time();
	size_t get_gorod_time();
	void set_ident_number(size_t idnt_nmbr);
	void set_familia(string fml);
	void set_name(string nm);
	void set_otchestvo(string tchstv);
	void set_credit_card(size_t crdt_crd);
	void set_debet(size_t dbt);
	void set_credit(size_t crdt);
	void set_mezhdun_time(size_t mzhdn_tm);
	void set_gorod_time(size_t grd_tm);
	void show();
	
};

abonent.cpp
#include "abonent.h"

abonent::abonent()
{
}

abonent::abonent(size_t ident_number, string familia, string name, string otchestvo, size_t credit_card, size_t debet, size_t credit, size_t mezhdun_time, size_t gorod_time)
{
	this->ident_number = ident_number;
	this->familia = familia;
	this->name = name;
	this->otchestvo = otchestvo;
	this->credit_card = credit_card;
	this->debet = debet;
	this->credit = credit;
	this->mezhdun_time = mezhdun_time;
	this->gorod_time = gorod_time;
}

size_t abonent::get_ident_number()
{
	return ident_number;
}

string abonent::get_familia()
{
	return familia;
}

string abonent::get_name()
{
	return name;
}

string abonent::get_otchestvo()
{
	return otchestvo;
}

size_t abonent::get_credit_card()
{
	return credit_card;
}

size_t abonent::get_debet()
{
	return debet;
}

size_t abonent::get_credit()
{
	return credit;
}

size_t abonent::get_mezhdun_time()
{
	return mezhdun_time;
}

size_t abonent::get_gorod_time()
{
	return gorod_time;
}

void abonent::set_ident_number(size_t idnt_nmbr)
{
	ident_number = idnt_nmbr;
}

void abonent::set_familia(string fml)
{
	familia = fml;
}

void abonent::set_name(string nm)
{
	name = nm;
}

void abonent::set_otchestvo(string tchstv)
{
	otchestvo = tchstv;
}

void abonent::set_credit_card(size_t crdt_crd)
{
	credit_card = crdt_crd;
}

void abonent::set_debet(size_t dbt)
{
	debet = dbt;
}

void abonent::set_credit(size_t crdt)
{
	credit = crdt;
}

void abonent::set_mezhdun_time(size_t mzhdn_tm)
{
	mezhdun_time = mzhdn_tm;
}

void abonent::set_gorod_time(size_t grd_tm)
{
	gorod_time = grd_tm;
}

void abonent::show()
{
	cout << ident_number << familia << name << otchestvo << credit_card << debet << credit << mezhdun_time << gorod_time << endl;
}


main
#include <iostream>
#include <string>
#include "abonent.h"
#include <vector>

using namespace std;



int main() {

	setlocale(LC_ALL, "ru");

	abonent Me(33737,"ivanov","ivan","ivanovich",3478347,5858,3263,5,5);
	abonent You(27278,"sidorov","nikita","vladimirivich",3829174,5765,2633,3,7);
	vector<abonent> book = {Me, You};
	size_t SIZE = book.size();
	for (size_t i = 0; i <SIZE; i++)
	{
		if (book[i].get_gorod_time() < 6)
		{
			std::cout << book[i].get_gorod_time() << std::endl;
		}
		if (book[i].get_gorod_time() > 6)
		{
			std::cout << "доступ запрещен,вы превысили лимит" << std::endl;
		}
	}
	
}
