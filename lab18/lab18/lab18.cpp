﻿// lab18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>//номера 1 4 5
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "input number of the task" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {int n, m, k,i=0,j=0;
		cout << "введите массив: сначала кол-во строк" << endl;
		cin >> n;
		cout << "кол-во столбцов" << endl;
		cin >> m;
		int a[100][100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
			cout << '\n';
		}
		k = 0;
		for (k = 0; k < (m / 2+1); k++)
		{
			for ( i = k; i < m - k; i++)//вниз
				cout << a[i][k] << " ";
			i--;
			for (int j = k + 1; j < m - k; j++)//вправо
				cout << a[i][j] << " ";
			j--;
			for (i = m - k - 2; i >= k; i--)
				cout << a[i][j] << " ";
			i++;
			for (j = m - k - 1; j > k; j--)
				cout << a[i][j] << " ";
			j++;

		}
		
	}break;
	case 2: {int n, m, k,sum=0,S=1;
		cout << "введите массив: сначала кол-во строк" << endl;
		cin >> n;
		cout << "кол-во столбцов" << endl;
		cin >> m;
		int a[100][100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
			cout << '\n';
		}
		cout << "введите целое число K (1 ≤ K ≤ M)" << endl;
		cin >> k;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i == (k - 1))//равен введенной строке
				{
					sum += a[i][j];
					S *= a[i][j];
				}
			}
		}
		cout << "сумма kой строки = " << sum<<endl;
		cout << "произведение kой строки = " << S;
		delete[] a;
	}break;
	case 3: {int n, m;
		cout << "введите массив: сначала кол-во строк" << endl;
		cin >> n;
		cout << "кол-во столбцов" << endl;
		cin >> m;
		int a[100][100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
			cout << '\n';
		}
		int s = 1, min = INT_MAX, nom = 0;

		for (int i = 0; i < n; i++)
		{
			s = 1;//произведение в столбце
			for (int j = 0; j < m; j++)
			{
				s *= a[j][ i];
			}
			if (s < min)
			{
				min = s;
				nom = i;//номер столбца
			}

		}


		cout << "номер столбца с минимальным произведением " << nom+1<< endl;
		cout << "наименьшее произведение = " << min;
		/*for (int i = 0; i < n; i++)
		{
			mini *= a[i][0];
			//cout << mini << endl;
		}
		for (int i = 0; i < n; i++)
		{
			//s = 1;
			for (int j =1; j < m; j++)
			{
				s *= a[i][j];
			}
			if (mini > s)
			{
				mini = s;
				imini = j;
			}
			//s = 1;
		}*/
		//cout <<"номер стобца с минимальным произведением "<< imini+1 << endl;
		//cout<<"наименьшее произведение = "<<mini;//вычисляет произведение всех строк...?
		delete[] a;
	}break;
	case 4: {int n, m, s, mini = 1, imini = 0,k,x,j,i;
		cout << "введите массив: сначала кол-во строк" << endl;
		cin >> n;
		cout << "кол-во столбцов" << endl;
		cin >> m;
		int a[100][100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
			cout << '\n';
		}
		for ( j = 0; j < n; j++)
		{
			x = 0;
			k = 0;//кол-во элементов больших ср ар
			for (i = 0; i < n; i++)
			{
				x += a[i][j];//все элементы
				s = x / n;
			}
			for (i = 0; i < n; i++)
			{
				if (a[i][j]>s)
					k++;
			}
			cout << k << " ";
		}
		
	
	
	}break;
	case 5: {int n, m, j,b;//работало теперь перестало
		cout << "введите массив: сначала кол-во строк" << endl;
		cin >> n;
		cout << "кол-во столбцов" << endl;
		cin >> m;
		int a[100][100];
		for (int i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
				cin >> a[i][j];
			cout << '\n';
		}
		for (j = 0; j < m; j++)
		{
			b = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i][j] % 2 != 0)
					b++;
			}

			if (b == n)
			{
				cout << j + 1 << endl;

			}
			else
				cout << "0";
		}
		/*if (b == 0)
		{
			cout << "0";
		}*/
		delete[] a;
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
