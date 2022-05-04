#include<iostream>
using namespace std;

//template<typename M>                       
//void max(M m[], size_t size)
//{
//	M max = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (m[i] > max)
//		{
//			max = m[i];
//			
//		}
//		
//	}
//	cout << max << endl;
//}

//                                                       
//template<typename X>
//void min(X a[], size_t size)
//{
//	X min = (X) INT_MAX;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (a[i] < min)
//		{
//			min = a[i];
//
//		}
//		
//	}
//	cout << min << endl;
//}


//template< typename T >                                
//void bubbleSort(T* arr, int size)
//{
//    T tmp;
//
//    for (int i = 0; i < size - 1; ++i) 
//    {
//        for (int j = 0; j < size - 1; ++j) 
//        {
//            if (arr[j + 1] < arr[j])
//            {
//                tmp = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//        cout << endl;
//}

//template <typename P>
//void search(P* arr, int size, int key)
//{
//    int l = 0;
//    int u = size - 1;
//
//    while (l <= u) {
//        int m = (l + u) / 2;
//        if (arr[m] == key)
//        {
//            cout << "Element index: " << m << std::endl;
//            break;
//        }
//        if (arr[m] < key)
//        {
//            l = m + 1;
//
//        }
//        if (arr[m] > key)
//        {
//            u = m - 1;
//        }
//    }
//}

//template <typename R>
//void replacement(R* arr, int size, int key, R znach)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        if (i == key)
//        {
//            arr[i] = znach;
//        }
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//        cout << endl;
//}

int main() {

	/*int m[5] = { 2, 3, 4, 5, 6 };
	min(m,5);*/

	/*int a[5] = { 2, 3, 4, 5, 6 };
	min(a, 5);*/

   /* int arr[5] = { 56, 15, 23, 1, 6 };
    bubbleSort(arr, 5); */

    /*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int key{ 8 };
    search(arr, 10, key);*/

    /*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int key{ 8 };
    int znach{ 3 };
    replacement(arr, 10, key, znach);*/
}
