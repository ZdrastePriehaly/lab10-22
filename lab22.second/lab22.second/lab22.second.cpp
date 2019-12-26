// lab22.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "input number of the tusk" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {setlocale(LC_CTYPE, "ru");
		int l, a = 0;
		string b;
		ifstream fin("22");
		getline(fin, b); // считываем
		fin.close(); // закрываем
		cout << b << endl; 
		l = b.length();
		for (int i = 0; i < l; i++) 
			if (b[i] == ' ')
			{
				a = i;
				break;
			}
		b.erase(0, a + 1);//удаляем слово + пробел
		cout << b << endl;
		ofstream z("22");
		z << b;
		
		

	}break;
	case 2: {
		int n, i, j;
		string b;
		char name[100];
		cin.getline(name, 100);
		strcat_s(name, ".txt");
		ofstream f(name);
		cout << "введите кол-во строк и звездочек в к. строке" << endl;
		cin >> n;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				f << "*";
			f << endl;
		}
		f.close();
	
	
	}break;
	case 3: {string a, buff;
		SetConsoleCP(1251); 
		SetConsoleOutputCP(1251);
		ifstream y("1.txt");
		ifstream y2("1.txt");
		getline(y, buff);
		getline(y2, a);
		y.close();
		y2.close();
		ofstream y3("1.txt");
		y3 << a;
		y3 << buff;
		y3.close();

	}break;
	case 4: {	SetConsoleCP(1251);
		SetConsoleOutputCP(1251); 
		string s;
		string s2;
		ifstream a("lab22.4");
		getline(a, s);
		a.close();
		s2 += s[0];
		for (int i = 1; i < s.length(); i++)
			if ((s[i] != ' ' || s[i] == ' ') && (s[i - 1] != ' '))
				s2 += s[i];
		ofstream a2("lab22.4");
		a2 << s2;
		a2.close();
	
	
	
	
	}break;
	case 5: {SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		int a = 0;
		string s;
		string s2;
		ifstream y("lab22.5");
		getline(y, s);
		while (s2 != s)
		{
			s2 = s;
			if (s[0] == ' ' && s[1] == ' ' && s[2] == ' ' && s[3] == ' ' && s[4] == ' ')
				a++;
			getline(y, s);

		}
		y.close();
		cout << a;
	
	}break;
	}

	return 0;
}

