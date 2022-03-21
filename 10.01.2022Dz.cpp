#include <iostream>
#include <Windows.h>
using namespace std;

//void swap(int* xp, int* yp) {                                //============задание № 1
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}
//
//void bubbleSort(int* arr, int n) {
//    int i, j;
//    for (i = 0; i < n - 1; i++)
//        for (j = 0; j < n - i - 1; j++)
//            if (arr[j] < arr[j + 1])
//                swap(&arr[j], &arr[j + 1]);
//}
//void fill(int* arr, int size) {
//    for (size_t i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//}
//
//void printArray(int* arr, int size) {
//    int i;
//    for (i = 0; i < size; i++)
//        cout << arr[i] << " ";
//        cout <<endl;
//}
//
//int main() {
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int size;
//    cout << "Введите размер массива: ";
//    cin >> size;
//    int* arr = new int[size];
//    cout << "Введите элементы массива: ";
//    fill(arr, size);
//    bubbleSort(arr, size);
//    cout << "\nОтсортированный массив: \n";
//    printArray(arr, size);
//    delete[] arr;
//        return 0;
//}

//
//int main()                                                           //============задание № 3
//{
//    setlocale(LC_ALL, "ru");
//
//    float a[50] = { 0 };
//    int nmin = 0, n;
//    float s = 0, min;
//
//    cout << "n="; cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "a[" << i << "]="; cin >> a[i];
//    }
//    min = fabs(a[0]);
//
//    for (int i = 1; i < n; i++)
//        if (fabs(a[i]) < min) 
//        {
//            min = a[i]; 
//            nmin = i;
//            
//        } 
//    cout << "nmin=" << nmin << "\t" << "min= " << min << endl;
//     
//
// 
//}
