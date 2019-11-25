// lab12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void powerA3(float A, float& B)
{
	B = pow(A, 3);
}

float Sign(float x)
{
	if (x < 0)
		return -1;
	else if (x == 0)
		return 0;
	else if (x > 0)
		return 1;
	return 0;
}

double RingS(double R1, double R2)
{
	const double PI = 3.14;
	return (PI * (pow(R1, 2) - pow(R2, 2)));
}

int Quarter(int x, int y) //находим четверть координат
{
	int a = 0;
	if (x > 0 && y > 0)
		a = 1;
	if (x < 0 && y > 0)
		a=2;
	if (x < 0 && y < 0)
		a= 3;
	if (x > 0 && y < 0)
		a = 4;
	return a;
}

double Fact2(int N) //смотрим на входное число и в зависимости четное оно или нет находим двойной факториал
{
	double a = 1;
	for (int i = 2; i <= N; i += 2)
	{
		if (N % 2 == 0 && i % 2 == 0)
			a = a * i;
	}
	for (int i = 1; i <= N; i += 2)
	{
		if (N % 2 != 0 && i % 2 != 0)
			a = a * i;
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "input number of the task" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {
float A, B=0;
		cout << "введите пять чисел через пробел" << endl;
		for (int i=1; i<=5;i++)
		{
			cin >> A;
			powerA3(A, B);
			cout << A <<"^3 = "<< B << endl;
		}
			} break;
	case 2: {
		float A, B;
		cout << "введите два вещественных числа" << endl;
		cin >> A >> B;
		cout << Sign(A) + Sign(B) << endl;
			} break;
	case 3: {float R1, R2;
		for (int i = 1; i < 4; i++)
		{
			cout << "введите R1" << endl;
				cin >> R1;
				cout << "введите R2" << endl;
				cin >> R2;
				cout << RingS(R1, R2) << endl;//площадь кольца
		}
			} break;
	case 4: {int x, y;
		cout << "введите координаты x и y" << endl;
		cin >> x >> y;
		if (x != 0 && y != 0)
			cout << Quarter(x, y) << " coordinate quarter" << endl;
		else
			cout << "error" << endl;
			} break;
	case 5: {int N;
		cout << "введите число" << endl;
			cin >> N;
			cout << Fact2(N) << endl;//двойной факториал
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
