// lab21.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
// 4 
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "input a" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {char s[] = "i would like  to tell you  about project";
		int a=0;
		for (int i = 0; i < strlen(s); i++) 
		{
			if ((s[i] == ' ') && (s[i - 1] != ' '))
			{
				a++;
			}
		}
		cout <<"кол-во слов с троке = "<<a+1;
	
	}break;
	case 2: {char s[] = "мышь ноль преобразование диффузия три медведь";//
		//string s;
		//cout << "Введите строку: ";
		//cin >> s;
		int mini = strlen(s);// INT_MAX;
		int a = 0;
		for (int i = 0; i < strlen(s); i++)
		{
			//if ((s[i] == ' ') && (s[i - 1] != ' ') && (strlen(s) < mini))
				//mini = strlen(s);
			if (s[i] != ' ') 
				a++;
			if (s[i] == ' ' || i == strlen(s) - 1)
			{ 
				if (a != 0 && a < mini)
					
					mini = a;
				a = 0; 
			}
		}
		cout << "длина самого короткого слова = "<<mini << endl;
	}break;
	case 3: {char s[] = "минимум мама бемоль";
		//char b;
		//string s;
		//cout << "введите строку " << endl;
		//cin >> s;
		char b = s[0];

		for (int i = 1; i < strlen(s); i++) //s.length() от 1, чтобы  первая м не менялась
		{
			if (s[i] == b)
				s[i] = '.';
		}
		cout << s;
	
	}break;
	case 4: {//на отдельном проекте
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		int b = 0;
		string s;
		cout << "Введите строку: " << endl;
		getline(cin, s);
		//cin >> s;
		s.length();
		for (int i = 0; i < s.length(); i++)
		{
	
				//if (s[i] == a[j])
				if (s[i] == 'а' || s[i] == 'е' || s[i] == 'ё' || s[i] == 'и' || s[i] == 'о' || s[i] == 'у' || s[i] == 'ы' || s[i] == 'э' || s[i] == 'ю' || s[i] == 'я')
						b++;
			
		}
		cout << b << endl;;
	
	}break;
	case 5: {string fullname;  //C:\music\sheets\notes.mp3
		int i;
		cout << "введите имя файла полное" << endl;
		cin >> fullname;
		for (i = fullname.find_last_of(92) + 1; i < fullname.find_last_of('.'); i++)//	Поиск последнего символа, входящего в  
			cout << fullname[i];
		cout << "." << endl;
	
	}break;
	case 6: {string fullname; //C:\music\sheets\notes.mp3
		int i;
		cout << "введите имя файла полное" << endl;
		cin >> fullname;
		int b = 0;
		for (i = 0; i < fullname.length(); i++)
		{
			if (fullname[i] == 92)
				b++;
		}
		if (b == 1) 
		{
			for (i = fullname.find_first_of(92) + 1; i < fullname.find_last_of('.'); i++)
				cout << fullname[i];
		}
		else for (i = fullname.find_last_of(92, fullname.find_last_of(92) - 1) + 1; i < fullname.find_last_of(92); i++) //после fullname.find_last_of(92) - 1
		{
			cout << fullname[i];
		} cout << "." << endl;
	}break;
	case 7: {//string s;
		int i;
		char s[] = "Программа строка";
	
		for (i = 0; i < strlen(s); i++)

		{ 
			if (i % 2 != 0) 
				cout << s[i];
		}
		for (i = strlen(s) - 1; i >= 0; i--)
		{
			if (i % 2 == 0)
				cout << s[i];
		}
	//cout << "Зашифрованная строка: " << s << "." << endl;
	}break;

	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
