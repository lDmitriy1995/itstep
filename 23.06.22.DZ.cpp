#include "Dictionary.h"

Dictionary::Dictionary()
{
}

Dictionary::Dictionary(Word buf)
{
	this->dict.push_back(buf);
}

void Dictionary::add_word(Word buf)
{
	this->dict.push_back(buf);
}

void Dictionary::search(const char* str)
{
	/*Word* iter = dict.begin();
	while (iter != dict.end())
	{
		if (*iter.getEng() == str)
		{
		}
		++iter;
	}*/
	std::string word(str);
	for (auto i = 0; i < dict.size(); i++)
	{
		if (dict[i].getEng() == word)
		{
			std::cout << dict[i].getRus() << std::endl;
			break;
		}
	}
}




#pragma once
#include <vector>
#include <iostream>
#include "Word.h"
class Dictionary
{
private:
	std::vector<Word> dict;
public:
	Dictionary();
	Dictionary(Word str);
	void add_word(Word buf);
	void search(const char* str);
};




#include "Word.h"
#include <string>
#include <iostream>

Word::Word()
{
}

Word::Word(const char* str)
{
	/*size_t z{ 0 };
	size_t size1{ 0 };
	while (str[z] != '\t')
	{
		size1++;
		z++;
	}
	z++;
	size_t size2{ 0 };
	while (str[z] != '\n')
	{
		size2++;
		z++;
	}
	this->eng = new char[size1];
	this->rus = new char[size2];
	z = 0;
	for (auto i = 0; i < size1; i++)
	{
		if (str[z] == '\t')
		{
			break;
		}
		else
		{
			this->eng[i] = str[z];
			z++;
		}
	}
	z++;
	for (auto i = 0; i < size2; i++)
	{
		if (str[z] == '\n')
		{
			break;
		}
		else
		{
			this->rus[i] = str[z];
			z++;
		}
	}*/

	std::string word(str);
	auto len = word.find_first_of('\t');
	this->eng = word.substr(0, len);
	this->rus = word.substr(len + 1);
}

std::string Word::getEng()
{
	return this->eng;
}

std::string Word::getRus()
{
	return this->rus;
}

void Word::showWords()
{
	std::cout << this->eng << std::endl;
	std::cout << this->rus << std::endl;
}




#pragma once
#include <string>
#include <iostream>

class Word
{
private:
	/*char* eng;
	char* rus;*/
	std::string eng;
	std::string rus;
public:
	Word();
	Word(const char* str);
	std::string getEng();
	std::string getRus();
	void showWords();
};



#include <iostream>
#include <fstream>
#include <string>
#include "Word.h"
#include "Dictionary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Word one("Dimash	Димаш");
	one.showWords();

	Dictionary mine(one);

	mine.search("Dimash");

	Dictionary book;
	ifstream ifs("dict.txt", ios::in);
	if (!ifs.bad())
	{
		char buffer[255];
		while (!ifs.eof())
		{
			ifs.getline(buffer, 255);
			book.add_word(Word(buffer));
		}
		ifs.close();
	}

	mine.search("'cause");

	system("pause");

	return 0;
}
