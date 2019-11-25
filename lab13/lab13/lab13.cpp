// lab13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "input number of the task" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {int n, i;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		for (int i = 0; i < n; i++)
			a[i] = 2 * i - 1;
		for (int i = 0; i < n; i++)
			cout << a[i] << endl;
		delete[] a;

	} break;
	case 2: {int n, i, A, D;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите первый элемент массива" << endl;
		cin >> A;
		cout << "введите знаменатель геометрической прогрессии" << endl;
		cin >> D;
		for (int i = 0; i < n; i++)
		{
			a[i] = A * pow(D, i);
			cout << a[i] << endl;
		}
		delete[] a;

	} break;
	case 3: {int n, i, A, B, C;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		cout << "введите первый элемент массива" << endl;
		cin >> A;
		cout << "введите второй элемент массива" << endl;
		cin >> B;
		a[0] = A;
		a[1] = B;
		C = A + B;
		for (int i = 2; i < n; i++)
		{
			a[i] = C;
			C = C + C;
		}
		for (int i = 0; i < n; i++)
			cout << a[i] << endl;
		delete[] a;

	} break;
	case 4:  {int n, i;
		cout << "введите длину массива" << endl;
		cin >> i;
		int* a = new int[i];
		n = i;
		//a[i] = rand() % 100 - 50;
		for (i = 0; i <= n-1; i++) 
		{
			a[i] = rand() % 50 - 25;
			cout << a[i] << " ";

		}
		cout << endl;

		for (i = 0;i<n/2; i++)
		{
			cout << a[i]<<" ";
			cout << a[n - 1 - i]<<" ";
		}
		if (n % 2 != 0)
			cout << a[n / 2]<<" ";
		
		/*for (i = 0; i < n; i++)
		{
			cout << a[i] << " ";
			cout<<a[n - i + 1]<<endl;
		}
		/*int* a;
		int N;
		int i;
		cout << "введите длину массива" << endl;
		cin >> N;
		a = new int[N];
		for (i = 0; i < N; i++) {
			a[i] = rand()%50 - 25;
			cout << a[i] << " ";
		}*/
		delete[] a;


		} break;
	case 5: {
		int n, i;
		cout << "введите длину массива" << endl;
		cin >> n;
		int* a = new int[n];
		
		for (i = 0; i <= n - 1; i++)
		{
			a[i] = rand() % 50 - 25;
			cout << a[i] << " ";

		}
		cout << endl;
		for (i = 1; i < n; i += 2)
			cout << a[i] << " ";
		if (i % 2 == 0)
		{
			for (i = n-2; i >= 0; i-=2)
					cout << a[i] << " ";
		}
		else
		{
			for (i = n - 1; i >= 0; i -= 2)
				cout << a[i] << " ";
		}
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
