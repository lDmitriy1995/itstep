#include <iostream>
#include <Windows.h>
#include <bitset>
using namespace std;


//int main()                                                                           //============задание № 1                    
//{
//    for (int i = 7; i < 8; ++i)
//        for (int j = 2; j < 10; ++j)
//            cout << i << " * " << j << " = " << i * j << "\n";
//}

//int main()                                                                           //============задание № 2
//{
//    for (int y = 0; y <= 7; y++)
//    {
//        if (y % 2 == 0)
//            for (int x = 1; x <= 4; x++)
//                cout << " * " << " ";
//        else
//            for (int x = 1; x <= 4; x++)
//                cout << " " << " * ";
//
//        cout << endl;
//    }
//    return 0;
//}

//int main()                                                                          //============задание № 3
//{
//	SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//	
//	int i = 0, n; float sr_ar = 0, x = 0, y = 0;
//	cout << "» Вводите числа(введите 0 для окончания ввода) «"<< endl;
//	do
//	{
//		cin >> n;
//		if (n != 0)
//		{
//			x++;
//			y += n;
//		}
//		i++;
//	} while (n != 0);
//	sr_ar = y / x;
//	cout << "» количество чисел «"  << x << endl;
//	cout <<  "» сумма чисел «" << y << endl;
//	cout << "» среднее арифметическое «" << sr_ar << endl;
//	
//	return 0;
//}

//
//int main()                                                                          //============задание № 4
//{
//    setlocale(0, "RUS");
//    int number;
//    cout << "Введите целое число от 1 до 255: ";
//    cin >> number;
//
//    bitset<8> message(number);
//    cout << number << " = " << message << endl;
//}
