#pragma once
#include <iostream>
#include <string>
#include "kassir.h"

using namespace std;
class check
{
private:
	size_t number_train;
	string name_station;
	size_t cash;
	kassir name;
public:
	check 
	size_t get_cash();

};


kassir.h
#pragma once
#include <iostream>
#include <string>
#include "request.h"
using namespace std;

class kassir
{
private:
	string name_k;
	request zayavka;
public:
	string get_name_k();
	void set_name_k(string nk);
};


passeger.h
#pragma once
#include <iostream>
#include <string>
#include "check.h"

using namespace std;

class passager
{
private:
	string name;
	check ckeck_p;
public:
	string get_name();
	string set_name(string nm);

};


request.h
#pragma once
#include <iostream>
#include <string>
#include "passager.h"
using namespace std;
class request
{
private:
	string number_station;
	passager _name;
public:
	check get_name_station(string ns);

}


train.h
#pragma once
#include <iostream>
#include <string>
#include <list>
#include "request.h"
using namespace std;

class train
{
private:
	string number_t;
	list<string>station;
	
public:
	string get_number_t();
	void set_number_t(size_t nt);
	train(list<string>nmt);
};


train.cpp
#include "train.h"

string train::get_number_t()
{
	return number_t;
}

void train::set_number_t(size_t nt)
{
	number_t = nt;
}

train::train(list<string> nmt)
{
	station = nmt;

}


passager.cpp
#include "passager.h"

string passager::get_name()
{
	return name;
}

string passager::set_name(string nm)
{
	name = nm;
}



kassir.cpp
#include "kassir.h"

string kassir::get_name_k()
{
    return name_k;
}

void kassir::set_name_k(string nk)
{
    name_k = nk;
}
