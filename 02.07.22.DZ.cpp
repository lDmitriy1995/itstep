#include <iostream>
#include <string>
#include <list>
#include "group.h"
#include "student.h"
using namespace std;
//class book
//{
//public:
//	book(string str, size_t pg) : name(str), pages(pg) {}
//	void set_name(string str) { name = str;}
//	void set_pages(size_t pg) { pages = pg; }
//	string get_name() { return name; }
//	size_t get_pages() { return pages;}
//	/*bool operator<(const book& obj) { return pages < obj.pages; }*/
//	bool operator<(const book& obj) { return name < obj.name; }
//private:
//	string name;
//	size_t pages;
//};
//
//
//
//class books
//{
//public:
//	void add(book bk) { _books.push_back(bk); }
//	void show() { 
//		for (auto it = _books.begin(); it != _books.end(); it++)
//			cout << (*it).get_name() << " - " 
//			<< (*it).get_pages() << endl;
//	}
//	void sort() { _books.sort(); }
//private:
//	list<book> _books;
//};
//



int main() {
	group parta;
	/*book obj;
	obj.set_name("Test book");
	obj.set_pages(100);*/


	parta.add(student("yona" , "mona"));
	parta.add(student("beks", "keks"));
	parta.show();
	parta.sort();
	parta.show();
	return 0;
}

group.h
#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include <list>

class group
{
public:
	void add(student stdn);
	void show() {
		for (auto it = _group.begin(); it != _group.end(); it++)
			cout << (*it).get_name() << " - "
			<< (*it).get_surname() << endl;
	}
	void uspevaemost(student srnm ,student nm ,student nmbr_grp , student grd);

	void sort() { _group.sort(); }
private:
	list<student> _group;
};

group.cpp
#include "group.h"

void group::add(student stdn)
{
	_group.push_back(stdn);
}

void group::uspevaemost(string srnm, string nm, size_t number_group, size_t grades)
{


}


student.h
#pragma once
#include <iostream>
#include <string>
#include "group.h"

using namespace std;
class student
{
public:
	student(string nm, string srnm) : name(nm), surname(srnm) {}
	void set_name(string nm);
	void set_surname(string srnm) { surname = srnm; }
	string get_name() { return name; }
	string get_surname();
	bool operator<(const student& obj) { return name < obj.name; }
private:
	string surname;
	string name;
	size_t number_group;
	size_t grades;

};

student.cpp
#include "student.h"

void student::set_name(string nm)
{
	name = nm;
}

string student::get_surname()
{
	return surname;
}
