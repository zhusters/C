#include<iostream>
#include<math.h>

#define X 6.251
#define Y 0.827
#define Z 25.001 

using namespace std;

int main()
{
	double x, y, z, res, left, upper, bottom;
	x = X;
	y = Y;
	z = Z;
	bottom = exp(fabs(x - y)) + x / 2; //true
	upper = pow(cos(y), 3) * fabs(x - y) * (1 + (pow(sin(z), 2) / sqrt(x + y)));
	left = pow(y, cbrt(x));
	res = left + (upper / bottom);
	cout << "res=" << res;
	return 0;
}