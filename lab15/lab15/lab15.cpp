// lab15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "RUS");
	cout << "input number of the task" << endl;
	cin >> a;
	switch (a) 
	{
	case 1: {int n, i,temp;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		int* b = new int[i];
		n = i;
		cout << "введите целочисленный массив " << endl;
		for (i = 0; i < n; i++)
			cin >> a[i];
		cout << "введите второй целочисленный массив " << endl;
		for (i = 0; i < n; i++)
			cin >> b[i];
		for (i = 0; i < n; i++)
		{
			temp = a[i];
			a[i] = b[i];
			b[i] = temp;
		}
		for (i = 0; i < n; i++)
			cout << a[i]<<" ";//новый массив а
		cout << endl;
		for (i = 0; i < n; i++)
			cout << b[i]<<" ";//новый массив б
	
		delete[] a;
		delete[] b;
	}break;

	case 2: {int n, i,j;
		float s = 0, k=0;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		float* b = new float[i];
		n = i;
		for (i = 0; i <= n - 1; i++)
		{
			a[i] = rand() % 50 - 25;
			cout << a[i] << " ";
		}
		cout << endl;
		for ( i = 0; i < n; i++)
		{
			s = 0;
			for (j = 0; j <= k; j++)
				s+=a[j];
			k++;
			b[i] = s / k;
		}

		for (i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}

		/*for (i = 0; i < k; i++)
		{
			s += a[i];//сумма каждого элемента
			f++;//сколько всего элементов до к 
		}

		for (i = 0; i < n; i++)
		{
			b[i] = a[i];
		}
		b[k - 1] = s / f;
		for (i = 0; i < n; i++)
			cout << b[i] << " ";
		*/}break;//каждый эелемент в нлвом массиве был ср ар

	case 3: {int n, i,b=0,d=0;
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
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0)
				b = a[i];
		}
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0)
			{
				a[i] += b;
			}
			cout << a[i] << " ";
		}
		delete[] a;
	}break;

	case 4: {int n, i, b = 0, d = 0;//подправить
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите целочисленный массив " << endl;
		for (i = 0; i < n; i++)
			cin >> a[i];
		int maxi = a[0], mini =a[0],imini=0,imaxi=0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] < mini)
			{
				mini = a[i];
				imini = i;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] > maxi)
			{
				maxi = a[i];
				imaxi = i;
			}
		}

		if (imini < imaxi)
		{
			for (i = imini + 1; i < imaxi; i++)
				a[i] = 0;
		}
		else
		{
			for (i = imaxi + 1; i < imini; i++)
				a[i] = 0;
		}
		for (int i = 0; i < n; i++)
			cout << a[i] << " "; //минимальное или максимальное число почему то включено в программу- решено исправлять не надо
		delete[] a;
	}break;

	case 5: {int n, i,temp,j;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите целочисленный массив, все элементы которого, кроме первого, упорядочены по возрастанию" << endl;
		for (i = 0; i < n; i++)
			cin >> a[i]; 
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1; j++)
			{
				if (a[j + 1] < a[j])
				{

					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
					/*temp = a[i];//меняем местами с меньшим числом
					b = i - 1;
					while ((a[b]>temp) & (b>=0))//изменить и просто менять местами
					{
						a[b + 1] = a[b--];
						a[b + 1] = temp;
					}*/

				}
			}
		}
		for (i = 0; i < n; i++)
			cout << a[i] << " ";
	
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
