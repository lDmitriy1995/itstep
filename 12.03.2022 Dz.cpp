#include <iostream>
#include <Windows.h>
# include <math.h>
using namespace std;


//int powInnumber(int number, int powNum)                                  //============задание № 1
//{
//    int result = 1;
//    for (int i = 0; i < powNum; i++)
//         result *= number;
//         return result;
//}
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//    int number, powNum;
//    cout << "Введите число : ";
//    cin >> number;
//    cout << "Введите степень : ";
//    cin >> powNum;
//    cout << "Результат = " << powInnumber(number, powNum) << endl;
//}


//int fnc(int a, int b)                                                     //============задание № 2
//{
//    int start, end, sum = 0;
//    if (a == b)
//        return 0;
//    if (a > b)
//    {
//        start = b + 1;
//        end = a;
//    }
//    else
//    {
//        start = a + 1;
//        end = b;
//    }
//    for (; start < end; start++)
//    
//        sum += start;
//        return sum;
//    
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int a;
//    int b;
//    cout << "Введите первое число: ";
//    cin >> a;
//    cout << "Введите второе число: ";
//    cin >> b;
//    cout << "Сумма в диапазоне между числами равна  " << fnc(a, b);
//    return 0;
//}

//int digit(int x, int y)                                                   //============задание № 3
//{
//    for (int i = x; i < y; i++)
//    {
//        int result = 0;
//        for (int j = 1; j < i; j++)
//        {
//            if ((i % j) == 0)
//            {
//                result += j;
//            }
//        }
//        if (result == i && result)
//        {
//            cout << result << " \n";
//
//        }
//    }
//    return 0;
//}
//
//void main()
//{
//    int res = digit(0, 9000);
//
//}

//bool issymb(char s) {                                                   //============задание № 5
//    if ((s >= '0' && s <= '9') || (s >= 'A' && s <= 'Z')
//        || (s >= 'a' && s <= 'z'))
//        return true;
//
//    return false;
//}
//
//int main() {
//    char c = 'a';
//    cout << boolalpha << issymb(c) << endl;
//
//
//
//    system("pause>NULL");
//    return 0;
//}

//double okruglenye(double chislo, long znaki)                            //============задание № 6
//{
//    double result = round(chislo * pow(10, znaki) / pow(10, znaki));
//    return result;
//}
//
//void main()
//{
//    cout << okruglenye(284.4358,3) << endl;
//}


//bool isHappy(int number) {                                             //============задание № 7
//	if (number < 100000 || number > 999999) return false;
//	int sum1, sum2;
//	sum1 = number % 10 + (number / 10) % 10 + (number / 100) % 10;
//	sum2 = (number / 1000) % 10 + (number / 10000) % 10 + (number / 100000) % 10;
//	if (sum1 == sum2) 
//		return true;
//	return false;
//}
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int n = 0;
//	cout << "Введите 6 значное число: ";
//	cin >> n;
//	if (isHappy(n)) cout << "Число счастливое.";
//	else cout << "Число не счастливое.";
//	return 0;
//}

//bool vys(int year)                                                    //============задание № 8
//{
//    bool res = false;
//    if (year % 4 == 0)
//        res = true;
//    if (year % 100 == 0)
//        res = false;
//    if (year % 400 == 0)
//        res = true;
//    return res;
//}
//int date(int d, int m, int y)
//{
//    int k = d;
//    switch (m - 1)
//    {
//    case 12: k += 31;
//    case 11: k += 30;
//    case 10: k += 31;
//    case  9: k += 30;
//    case  8: k += 31;
//    case  7: k += 31;
//    case  6: k += 30;
//    case  5: k += 31;
//    case  4: k += 30;
//    case  3: k += 31;
//    case  2: if (vys(y)) k += 29; else k += 28;
//    case  1: k += 31;
//    }
//    k += (y - 1) * 365 + ((y - 1) / 4);
//    return k;
//}
//int difference(int d1, int d2, int m1, int m2, int y1, int y2)
//{
//    int k = date(d1, m1, y1) - date(d2, m2, y2);
//    return k;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int d1, d2, m1, m2, y1, y2;
//    cout << "Введите день: ";
//    cin >> d2;
//    cout << "Введите месяц: ";
//    cin >> m2;
//    cout << "Введите год: ";
//    cin >> y2;
//    cout << "Введите день : ";
//    cin >> d1;
//    cout << "Введите месяц: ";
//    cin >> m1;
//    cout << "Введите год: ";
//    cin >> y1;
//    cout << "Разница между двумя датами составляет " << difference(d1, d2, m1, m2, y1, y2) << " дней\n";
//    
//}
