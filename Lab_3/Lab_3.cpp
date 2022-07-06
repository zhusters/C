#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	double x, a, b, h, y, k = 1, fact;
	int n;
	cout << "enter a,b,h,n";

	cin >> a >> b >> h >> n;
	for (x = a; x <= b; x += h) {
		y = (x * x / 4 + x / 2 + 1) * exp(x / 2);
		//исп ф-ию
		//y = pow((x / 2), k) * k * k + 1 / k;
		double r = 1, sum = 1;
		for (k = 1; k <= n; k++) {
			r *= (x / 2) / k;
			sum += r * (k * k + 1);
		}
		cout << x << "    " << y << "    " << sum << endl;

	}
	return 0;
}
