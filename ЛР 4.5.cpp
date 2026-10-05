#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	double x, y;
	double R;

	srand((unsigned)time(NULL)); // щоб випадкові числа завжди були різні

	cout << "R = "; cin >> R;

	// 1 спосіб: 

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((x >= 0 && y >= 0 && x * x + y * y <= R * R) ||  
			(x <= 0 && y <= 0 && y >= -x - R))

			cout << "yes" << endl;

		else

			cout << "no" << endl;
	}

	cout << endl << fixed;

	// 2 спосіб: 

	for (int i = 0; i < 10; i++)
	{
		x = 2. * R * rand() / RAND_MAX - R;
		y = 2. * R * rand() / RAND_MAX - R;

		if ((x >= 0 && y >= 0 && x * x + y * y <= R * R) ||
			(x <= 0 && y <= 0 && y >= -x - R))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;

		else

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}

	return 0;
}