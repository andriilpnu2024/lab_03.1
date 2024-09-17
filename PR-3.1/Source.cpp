// Lab_03_1.cpp
// <Кащук Андрій>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A;// проміжний результат - функціонально стала частина виразу

	cout << "x = "; cin >> x;
	
	// спосіб 1: розгалуження в скороченій формі
	
	if (x < 0)
		A = pow(x, 3) - 2 * pow(x, 4);
	if (x >= 0 && x <= 2)
		A = fabs(x) + exp(x);
	if (x > 2)
		A = 4 * cos(pow(x, 2) - 2);
	y = (2 + x) / pow(x, 2) + 1 + A;

	cout << endl;
	
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі

	if (x < 0)
		A = pow(x, 3) - 2 * pow(x, 4);
	else
		if (x > 2)
			A = 4 * cos(pow(x, 2) - 2);
	else
		A = pow((fabs(x) + exp(x)), 3);
			
	y = (2 + x) / pow(x, 2) + 1 + A;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
