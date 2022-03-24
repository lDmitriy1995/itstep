#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    system("color 0B");
    setlocale(0, "ru");

    /*double a{ 2 };                                                                 //===========Задание №1
    double b{ 3 };
    double c{ 0 };

    c = (a + 4 * b) * (a - 3 * b) + (a * 2);

    cout << c;*/

    //int n, P, S;                                                                        //===========Задание №2
    //cout << "Введите число" << endl;
    //while (cin >> n) {
    //  P = 4 * n; // считаем периметр квадрата
    //  S = n * n; // считаем площадь квадрата
    //  cout << "Периметр квадрата = " << P << " "<<"Площадь квардрата = " << S << "\n";
    //}
    //return 0;


    //float candies {0};         // цена одного килограмма конфет                         //===========Задание №3
    //float cookie  {0};         // цена одного килограмма печенья
    //float price1  {0};
    //float price2  {0};
    //cout << "Введите стоимость за 1 кг конфет " << endl;
    //cin >> candies;
    //cout << "Введите стоимость за 1 кг печенья " << endl;
    //cin >> cookie;

    //price1 = candies / 1000 * 300 + cookie / 1000 * 400;
    //cout << "Стоимость первой покупки  " << price1 << endl;

    //price2 = (candies * 1.8 + cookie * 2) * 3;
    //cout << "Стоимость второй покупки  " << price2 << endl;

    /*int a, b;                                                                              //===========Задание №4
    cout << "Введите первое число" << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;
    if (a > b)
    {
        cout << "Наибольшее число  " << a << endl;
    }
    else
    {
        cout << "Наибольшее число  " <<  b << endl;
    }*/

    /*int x { 0 };                                                                           //===========Задание №5
    int y { 0 };
    int remainder { 0 };
    cout << "Введите первое число: " << endl;
    cin >> x;
    cout << "Введите второе число: " << endl;
    cin >> y;
    remainder = x % 2;
    if (x != 10 && y != 10 && remainder == 0)
    {
        cout << x + y << endl;
    }
    else
    {
        cout << x * y << endl;
    }*/

    /*int a{ 0 };                                                                            //===========Задание №6
    int b{ 0 };
    int c{ 0 };
    int remainder1{ 0 };
    int remainder2{ 0 };

    cout << "Введите первое число " << endl;
    cin >> a;
    cout << "Введите второе число " << endl;
    cin >> b;
    cout << "Введите третье число " << endl;
    cin >> c;

    remainder1 = a % 3;
    remainder2 = b % 3;
    if (a > 10 && b > 10 && c > 10 && remainder1 == 0 && remainder2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }*/

    /*int a, b, c;                                                                            //===========Задание №7
    cout << "Введите первое число " << endl;
    cin >> a;
    cout << "Введите второе число " << endl;
    cin >> b;
    cout << "Введите третье число " << endl;
    cin >> c;

    if (a == b || b == c || a == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }*/

   /* int a{ 0 };                                                                             //===========Задание №8
	int a1{ 0 };
	int a2{ 0 };
	int a3{ 0 };
	int a4{ 0 };
	cout << "Введите четырехзначное число: " << endl;
	cin >> a;
	a1 = a % 10000 / 1000;
	a2 = a % 1000 / 100;
	a3 = a % 100 / 10;
	a4 = a % 10;
	cout << a1 << endl;
	cout << a2 << endl;
	cout << a3 << endl;
	cout << a4 << endl;
	if (a1 > a2 && a2 > a3 && a3 > a4)
	{
		cout << "yes" << endl;
	}*/
}
