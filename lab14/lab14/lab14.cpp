﻿// lab14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "input number of the task" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {int n, i;
		float K, L, S = 0, b = 0;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i; 
		for (i = 0; i <= n - 1; i++)
		{
			a[i] = rand() % 50 - 25;
			cout << a[i] << " ";

		}
		cout << endl;
		cout << "введите два числа K и L, (K<L)" << endl;
		cin >> K >> L;
		for (i = K; i <= L; i++)
		{
			S = S + a[i-1];
			b++;
		}
		cout <<"среднее арифметическое элементов от K до L = "<<S/b<< endl;

		delete[] a;
	
	} break;

	case 2: {int n, i;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int [i];
		n = i;
		cout<<"введите целочисленный массив размера, не содержащий одинаковых чисел"<<endl;
		for (i = 0; i < n; i++)
			cin >> a[i];
		int mini = a[1] - a[0];
		for (i = 1; (i < n && mini != 0); i++)
		{
			if (mini != a[i] - a[i - 1])
				mini = 0;
		}
		/*d = a[i - 1] - a[i - 2];
		for (i = 0; i < n - 1; i++)
		{
			S = a[i + 1] - a[i];
			if (S == d) { S; }

			else
				return 0;
		}*/
			cout << mini;
		delete[] a;
	} break;

	case 3: {int n, i,mini;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите целочисленный массив размера " << endl;
		for (i = 0; i < n; i++)
			cin >> a[i]; 
		mini = a[1];
		for (i = 0; i < n; i++)
		{
			if ((i+1) % 2 == 0)
			{
				if (a[i] < mini)
					mini = a[i];
			}

		}
		cout << "минимальный элемент четного номера = " << mini << endl;
	
		delete[] a;
	} break;

	case 4: {int n, i,lmaxi=0,d=0;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		for (i = 0; i <= n - 1; i++)
		{
			a[i] = rand() % 50 - 25;
			cout << a[i] << " ";

		}
		cout << endl; 
		for (i = 1; i < n - 1; i++)
		{
			if ((a[i] > a[i + 1]) & (a[i] > a[i - 1]))
			{
				lmaxi = a[i];
				d = i;
			}
		}
		cout << "local max = " << (d+1);//выводит номер элемента от 0(мб +1)
	
		delete[] a;
	} break;

	case 5: {int n, i, j,b=0,c=0;

		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите целочисленный массив размера, содержащий ровно два одинаковых элемента" << endl;
		for (i = 0; i < n; i++)
			cin >> a[i]; 
		for (i = 0; i < n; i++)//сложность алгоритма ...
		{
			for (j = 1; j < n; j++)
			{
				if ((a[i] == a[j]) & (i!=j))
				{
					b = i+1;
					c = j+1;
				}
			}
		}
		if (b < c)
			cout <<"номера повторяющихся элементов - " <<b << " " << c;
		else
			cout << c << " " << b;
		delete[] a;
	} break;

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
