#include <iostream>
#include <cmath>
using namespace std;

int Factorial(int n)
{
	int xi = 1;
	for (int i = 1; i <= n; i++)
	{
		xi *= i;
	}
	return xi;
}
float yravnenie(int x, int n)
{
	if (n <= 0) {
		return 1;
	}
	return pow(2 * x, n-1) / Factorial(n - 1);
}

double Summ(int x, int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return yravnenie(x, n) + Summ(x, n - 1);
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int n, x;
	do
	{
		cout << "введите количество слагаемых, чтобы их количество было больше 0: n = ";
		cin >> n;
	} while (n < 0);
	cout << "введите x на который будет умножаться дробь: x = ";
	cin >> x;
	cout << "значение выражения равно = " << Summ(x, n);
	return 0;
}
