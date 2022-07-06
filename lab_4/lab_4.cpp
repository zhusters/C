//#include <iostream>
//#include <math.h>
//using namespace std;
//double e = 2.718;
//int fact(int x)
//{
//	if (x == 0)
//		return 1;
//	return x * fact(x - 1);
//}
//double Sx(double x, double n) {
//	double S = 0, k = 1;
//	for (int i = 0;i < n; i++) {
//		S += (x / 2) / k;
//	}
//	return S;
//}
//double Yx(double x, double n) {
//	return (x * x / 4 + x / 2 + 1) * exp(x / 2);
//}
//
////обьявление ф-ии, передаем перечень типов(double,ф-ии S(x), Y(x) ,int)
//void Out_Rez(double(*Func)(double, double), double a, double b, double h, int n) {
//	for (double x = a; x <= b; x += h) {
//		printf("x=%If\tY(x)=%If\n", x, Func(x, n));
//	}
//
//}
//
//void ModulF(double(*FuncS)(double, double),double(*FuncY)(double, double), double a, double b, double h, int n) {
//	for (double x = a; x <= b; x += h) {
//		printf("x=%If\t|Y(x)-S(x)|=%If\n", x, fabs(FuncY(x, n) - FuncS(x, n)));
//	}
//}
//
//int main()
//{
//	double a, b, h;
//	int n;
//	cout<< "input a,b,h,n:"<< endl;
//	cin>> a>> b>> h >> n;
//	cout<< "\nFunction-S(x)\n";
//	//вызов ф-ии
//	Out_Rez(Sx, a, b, h, n);
//
//	cout<< "\nFunction-Y(x)\n";
//	Out_Rez(Yx, a, b, h, n);
//
//	cout<<("\nFunction-Y(x)-S(x)\n");
//	ModulF(Sx, Yx, a, b, h, n);
//
//	return 0;
//}
#include <iostream>
using namespace std;
double rec(void);
double simple(void);
int main() {
	int vibor;
	cout << "main menu:\n1.rec\n2.simple\n3.exit\ninput number - ";
	cin >> vibor;
	switch (vibor) {
	case 1:rec();
		break;
	case 2:simple();
		break;
	case 3:
		cout << "exit";
		return 0;
	}
	/////////////////////////////////////////////////
	int n;
	//////////recurse
	double rec(int n) {
		if (n == 1) return 1. / (1 + 1. / 2.);
		return 1 / (n + y(n - 1));
	}
	/////////simple
	double simple(int n) {
		double res;
		res = 1. / 2.;
		for (int i = 1; i <= n; i++)
			res = 1. / (i + res);
		return res;
	}
}