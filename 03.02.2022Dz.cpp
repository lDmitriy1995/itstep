#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

//int main()                                                            //============задание № 1
//{
//    srand(time(NULL));
//    int arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = 1 + rand() % 10000;
//        cout << i << ": " << arr[i] << std::endl;
//    }
//
//    int min1 = arr[0], min2 = arr[1];
//    if (min2 < min1)
//    {
//        min1 = arr[1];
//        min2 = arr[0];
//    }
//    for (int i = 2; i < 10; i++)
//    {
//        if (arr[i] < min1)
//        {
//            min2 = min1;
//            min1 = arr[i];
//        }
//        else if (arr[i] < min2)
//            min2 = arr[i];
//
//    }
//     cout << min1 << " " << min2 << std::endl;
//
//    return 0;
//}


//int main()                                                                        //============задание № 2
//{
//    srand(time(0));
//    int n, i;
//    cout << "Enter n: "; cin >> n;
//
//    float* a = new float[n];
//
//    for (i = 0; i < n; i++)
//    {
//        a[i] = rand() % 21;
//        cout << a[i] << "  ";
//    }
//    cout << endl;
//
//  
//
//    for (int j = 0; j <= 20; j++)
//    {
//        int k = 0;
//        for (i = 0; i < n; i++)
//            if (a[i] == j) k++;
//        if (k == 1) cout << j << "  ";
//    }
//
//    delete[] a;
//
//    return 0;
//}

//int main() {                                                                          //============задание № 3
//	int number;
//	cout << "Number of elements: ";
//	cin >> number;
//	cout << endl << "Set of elements: ";
//	int* arr = new int[number];
//
//	for (int i = 0; i < number; i++)
//		cin >> arr[i];
//
//	for (int i = 0, j = number - 1; i < number / 2; i++, j--) {
//		int first = arr[i];
//		int last = arr[j];
//		arr[i] = last;
//		arr[j] = first;
//	}
//	for (int i = 0; i < number; i++)
//		cout << arr[i];
//
//}
