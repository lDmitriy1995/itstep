#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cstdlib>
using namespace std;

//const int ARRSIZE_1 = 4;                                                         //============задание № 1
//const int ARRSIZE_2 = 5;
//
//void FuncArr(int arr[], int b)
//{
//	for (int i = 0; i < b; i++)
//	{
//		arr[i] = rand();
//	}
//	for (int i = 0; i < b; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	int arrOne[ARRSIZE_1], arrTwo[ARRSIZE_2];
//	cout << "Элементы первого массива : " << endl;
//	FuncArr(arrOne, ARRSIZE_1);
//	cout << "Элементы второго массива : " << endl;
//	FuncArr(arrTwo, ARRSIZE_2);
//}

//const int  SIZE1 = 5;                                                          //============задание № 2
//
//void fillAndShowArray(int[][SIZE1], const int size);
//int findMinElement(int[][SIZE1], const int size);
//int findMaxElement(int[][SIZE1], const int size);
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	int matrix[SIZE1][SIZE1] = {};
//
//	fillAndShowArray(matrix, SIZE1); 
//
//	cout << endl;
//	cout << "Минимум: " << findMinElement(matrix, SIZE1) << endl;
//	cout << "Максимум: " << findMaxElement(matrix, SIZE1) << endl;
//
//	return 0;
//}
//
//void fillAndShowArray(int arr[][SIZE1], const int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << "| ";
//		for (int j = 0; j < size; j++)
//		{
//			arr[i][j] = 30 + rand() % 31;
//
//			cout << arr[i][j] << " ";
//		}
//		cout << " |" << endl;
//	}
//}
//
//int findMinElement(int arr[][SIZE1], const int size)
//{
//	int min = arr[0][0];
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[i][j] < min)
//				min = arr[i][j];
//		}
//	}
//	return min;
//}
//
//int findMaxElement(int arr[][SIZE1], const int  size)
//{
//	int max = arr[0][0];
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[i][j] > max)
//				max = arr[i][j];
//		}
//	}
//	return max;
//}

//bool calcFirstMove();                                                         //============задание № 3
//void drowCube(int res);
//int computerOrPlayerThrow();
//void showIntermediateResult(int pointsOfComputer, int pointsOfUser, int numberThrow);
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//
//	int playerScore = 0; // для накопления очков
//	int computerScore = 0;
//	int whoMove = 0;
//	char userName[16] = {};
//
//	cout << "Ваше имя (латиницей): ";
//	cin >> userName;
//
//	whoMove = calcFirstMove(); // если будет 0 - ходит игрок, 1 - ходит компьютер
//
//	for (int i = 0; i < 4; ++i)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			if (whoMove)
//			{
//				cout << "\nХодишь ты. ";
//				playerScore += computerOrPlayerThrow();
//			}
//			else
//			{
//				cout << "\nХодит компьютер. ";
//				computerScore += computerOrPlayerThrow();
//			}
//			whoMove = !whoMove; // инверсия
//		}
//
//		showIntermediateResult(computerScore, playerScore, i);
//	}
//
//	if (computerScore > playerScore)
//	{
//		cout << "\n\nПобедитель этой игры - КОМПЬЮТЕР\n!";
//		cout << "Желаем успехов в следующий раз.\a\a\a\a\a\n\n";
//	}
//	else if (computerScore < playerScore)
//	{
//		cout << "\n\nПобедитель этой игры - " << userName << "!!! ";
//		cout << "Поздравляем!!!\a\a\a\a\a\n\n";
//	}
//	else
//	{
//		cout << "\n\nВ этой игре НИЧЬЯ\a\a\a\a\a\n\n";
//	}
//
//	return 0;
//}
//
//bool calcFirstMove() // генерирует и возвращает случайное число 0 или 1
//{
//	return rand() % 2;
//}
//
//void showIntermediateResult(int computerScore, int playerScore, int numberThrow) {
//	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
//	cout << "Комп: " << computerScore << "  |||  Ты:" << playerScore << endl;
//	cout << "После " << numberThrow + 1 << "-го броска ";
//	if (computerScore > playerScore)
//		cout << " выигрывает компьютер!!!\n";
//	else if (computerScore < playerScore)
//		cout << " выигрываете Вы!!!\n";
//	else cout << " ничья!!!\n";
//	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
//}
//
//// вызывается в функции computerOrPlayerThrow()
//void drowCube(int res)
//{
//	switch (res)
//	{
//	case 1:
//		cout << "@@@@@@@\n";
//		cout << "@@@@@@@\n";
//		cout << "@@@ @@@\n";
//		cout << "@@@@@@@\n";
//		cout << "@@@@@@@\n";
//		break;
//	case 2:
//		cout << "@@@@@@@\n";
//		cout << "@ @@@@@\n";
//		cout << "@@@@@@@\n";
//		cout << "@@@@@ @\n";
//		cout << "@@@@@@@\n";
//		break;
//	case 3:
//		cout << "@@@@@@@\n";
//		cout << "@ @@@@@\n";
//		cout << "@@@ @@@\n";
//		cout << "@@@@@ @\n";
//		cout << "@@@@@@@\n";
//		break;
//	case 4:
//		cout << "@@@@@@@\n";
//		cout << "@ @@@ @\n";
//		cout << "@@@@@@@\n";
//		cout << "@ @@@ @\n";
//		cout << "@@@@@@@\n";
//		break;
//	case 5:
//		cout << "@@@@@@@\n";
//		cout << "@ @@@ @\n";
//		cout << "@@@ @@@\n";
//		cout << "@ @@@ @\n";
//		cout << "@@@@@@@\n";
//		break;
//	case 6:
//		cout << "@@@@@@@\n";
//		cout << "@ @ @ @\n";
//		cout << "@@@@@@@\n";
//		cout << "@ @ @ @\n";
//		cout << "@@@@@@@\n\n";
//		break;
//	}
//}
//
//int computerOrPlayerThrow() // реализация броска пары кубиков и возврат полученных очков
//{
//	int result = 0;
//	char c = 0;
//
//	cout << "Нажми Y и Enter, чтобы бросить кубики: ";
//	do
//	{
//		cin.sync(); // очистка буфера
//		cin >> c;
//	} while (c != 'y' && c != 'Y');
//
//	int tmp = 0; // для накопления очков пары брошенных кубиков
//	for (int i = 0; i < 2; ++i) {
//		tmp = 1 + rand() % 6;
//		drowCube(tmp);
//		result += tmp;
//		cout << endl;
//	}
//
//	cout << "Всего на кубиках " << result << " очков";
//	return result;
//}
