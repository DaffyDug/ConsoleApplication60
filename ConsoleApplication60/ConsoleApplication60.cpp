#include <iostream>
#include <math.h>
using namespace std;

double SQRT(double num)
{
	for (double i = 0; i < num; i += 0.00001)
	{
		if (i * i >= num)
		{
			return i;
		}
	}
	return 0;
}
double da(double x, double y)
{
	double Y = abs(x - y);
	Y /= y;
	return Y;
}

int main()
{
	cout << SQRT(103) << endl;
	cout << SQRT(0.47368) << endl;
	cout << "delta=" << da(SQRT(103), 0.47368) << '\n';
}