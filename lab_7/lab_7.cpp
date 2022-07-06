#include <iostream>
#include <sstream>
using namespace std;

int main() {

	int countFiveSymbol = 0;
	setlocale(LC_ALL, "ru");
	char text[1004];
	cout<< "Введите cтроку нулей и единиц - ";
	cin.getline(text, 1004);
	string fiveSymbol;
	stringstream ss;
	ss << text;
	while (ss>>fiveSymbol) {
		if (fiveSymbol.length() == 5) {
			countFiveSymbol++;
			cout << fiveSymbol<< " "<<endl;
		}		
	}
	if (countFiveSymbol == 0) {
		cout << "oops... five symbol not found" << endl;

	}
	cout << "кол-во элементов - " << countFiveSymbol << endl;
}