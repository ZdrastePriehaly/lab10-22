// lab16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> //переделать 16
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "input number of the task" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {int n, i,x=0;//поменять чтоб удалялось
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите целочисленный массив " << endl;
		for (i = 0; i < n; i++)
			cin >> a[i]; 
		for (i = 1; i < n; i++)
		{
			if (a[x] != a[i]) //сравниваем нулевой элемент с первым
			{
				x++;//получаем следующий номер
				a[x] = a[i];//меняем, чтобы сравнить первый и второй
			}
		}
		x++;
		for (int i = 0; i < x; i++)
		{
			cout << a[i] << " ";
		}
	
	}break;

	case 2: {int n, i,d=0,j,temp,idouble,b=0;
		cout << "введите длину массива" << endl;
		cin >> n;
		int* a = new int[n];
		//n = i;
		cout << "введите целочисленный массив " << endl;
		for (i = 0; i < n; i++)
			cin >> a[i]; 
		d = 0;

		for (i = 0; i < n-d; i++)
		{
			idouble = 0;
			for (j = 0; j < n; j++)
			{
				if (a[i] == a[j])
				{
					idouble++;
					//d = j;
				}
			}

			if (idouble == 2)
			{
				d++;
				for (j = i; j < n - 1; j++)
				{
					temp = a[j + 1];
					a[j + 1] = a[j];
					a[j] = temp;
				}
				i--;
				/*for (j = d; j < n - 1; j++)
					a[j] = a[j + 1];
				n--;
				for (j = i; j < n - 1; j++)
					a[j] = a[j + 1];
				n--;
				i--;*/
			}
			b++;
		}
		//idouble = 0;
		for (i = 0; i < n-d; i++)				
		{
			cout <<"новый массив:"  <<a[i] << " "<<endl;
		}
		cout <<"размер нового массива = "<< b-d << endl;

	
		/*x++;
		if (x == 2)
		{
			for (i = 0; i < n; i++)
			{
				cout << a[i] << " ";
				cout << d;
			}
		}*/
	
	
	}break;

	case 3: {int n, i,imaxi=0,imini=0,x,j=0;//дорешать
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите целочисленный массив " << endl;
		for (i = 0; i < n; i++)
			cin >> a[i]; 
		int mini = a[0], maxi = a[0];
		int y = 0;
		for (i = 0; i < n; i++)
		{
		
				if (a[i] < a[imini])
				{
					mini=a[i];
					imini = i;

				}
			
				if (a[i] >a[ imaxi])
				{
					maxi = a[i]; 
					imaxi = i;
				}
			
		}
		int* newmas = new int[n + 2];
		
		for (i = 0; i < n + 2; i++)
		{
			x = 0;
			for (int y = 0; y < n + 2; y++)
			{
			}
				if (j == imini && j == 0)
				{
					newmas[j] = 0;
					i++;
					/*newmas[i + x] = a[i];
					newmas[i + x + 1] = 0;
					maxi++;
					x++;*/
				}
				else if (j == imini)
				{
					newmas[i] = 0;
					i++;
					/*newmas[i + x] = 0;
					newmas[i + x + 1] = a[i];
					mini--;
					x++;*/
				}
				if (j == imaxi)
				{
					newmas[i + 1] = 0;
					x = 1;
				}
				if (i < n + 2 && i >= 0)
					newmas[i] = a[j];
				if (x == 1)
					i++;
				if (j < n)
					j++;
			
		}
		
		for (i = 0; i < n + 2; i++)
			cout<<newmas[i] << " ";
		
		/*for (i = 0; i < n + 2; i++)
		{
			newmas[i] = a[i];

			if (imini < imaxi)
				//imaxi++;
			{
				for (i = n + 2; i < imaxi + 2; i++)
					a[i] = a[i - 1];
				a[imaxi + 1] = 0;
			}
			if (imini < imaxi)
				//imaxi++;
			{
				for (i = n + 2; i < imini + 1; i++)
					newmas[i] = newmas[i - 1];
				newmas[imini] = 0;
			}
			else
			{
				for (i = n + 2; i < imini + 1; i++)
					newmas[i] = newmas[i - 1];
				newmas[imini] = 0;
			}
			if (imini < imaxi)
				//imaxi++;
			{
				for (i = n + 2; i < imaxi + 2; i++)
					a[i] = a[i - 1];
				a[imaxi + 1] = 0;
			}
		}*/
		
			//if (newmas[i] < mini)
			/*if (newmas[imini] < newmas[i])
			{
				for (int j = n + 2 - 1; j >= imini; j--)
					a[j] = a[j - 1];
				a[imini] = 0;

			}
			if (newmas[imaxi] > newmas[i])
			{
				for (int j = n + 2 - 1; j > imaxi + 1; j--)
					a[j] = a[j - 1];
				a[imaxi + 2] = 0;

			}*/

			/*if (newmas[i] < maxi)
			{
				for (int j = n + nul1+nul2; j > i; j--)//от последнего отрицательного числа идем вниз
				{
					a[j] = a[j - 1];
				}
				a[i + 1] = 0;

			}*/
		
		//for (i = 0; i < n + 2; i++)
		//	cout << newmas[i] << " ";
		delete[] a;
		delete[] newmas;
	
	}break;

	case 4: {int n, i, nul = 0;//j
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите целочисленный массив " << endl;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
		{
			if (a[i] < 0)
				nul++;
		}
		int* a2 = new int[n + nul];
		for (i = 0; i < n + nul; i++)
		{
			a2[i] = a[i];//новый массив размером больше исходного на кол-во чисел, меньших 0
			if (a2[i] < 0)
			{
				for (int j = n + nul; j >= i; j--)//от последнего отрицательного числа идем вниз //мб n+nul-1
				{
					a[j] = a[j - 1];
				}
				a[i + 1] = 0;

			}
			cout << a2[i] << " ";

		}

		//for (i = 0; i < n + nul; i++)
		//	cout << a2[i] << " ";

		delete[] a;
		delete[] a2; }break;

	case 5: {int n, i, nul = 0;//j
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите целочисленный массив " << endl;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
		{
			if (a[i] > 0)
				nul++;
		}
		int* a2 = new int[n + nul];
		//for (i = 0; i < n + nul; i++)
		for (i = n+nul; i >=0; i--)
		{
			a2[i] = a[i];//новый массив размером больше исходного на кол-во чисел больше 0
			if (a[i] > 0)
			{
				for (int j = n + nul-1; j > i; j--)//от последнего положит числа идем вниз 
				{
					a2[j] = a2[j - 1];
				}
				a2[i] = 0;
				//cout << a2[i] << " ";
			}
		}

		for (i = 0; i < n + nul; i++)
			cout << a2[i] << " ";

		delete[] a;
		delete[] a2;
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
