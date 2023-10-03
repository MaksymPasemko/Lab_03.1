#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	A = 2 * x - 13.5;
	if (x < -1)
		B = sin(x) / (1 + pow(cos(x), 2));
	if (x >= -1 && x <= 1)
		B = pow(cos(x), 2) * pow(sin(x), 2) - 1;
	if (x > 1)
		B = log(x + 0.4);
	y = A + B;
	cout << "1) y = " << y << endl;

	if (x < -1)
		B = sin(x) / (1 + pow(cos(x), 2));
	else
		if (x >= -1 && x <= 1)
			B = pow(cos(x), 2) * pow(sin(x), 2) - 1;
		else
		    B = log(x + 0.4);
	y = A + B;
	cout << "2) y = " << y << endl;

	return 0;
}