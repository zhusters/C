# include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	char arr[256];
	cout << "enter your number - ";
	fgets(arr, 100, stdin);
	int arrlenght = strlen(arr);
	cout << strlen(arr) << endl;
	int fivesymbol = 1, wordcount = 0;
	arr[arrlenght-1] = ' ';
	arr[arrlenght] = '\0';
	arrlenght++;   
	for (int i = 0; i < arrlenght; i++) {
		if (arr[i + 1] != ' ') {
			fivesymbol++;	
		}
		//проверка на кол-во символов
		else {
			if (fivesymbol == 5) {
				wordcount++;
			}
			fivesymbol = 0;
		}
	}
	printf("word with five sym - %d", wordcount);
}


