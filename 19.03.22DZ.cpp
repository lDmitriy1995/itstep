#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


//void fun( ) {               
//
//    setlocale(LC_ALL, "Russian");
//    cout << "вычисление средней оценки по 10 бальной шкале" << endl;
//
//    double n, summ = 0, chislo, sra;
//    for (n = 1; n <= 8; n++) {
//
//        cin >> chislo;
//        summ += chislo;
//    }
//    sra = summ / 8;
//    cout << endl << sra << endl;
//    cout << "введено чисел - " << 8 << endl;
//    cout << "средняя оценка  " << " = " << sra << endl;
//    cout << "сумма чисел - " << summ << endl;
//
//}
//
//int main() {
//  
//    fun();
//}


//1 + rand() % 25;


//void fun( int a) 
//{
//	cout << "100 ball system vvod :" << endl;
//	int vvod{ 0 };
//	cin >> vvod;
//	
//	if (vvod > 90 && vvod <= 100) {
//		cout << " 5" << endl;
//	}
//
//	if (vvod > 70 && vvod < 89) {
//		cout << "4" << endl;
//	}
//	if (vvod > 50 && vvod < 69 ) {
//		cout << "3" << endl;
//	}
//	if (vvod > 1 && vvod < 49) {
//		cout << "2" << endl;
//	}
//	else {
//		cout << "eshe raz" << endl;
//	}
//
//
//}
//
//int main() {
//	int s{ 0 };
//	fun(s);
//}

//void fun() {
//    const int N = 9;
//    int Array[N];
//    int sum = 0;
//    int sum2 = 1;
//
//    for (int i = 0; i < N; i++)
//    {
//        cout << "Your massive -" << i << " = ";
//        cin >> Array[i];
//        sum2 = Array[i] * 2;
//
//
//    }
//    int Max = Array[0], Min = Array[0];
//    for (int i = 1; i < N; i++)
//    {
//        if (Max < Array[i])
//            Max = Array[i];
//        if (Min > Array[i])
//            Min = Array[i];
//    }
//    cout << "umnojenie all elements - " << sum2 << endl;
//    cout << "Max: " << Max << endl;
//    cout << "Min: " << Min << endl;
//
//    sum = Max + Min;
//    cout << "Your summa of massive's elements is = " << sum << endl;
//    
//}
//
//int main()
//{
//    fun();
//
//}


const int N = 5;
using namespace std;
int mass[N][N] = { 0 };
int main()
{
    setlocale(0, "RUS");

    for (int i = 1; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            if (j + i == N - 1);
            else mass[j][i] = 1;
        }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
