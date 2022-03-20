#include <iostream>
#include <Windows.h>
# include <math.h>
using namespace std;

//int main() {                                                  //============задание № 1
//	int x, n = 1;
//	cin >> x;
//	while ((x /= 10) > 0) n++;
//	cout << n;
//	return 0;
//}

//int main()                                                    //============задание № 2
//{
//    int n, x = 0;
//    std::cin >> n;
//    while (n > 0) {
//        x *= 10;
//        x += n % 10;
//        n /= 10;
//    }
//    std::cout << x << "\n";
//}

//bool check_polindrom(string word)                            //============задание № 3
//{
//	int len = word.length();
//	for (int i = 0; i < len / 2; ++i)
//	{
//		if (word[i] != word[len - i - 1])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	string str;
//	cout << "Введите слово и число: ";
//	cin >> str;
//	if (check_polindrom(str))
//	{
//		cout << "Это палиндром ";
//	}
//	else
//	{
//		cout << "Это не палиндром";
//	}
//	return 0;
//}

//int main()                                                //============задание № 4
//{
//	int n, sum = 0;
//
//	cout << "Enter a number: ";
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//
//	cout << "Sum = " << sum << endl;
//
//	
//	return 0;
//}

//int fact(int n)                                          //============задание № 5                                       
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

//int main() {                                                   //============задание № 6
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    double a, b, c, d, e;
//    cout << "Введите количество чисел последовательности -> 5 \n";
//    cout << "Введите последовательность.После ввода каждого числа нажимайте <Enter> \n";
//    cin >> a >> b >> c >> d >> e;
//    cout << "Среднее арифметическое  : " << (a + b + c + d + e) / 5 << "\n";
//    return 0;
//}

//bool isHappy(int number) {                                     //============задание № 7                   
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

