#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double a, b, z, y;
	double x = 0;

	//cin >> a >> b >> z;
	cout << "enter 'a','b','z' value" << endl;
	cin >> a >> b >> z;

	if (z > 0)
		x = 1 / z * z + z + z;
	else x = 1 - z * z * z;
	int key;
	//cin >> key;
	cout << "select finction falue 1,2,3 in f(y)=2x, x^2, x/3" << endl;
	int k;
	cin >> k;

	switch (k)
	{
	case 1:
		key = x + x;
		break;
	case 2:
		key = x * x;
		break;
	case 3:
		key = x / 3;
		break;

	default:
		cout << "wrong case"; return 0;
	}

	double upper = 2.5 * a * exp(fabs(-x - x - x)) - 4 * b * x * x;
	double bottom = log(fabs(x)) + key;
	y = upper / bottom;
	cout << y;
	//	system("pause");
	return 0;


}
