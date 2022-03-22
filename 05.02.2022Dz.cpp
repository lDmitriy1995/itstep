#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;


//int main(int argc, char* argv[])                                                        //============задание № 1
//{
//    setlocale(LC_ALL, "Russian");
//    int i, j;
//    int mas[3][3], sum[3];
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++) {
//            cout << "Введите mas[" << i + 1 << "][" << j + 1 << "]=";
//            cin >> mas[i][j];
//        }
//    }
//    for (i = 0; i < 3; i++) {
//        sum[i] = 0;
//        for (j = 0; j < 3; j++)
//            sum[i] += mas[j][i];
//    }
//    for (i = 0; i < 3; i++)
//        cout << "Сумма столбца" << i + 1 << '=' << sum[i] << endl;
//
//    return 0;
//}

//void main()                                                                             //============задание № 3
//{
//    setlocale(0, "ru");
//
//    int mas[5][5];
//    srand(time(0));
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            mas[i][j] = rand() % 101;
//            cout << mas[i][j] << "\t";
//        }
//        cout << endl << endl;
//    }
//    cout << "-----------------------------------\n\n";
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0, b = 4, a = 1; j < 5; j++, b--)
//        {
//            if (j <= 2)
//            {
//                mas[i][j] = mas[i][b];
//            }
//            else
//            {
//                mas[i][j] = mas[i][a];
//                a--;
//            }
//        }
//        cout << endl << endl;
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            cout << mas[i][j] << "\t";
//        }
//        cout << endl << endl;
//    }
//}
