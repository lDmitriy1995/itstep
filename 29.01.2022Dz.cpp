#include <iostream>
#include <Windows.h>
using namespace std;
//
//void main()                                                                    //============задание № 1
//{
//    setlocale(LC_ALL, "Russian");
//    const int size = 5;
//    int arr[size];
//    for (int i = 0; i < size; i++)
//    {
//        cout << "Введите " << i + 1 << " элемент массива = ";
//        cin >> arr[i];
//    }
//    int min_index = 0, max_index = 0, sum = 0, summa = 0;
//    for (int i = 1; i < size; i++)
//    {
//        if (arr[i] < arr[min_index])
//        {
//            min_index = i;
//        }
//        if (arr[i] > arr[max_index])
//        {
//            max_index = i;
//        }
//    }
//    int temp = 0;
//    if (min_index < max_index)
//    {
//        for (int i = min_index + 1; i < max_index; i++)
//        {
//            sum += arr[i];
//        }
//    }
//    cout << "Сумма элементов массива, находящихся между минимальным и максимальным элементами массива = " << sum << endl;
//}

//int main(int argc, char argv[]) {                                                    //============задание № 3
//
//	setlocale(LC_ALL, "Russian");
//
//	int n, * a, i, kol = 0;
//
//	double sum = 0;
//
//	cout << "Введите количество элементов в массиве" << endl;
//
//	cin >> n;
//
//	a = new int[n];
//
//	cout << "Введите числа:" << endl;
//
//	for (i = 0; i < n; i++) {
//
//		cin >> a[i];
//
//		sum = sum + a[i];
//
//		kol = kol + 1;
//
//	}
//
//	cout << "Ваш массив:" << endl;
//
//	for (i = 0; i < n; i++)
//
//		cout << a[i] << " ";
//
//	sum = sum / kol;
//
//	cout << "\n\nСреднее арифметическое: \n" << sum << endl;
//
//	cout << "\n\nЧисла, которые меньше среднего арифметического:" << endl;
//
//	for (i = 0; i < n; i++) {
//
//		if (sum > a[i])
//
//			cout << a[i] << endl;
//
//	}
//
//	return 0;
//
//}
