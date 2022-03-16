#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

//int cub(int n)                                               //============задание № 1  
//
//{
//	return n * n * n;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << cub(n);
//}

//int big(int x, int y)                                         //============задание № 2
//{
//	if (x > y)
//	{
//		return x;
//	}
//
//	else if (x < y)
//	{
//		return y;
//	}
//}
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//  int x;
//	int y;
//	cout << "Введите два числа" << endl;
//	cin >> x;
//	cin >> y;
//	cout << "Наибольшее из чисел" << ' ' << big(x, y);
//
//}

//bool isPositive(int num)                                        //============задание № 3
//{
//	bool res;
//	if (num > 0)
//		res = 1;
//	else res = 0;
//	return res;
//}
//
//int main()
//{
//	cout << isPositive(15) << endl;
//	cout << isPositive(-3) << endl;
//}

//float func(float x, char ch, float y);                                   //============задание № 4
//
//int main()
//{
//    SetConsoleCP(1251);
//	  SetConsoleOutputCP(1251);
//    float x, y;
//    char ch;
//    cout << "Введите два числа и выберите действие" <<  ' ' << "+ - * /" << endl;
//    cin >> x >> ch >> y;
//    cout << func(x, ch, y);
//
//    return 0;
//}
//
//float func(float x, char ch, float y)
//{
//    switch (ch) {
//
//    case '+':
//        return x + y;
//
//    case '-':
//        return x - y;
//
//    case '*':
//        if (x * y == 0)
//        {
//            cout << "На ноль умножать нельзя!";
//        }
//        else { return x * y; }
//
//    case '/':
//        if (x / y == 0)
//        {
//            cout << "На ноль делить нельзя!";
//        }
//        else if ( x / y); 
//        return x / y;
//            cout << "Такой знак не реализован";
//    }
//}

//int F(int x, int y) {                                                 //============задание № 5
//    int i, j;
//    for (i = 1; i <= x; i++)
//    {
//        for (j = 1; j <= y; j++)
//        {
//            cout << "*";
//        }
//        cout << "\n";
//    }return(x, y);
//}
//void main()
//{
//    SetConsoleCP(1251);
//	  SetConsoleOutputCP(1251);
//    int K, N;
//    cout << "Введите ширину и высоту:\n";
//    cin >> N >> K;
//    cout << F(K, N);
//    
//}

//int Prime(int a);                                                      //============задание № 6                           
//
//int Prime(int a)
//{
//    int i;
//    if (a == 2)
//        return 1;
//    if (a == 0 || a == 1 || a % 2 == 0)
//        return 0;
//    for (i = 3; i * i <= a && a % i; i += 2)
//        ;
//    return i * i > a;
//}
//int main()
//{
//    int a;
//    cin >> a;
//    int x = Prime(a);
//    int s = x;
//    cout << s << endl;
//    return 0;
//}

//int fact(int n)                                                       //============задание № 7   
//{
//    if (n <= 1)
//        return 1;
//    return n * fact(n - 1);
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int n;
//    cout << "Введите N = ";
//    cin >> n;
//    cout << "Факториал числа " << n << "  = " << fact(n);
//
//    return 0;
//}
