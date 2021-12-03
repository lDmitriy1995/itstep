#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string answ{};
	std::string answ1{};
	std::string answ3{};

	std::cout << "Вы случайно попали в заброшенный город."
		         "Заходите в первый попавшийся дом:" << std::endl;
	
	std::cout <<"В этом доме вас встречает привидение:"<< std::endl<<
		      "- Как ты сюда попал ?" << std::endl <<
		      "- У меня есть для тебя задание" << std::endl;

	std::cout << std::endl << "да/нет" << std::endl << std::endl;
	std::cin >> answ;

	if (answ == "да") {

		std::cout << "Иди в подвал этого дома, найди мое тело и захорони его" << std::endl;

		std::cout << "Ты согласен на мои условия?:" << std::endl;
	}

    else if (answ == "нет") {
	
		std::cout << "Тогда я наложу на тебя проклятье " << std::endl<<
		            " -Ты хочешь умереть? " << std::endl;
	}
	
	std::cout << std::endl << "да/нет" << std::endl << std::endl;
	std::cin >> answ1;
	if (answ1 == "да") {
		std::cout << "Пойдем я покажу тебе дорогу" << std::endl;
	}
	else if (answ1 == "нет") {

		std::cout << "Тогда я наложу на тебя проклятье " << std::endl;
	}

}
