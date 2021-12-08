#include <iostream>
#include <Windows.h>
#include <string>


int multi(int value1, int value2) {
	std::cout << " >> Ваш результат " << std::endl;
	value1* value2;
	return  value1 * value2;
}

int division(int value1, int value2) {
	std::cout << " >> Ваш результат " << std::endl;
	value1 / value2;
	return  value1 / value2;
}

int addition (int value1, int value2) {
	std::cout << " >> Ваш результат " << std::endl;
	value1 + value2;
	return  value1 + value2;
}

int subtraction(int value1, int value2) {
	std::cout << " >> Ваш результат " << std::endl;
	value1 - value2;
	return  value1 - value2;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int value1 = 0;
	int value2 = 0;
	char action = '0';

	std::cout << " < Добро пожаловать в простой калькулятор > " << std::endl<< std::endl;
	std::cout << " >> Введите первое число " << std::endl;
	std::cin >> value1;

	std::cout << " >> Введите второе число " << std::endl;
    std::cin >> value2;

	std::cout << " >> Выберите дейтсвие " << std::endl<< std::endl;
	std::cout << " >> Умножение * " << std::endl;
	std::cout << " >> Деление / " << std::endl;
	std::cout << " >> Сложение +" << std::endl;
	std::cout << " >> Вычитание - " << std::endl<< std::endl;

	std::cin >> action;

	if (action == '*') {
		std::cout << multi(value1, value2) << std::endl;
	}

	else if (action == '/') {
		std::cout << division(value1, value2) << std::endl;
	}
	
	else if (action == '+') {
		std::cout << addition(value1, value2) << std::endl;
	}

	else if (action == '-') {
		std::cout << subtraction(value1, value2) << std::endl;
	}

	else
	{
		std::cout << " >> Неверное значение " << std::endl;
	}
}
