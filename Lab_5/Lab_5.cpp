#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int size = 0;
	cout << "enter arr size - ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 - 5;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " " << endl;
	}
	//нахождение минимального
	int i, ind = 0, sum = 0;
	int min = arr[0];
	for (int i = 0; i < size; i++){
		if (min < arr[i]) {
			min = arr[i];
			ind = i;
		}

	}
	for (int i = ind; i < size; i++) {
		sum += arr[i];
		cout<< endl << sum << endl;
		delete (arr);
	}

}