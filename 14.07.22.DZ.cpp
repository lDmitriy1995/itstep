#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "ASet.h"
using namespace std;

int main()
{
	ASet tez(1, 10);
	tez.incl(15);
	tez.excl(4);
	tez.print();
}



ASet.h

#pragma once
#include <iostream>
#include <list>
using namespace std;
class ASet
{
private: 
    list<int> sum;
    int _a;
    int _b;


public:
    ASet(int a, int b);
    ASet(int b);      // a по умолчанию 0
    ~ASet();
    void incl(int obj);  // включить число в множество
                     // если такое число уже есть, то ничего не делать
    void excl(int obj);  // исключить
    bool contain(int obj); // содержится в множестве?
    void print(); // распечатать состояние объекта
};



ASet.cpp

#include "ASet.h"
#include <list>

ASet::ASet(int a, int b)
{
	std::list<int> gh;
	_a = a;
	_b = b;
}
ASet::ASet(int b)
{
	_a = 0;
	_b = b;
}
ASet::~ASet()
{

}
void ASet::incl(int obj)
{
	if (obj >= _b) {
		obj = _b;
	}
}
void ASet::excl(int obj)
{
	_b = obj - 1;
}
bool ASet::contain(int obj)
{
	if (obj <= _b && obj >= _a) {
		return true;
	}
	else {
		return false;
	}
}
void ASet::print()
{
	for (int i = _a; i <= _b; i++) {
		std::cout << i << std::endl;
	}
}
