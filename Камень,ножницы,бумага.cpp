#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	
//	// Суммы
//	size_t user{ 0 };
//	size_t first_bot{ 0 };
//	size_t second_bot{ 0 };
//
//	// --- Начало игры ---
//	size_t user_input{ 0 };
//    int round{ 0 };
//	cout << "Выберите количество раундов -> " << endl;
//	cin >> round;
//
//	srand(time(0));
//	int random_num;
//	int random_num2;
//	int money_user{ 0 };
//	int money_first_bot{ 0 };
//	int money_second_bot{ 0 };
//	random_num = rand() % (3 - 1 + 1) + 1;
//	random_num2 = rand() % (3 - 1 + 1) + 1;
//
//	first_bot = random_num;
//	second_bot = random_num2;
//
//	for (int i = 1; i <= round; i++)
//	{
//		cout << "Ввод (Камень = 1  Ножницы = 2  Бумага = 3): ";
//		cout << endl;
//		cin >> user_input;
//		cout << first_bot << ' ' << second_bot << endl;
//
//		//Мы проиграли обоим ботам
//		if (first_bot == 1 && second_bot == 1 && user_input == 2
//			||
//			first_bot == 2 && second_bot == 2 && user_input == 3
//			||
//			first_bot == 3 && second_bot == 3 && user_input == 1)
//
//		{
//			money_user = money_user - 2;
//			money_first_bot = money_first_bot + 1;
//			money_second_bot = money_second_bot + 1;
//
//			cout << "  Вы проиграли " << ' ' << "Деньги игрока ->" << money_user <<"$"
//				<< ' ' << "Деньги первого бота -> " << money_first_bot << "$"
//				<< ' ' << " Деньги второго бота -> " << money_second_bot <<"$"<< endl;
//		}
//		//Второй бот выигрывает полностью
//		else if (first_bot == 2 && second_bot == 1 && user_input == 2
//			||
//			first_bot == 3 && second_bot == 2 && user_input == 3
//			||
//			first_bot == 1 && second_bot == 3 && user_input == 1)
//
//		{
//			money_user = money_user - 1;
//			money_first_bot = money_first_bot - 1;
//			money_second_bot = money_second_bot + 2;
//
//			cout << "  Вы проиграли " << ' ' << "Деньги игрока ->" << money_user << "$"
//				<< ' ' << "Деньги первого бота -> " << money_first_bot << "$"
//				<< ' ' << " Деньги второго бота -> " << money_second_bot <<"$"<< endl;
//		}
//
//		//Первый бот полностью выигрывает
//		else if (first_bot == 1 && second_bot == 2 && user_input == 2
//			||
//			first_bot == 2 && second_bot == 3 && user_input == 3
//			||
//			first_bot == 3 && second_bot == 1 && user_input == 1)
//
//		{
//			money_user = money_user - 1;
//			money_first_bot = money_first_bot + 2;
//			money_second_bot = money_second_bot - 1;
//
//			cout << "  Вы проиграли " << ' ' << "Деньги игрока ->" << money_user << "$"
//				<< ' ' << "Деньги первого бота -> " << money_first_bot << "$"
//				<< ' ' << " Деньги второго бота -> " << money_second_bot <<"$"<< endl;
//		}
//		//Первый бот полносью проигрывает
//
//		else if (first_bot == 2 && second_bot == 1 && user_input == 2
//			||
//			first_bot == 3 && second_bot == 2 && user_input == 3
//			||
//			first_bot == 1 && second_bot == 3 && user_input == 1)
//
//		{
//			money_user = money_user - 1;
//			money_first_bot = money_first_bot - 1;
//			money_second_bot = money_second_bot + 2;
//
//			cout << "  Вы проиграли " << ' ' << "Деньги игрока ->" << money_user << "$"
//				<< ' ' << "Деньги первого бота -> " << money_first_bot << "$"
//				<< ' ' << " Деньги второго бота -> " << money_second_bot <<"$"<< endl;
//		}
//
//		//Игрок полносью выигрывает
//		else if (first_bot == 1 && second_bot == 1 && user_input == 3
//			||
//			first_bot == 2 && second_bot == 2 && user_input == 1
//			||
//			first_bot == 3 && second_bot == 3 && user_input == 2)
//		{
//			money_user = money_user + 2;
//			money_first_bot = money_first_bot - 1;
//			money_second_bot = money_second_bot - 1;
//
//			cout << "  Вы победили " << ' ' << "Деньги игрока ->" << money_user << "$"
//				<< ' ' << "Деньги первого бота -> " << money_first_bot << "$"
//				<< ' ' << " Деньги второго бота -> " << money_second_bot << "$"<< endl;
//		}
//
//		//Второй бот полносью проигрывет 
//		else if (first_bot == 1 && user_input == 1 && second_bot == 2
//			||
//			first_bot == 2 && user_input == 2 && second_bot == 3
//			||
//			first_bot == 3 && user_input == 3 && second_bot == 1)
//		{
//			money_user = money_user + 1;
//			money_first_bot = money_first_bot + 1;
//			money_second_bot = money_second_bot - 2;
//
//			cout << "  Вы победили " << ' ' << "Деньги игрока ->" << money_user << "$"
//				<< ' ' << "Деньги первого бота -> " << money_first_bot << "$"
//				<< ' ' << " Деньги второго бота -> " << money_second_bot << "$"<< endl;
//		}
//
//		//Первый бот полностью проигрывает
//		else if (second_bot == 1 && user_input == 1 && first_bot == 2
//			||
//			second_bot == 2 && user_input == 2 && first_bot == 3
//			||
//			second_bot == 3 && user_input == 3 && first_bot == 1)
//		{
//			money_user = money_user + 1;
//			money_first_bot = money_first_bot - 2;
//			money_second_bot = money_second_bot + 1;
//
//			cout << "  Вы победили " << ' ' << "Деньги игрока ->" << money_user << "$"
//				<< ' ' << "Деньги первого бота -> " << money_first_bot << "$"
//				<< ' ' << " Деньги второго бота -> " << money_second_bot << "$"<< endl;
//		}
//		//Ничья
//		else if (user_input != first_bot && user_input != second_bot
//			&& first_bot != second_bot
//			|| user_input == first_bot && user_input == second_bot
//			&& first_bot == second_bot)
//
//		{
//			cout << "  Ничья" << endl;
//		}
//
//		cout<< "Деньги игрока ->" << money_user << "$"
//			<< ' ' << "Деньги первого бота -> " << money_first_bot << "$"
//			<< ' ' << " Деньги второго бота -> " << money_second_bot << "$"<< endl;
//	}
//
//
//
//	return 0;
//
//
//}
