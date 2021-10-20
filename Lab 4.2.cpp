// lab_4.2.cpp
// Квецко Вікторія
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 11

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		A = 2* abs(5-x);

		if (x <= 1)
			B = pow(exp(x),abs(2+x));
		else
			if (x >= 1)
				B = pow(cos(x),2)/(1+abs(sin (x)));
			else
				B = pow(sin(x),2)*(1/abs(2+x));

		y = A - B;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "----------------------" << endl;

	return 0;
}
