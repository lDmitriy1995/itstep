#include <iostream>
#include <Windows.h>
# include <math.h>
using namespace std;


//bool isHappy(int number) {                                             //============задание № 1
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

//    int number, n1, n2, n3, n4;                                       //============задание № 2
//     do{
//        cout << "Введите 4-х значное число: ";
//        cin >> number;
//        if (number <= 9999 && number > 999) {
//            n1 = number % 10;
//            number /= 10;
//            n2 = number % 10;
//            number /= 10;
//            n3 = number % 10;
//            number /= 10;
//            n4 = number % 10;
//            cout << "Результат: " << n1 << n2 << n3 << n4 << endl;
//            break;
//        }
//        else
//        {
//            cin.ignore(32767, '\n');
//            cout << "Ошибка введите 4-х значное число "<< endl;
//        }
//     } while (number >= 9999 || number < 999);
//        return 0;

//    setlocale(0, "");                                                  //============задание № 3
//    int now = 0, old = 0;
//    for (int i = 0; i < 7; i++) {
//        cout << i + 1 << "-ое число: ";
//        cin >> now;
//        if (now > old) {
//            old = now;
//        }
//    }
//    cout << "Максимальное число: " << old;


//	int ab, bc, m;                                                       //============задание № 4
//	cout << "Введите расстояние между пунктами А и В в км: ";
//	cin >> ab;
//	cout << "Введите расстояние между пунктами В и С в км: ";
//	cin >> bc;
//	cout << "Введите вес груза в кг: ";
//	cin >> m;
//	if (m > 2000) {
//		cout << "\nСамолет " << m << " не поднимает\n" << endl;
//	}
//	else {
//		int koef;
//
//		if (m <= 500) koef = 1;
//		else if (m <= 1000) koef = 4;
//		else if (m <= 1500) koef = 7;
//		else             koef = 9;
//
//		int benzin_ab = ab * koef;
//		int benzin_bc = bc * koef;
//		if (benzin_ab > 300) {
//			cout << "\nНевозможен полет по маршруту AB\n";
//		}
//		else if (benzin_bc > 300) {
//			cout << "\nНевозможен полет по маршруту BC\n";
//		}
//		else {
//			int ostatok = 300 - benzin_ab - benzin_bc;
//			if (ostatok >= 0) {
//				cout << "Полет возможен без дозаправки\n";
//			}
//			else {
//				cout << "Полет возможен, но надо в B долить " << -ostatok << "\n";
//			}
//		}
//	}
//	return 0;

//bool vys(int year)                                                    //============задание № 5
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
