/*int main(void) {                 1 ZADANIE
		char str[] = "My;string!!!,AAA;;,X?";
	   std::cout << str << std::endl;
		for (char* p = str; *p; ++p)
			if (*p == ';' || *p == ',')
			 * p = ' \t';
		std::cout << str << std::endl;  
		 return 0;
		
	}*/



//int main(){                         2 ZADANIE
//
//    setlocale(LC_ALL, "rus");
//    int countLetter = 0, countDigit = 0, countSymb = 0;
//    char str[500];
//    cout << "Введите строку:" << endl;
//    cin.getline(str, 500);
//    for (int i = 0; i < strlen(str); i++)
//    {
//        if (isalpha(str[i]))
//            countLetter++;
//        else if (isdigit(str[i]))
//            countDigit++;
//        else
//            countSymb++;
//    }
//    cout << "Количество букв в строке: " << countLetter << endl;
//    cout << "Количество цифр в строке: " << countDigit << endl;
//    cout << "Количество других символов в строке: " << countSymb << endl;
//    system("pause");
//    return 0;
//}





//void main()         3 ZADANIE
//{
//    setlocale(LC_ALL, "rus");
//    int counter = 0;
//    cout << "Введите предложение: ";
//    string st;
//    getline(cin, st);
//
//    for (int i = 1; i < st.size(); i++)
//    {
//        if (st[i - 1] != ' ' && (st[i] == ' ' || st[i + 1] == '\0')) counter++;
//    }
//
//    cout << "Количество слов в данном предложении " << counter << endl;
//}


//int main() {
//
//	setlocale(LC_ALL, "rus");
//	    int countLetter = 0, countDigit = 0, countSymb = 0;
//	    char str[500];
//	    cout << "Введите строку:" << endl;
//	    cin.getline(str, 500);
//	    for (int i = 0; i < strlen(str); i++)
//	    {
//	        if (isalpha(str[i]))
//	            countLetter++;
//	        else if (isdigit(str[i]))
//	            countDigit++;
//	        else
//	            countSymb++;
//	    }
//	    cout << "Количество букв в строке: " << countLetter << endl;
//	    cout << "Количество цифр в строке: " << countDigit << endl;
//	    cout << "Количество других символов в строке: " << countSymb << endl;
//	    system("pause");
//	    return 0;
//	}
