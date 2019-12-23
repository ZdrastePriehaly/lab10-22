// lab19.cpp : Этот фа
//йл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>   //cделать 5ый
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "input a" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {int n, m, temp,i,j;
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
		int imaxi=0,jmaxi=0,imini=0,jmini=0;
		for (i = 0; i < n; i++)
		{
			int maxi = INT_MIN, mini = INT_MAX;
			for (j = 0; j < n; j++)
			{
				if (a[i][j] > maxi)
				{
					maxi = a[i][j];
					imaxi = i;
					jmaxi = j;
				}
				if (a[i][j] < mini)
				{
					mini = a[i][j];
					imini = i;
					jmini = j;
				}
			}
			temp = a[imaxi][jmaxi];
			a[imaxi][jmaxi] = a[imini][jmini];
			a[imini][jmini] = temp;
			//maxi = a[0][0];
			//mini = a[0][0];

		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cout << a[i][j]<<" ";
			cout << endl;
		}
	
	
		delete[] a;
	
	}break;
	case 2: {int n, m, temp, i, j;
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
		int maxi = a[0][0], mini = a[0][0], jmaxi = 0, jmini = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (a[i][j] > maxi)
				{
					maxi = a[i][j];
					//imaxi = i;
					jmaxi = j;
				}
				if (a[i][j] < mini)
				{
					mini = a[i][j];
					//imini = i;
					jmini = j;
				}
			}
			temp = a[i][jmaxi];//определенный столбец j, с разнымиi, чтобы переходило на след строчки
			a[i][jmaxi] = a[i][jmini];
			a[i][jmini] = temp;
		}
		for ( i = 0; i < n; i++)
		{
			for ( j = 0; j < m; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}


		delete[] a;

	}break;
	case 3: {int n, m, temp, i, j;//
		cout << "введите массив: сначала кол-во строк(четное число)" << endl;
		cin >> n;
		cout << "кол-во столбцов(четное число)" << endl;
		cin >> m;
		int a[100][100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
			cout << '\n';
		}

		for (i = 0; i < n / 2; i++)
		{
			for (j = 0; j < m / 2; j++)
			{
				temp = a[i][j];
				a[i][j]=a[i + n / 2][j + m / 2];
				a[i + n / 2][j + m / 2] = temp;
			}
		}
		for ( i = 0; i < n; i++)
		{
			for ( j = 0; j < m; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		delete[] a;

	}break;
	case 4: {int n, m, temp, i, j;//
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
		for (i = 0; i < n - 1; i++)//n-1, чтобы сравнить последний элемент m с предпоследним 
		{
			for (j = i + 1; j < m; j++)
			{
				if (a[i][0] > a[j][0])//1
				{
					for (int t = 0; t < n; t++)//чтобы был один столбец
					{
						temp = a[i][t];
						a[i][t] = a[j][t];
						a[j][t] = temp;
					}
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

		delete[] a;
	}break;
	case 5: {int m, a,temp,sum,k,v=0,c,i;
		cout << "введите массив: сначала размернность N, а потом строки" << endl;
		cin >> m;
		int mas[100][100];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> mas[i][j];
			cout << '\n';
		}
		c = m; sum = 0; 
		int* newmas = new int[m * 2 - 1];
		for (k = 0; k < m * 2 - 1; k++) 
		{
			for (i = 0; i < m; i++)
			{ 
				for (int j = 0; j < m; j++) 
				{	
					if ( i == j + c - 1)
					{
						sum += mas[i][j]; 
					} 
				}
			} 
			newmas[k] = sum; 
			sum = 0;
			c--;
		}
		for (i = 0; i < m * 2 - 1; i++)
			cout << newmas[k] << " " << endl;;
		/*for (int i = 0; i < m*2-1; i++)//чтобы посчитать каждую диагаональ, в 5 на 5=9
		{
			sum = 0;
			k = i;
			if (i <= m)
			{
				k = m - 1;
				v++;
			}
			for (int j = k; j > v - 1; j--)
			{
			//	sum +=a[]
			}
			
		}*/
	
	
	
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
