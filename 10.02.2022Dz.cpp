#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
//
//void print(unsigned int* ptr, int size) {                                              //============задание № 1
//    for (int i = 0; i < size; i++)
//        cout << *(ptr + i) << " ";
//    cout << endl;
//}
//
//void manual_fill(unsigned int* ptr, int size) {
//    for (int i = 0; i < size; i++) {
//        unsigned int val;
//        cout << "Введите элемент [" << i << "]: ";
//        cin >> val;
//        *(ptr + i) = val;
//    }
//}
//
//void random_fill(unsigned int* ptr, int size) {
//    for (int i = 0; i < size; i++) {
//        *(ptr + i) = rand();
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    srand(time(0));
//    unsigned int array[5], array1[5];
//    manual_fill(array, 5);
//    random_fill(array1, 5);
//    cout << "Массив, заполненный вручную: " << endl;
//    print(array, 5);
//    cout << "Массив, заполненный случайными значениями: " << endl;
//    print(array1, 5);
//
//    return 0;
//}

//int ploshad() {                                                                       //============задание № 2
//
//    int x;
//    cout << "Выберите фиругу 1 <Прямоугольник>  2 <Треугольник>  3 <Круг> "; cin >> x;
//    cout << "Введите координаты " << endl;
//    switch (x)
//    {
//    case 1: {  float a, b, s;
//        cout << "a="; cin >> a;
//        cout << "b="; cin >> b;
//        if (a > 0 && b > 0)
//        {
//            s = pow(a + b, 2);
//            cout << "Площадь прямоугольника  = " << s << endl;
//
//        }
//        else cout << "No" << endl;
//        break;
//    }
//
//    case 2: { float a, b, c, p, s;
//        cout << "a="; cin >> a;
//        cout << "b="; cin >> b;
//        cout << "c="; cin >> c;
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            p = (a + b + c) / 2;
//            s = sqrt(p * (p - a) * (p - b) * (p - c));
//            cout << "Площадь треугольника  = " << s << endl;
//        }
//        else cout << "No" << endl;
//        break;
//    }
//
//    case 3: {   float pi = 3.14, r, s;
//        cout << "r="; cin >> r;
//        if (r > 0)
//        {
//            s = pi * pow(r, 2);
//            cout << "Площадь круга  = " << s << endl;
//        }
//        else cout << "No" << endl;
//        break;
//    }
//    default: cout << "Ошибка" << endl;
//    }
//    return 0;
//
//}
// 
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    ploshad();
//    
//}

