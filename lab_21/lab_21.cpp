#include <iostream>
using namespace std;
/////////////recurs
double x;
double y(double n) {
    x = n;
    if (n == 0) {
        return  1. / 2.;
    }
    else {
        return 1. / (n + y(n - 1));
    }
}
void main() {
    cout << "enter your num - ";
    double n;
    cin >> n;
    /////////////simple


    double res = 1./ 2.;
    for (int i = 1; i <= n; i++) {
        res = 1. / (i + res);
    }
    cout << "enter your num - ";
    cin >> x;
    cout << res << endl << y(x) << endl;
    
}
