#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
  
  // Задание 1
 
  for (int i = 0; i < 10; i++)
		cout << "Дмитрий " << endl;
  
  // Задание 2
  
  cout << "Таблица квадратов." << endl;
	cout << endl;
	cout << "Число Квадрат " << endl;

	for (int i = 1; i <= 10; i++)
		cout << i << " " << i * i << endl;
     return 0;
  
  //Задание 3
  
  int n = 0;
	std::cout << "Таблица квадратов нечетных чисел" << std::endl;

	while (n <= 9)
	{
		if (n % 2 != 0)
		{
			std::cout << n << ' ';
			std::cout << n * n << std::endl;

		}
		n++;
	}
	std::cout << std::endl;
  
  //Задание 4
  
  float sum = 0;
	float srok = 0;
	float stavka = 0;
	float q = 0;
	float p = 0;
	float plateg = 0;

	std::cout << "Сумма: ";
	std::cin >> sum;
	std::cout << "Срок: ";
	std::cin >> srok;
	std::cout << "Процентная ставка: ";
	std::cin >> stavka;

	float srok2 = srok;
	float p2 = 0;
	
	p = stavka / 100 / srok2;
	std::cout << "Долг   ";
	std::cout << "Процент   ";
	std::cout << "Платеж   ";
	std::cout << std::endl;
	q = sum / srok; //12500
	while (srok > 0) {
		
		p2 = sum * p;
		plateg = q + p2;
		std::cout << sum << ' ';
		std::cout << p2 << ' ';
		std::cout << plateg << ' ';
		sum -= q;
		srok--;
		std::cout << std::endl;
	}
  
  
 //Задание 5
  
  int a = 0;
	int b = 2;
	std::cout << "Таблица степеней двойки ";
	std::cout << std::endl;
	while (a <= 10)
	{
		if (a == 0)
		{
			b = 1;

		}
		else
		{
			b *= 2;
		}
		std::cout << a << ' ';
		std::cout << b << ' ';
		std::cout << std::endl;
		a++;
	}
	std::cout << std::endl;
  
  //Задание 6
  
  int z = 64;
	int m = 8;

	while (m != 0)
	{
		int m2 = 8;
		z = z - 1;
		while (m2 != 0)
		{
			if (z % 2 != 0)
			{
				std::cout << "*";
			}
			else
			{
				std::cout << " ";
			}
			z--;
			m2--;
		}
		m--;
		std::cout << std::endl;
	}
	std::cout << std::endl;
  
  //Задание 7
  
  int o = 7;
	int arr[7];
	int n = 0;
	int k = 0;
	float l = 0;

	std::cout << "Ввод массива целых чисел" << std::endl;

	for (int i = 0; i < o; i++)
	{
		std::cout << "a[";
		std::cout << i;
		std::cout << "] ->  " << std::endl;
		std::cin >> n;
		arr[i] = n;

	}

	std::cout << "Массив " << std::endl;
	while (k<=6)
	{
		std::cout << arr[k] << ' ';
		l += arr[k];
		k++;
	}
	std::cout << std::endl;
	std::cout << "Среднее арифметическое: ";
	std::cout << l/o;
	std::cout << std::endl;

	
	
	//Задание 8
	double arr[5];
	int s = 0;
	int d = 0;
	double f = 0;

	std::cout << "Ввод массива целых чисел" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "a[";
		std::cout << i;
		std::cout << "] ->  " << std::endl;
		std::cin >> s;
		arr[i] = s;
	}
	std::cout << "================================" << std::endl;
	while (d <= 4)
	{
		std::cout << arr[d] << ' ';
		if (arr[d]!=0)
		{
			f++;
		}
		d++;
	}
	std::cout << std::endl;
	std::cout << "В массиве ";
	std::cout << f;
	std::cout << " не нулевых элемента";
	std::cout << std::endl;


	//Задание 9
	int arr[5];
	int g = 0;
	int h = 0;
	int f = 0;

	std::cout << "Ввод массива целых чисел в одну строку: " << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	while (h<=4)
	{
		if (h==0)
		{
			f = arr[h];
		}
		if (f > arr[h])
		{
			f = arr[h];
		}
		h++;
	}
	std::cout << "Минимальный элемент массива: ";
	std::cout << f << ' ';
	std::cout << std::endl;
