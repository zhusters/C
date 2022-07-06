//#include <iostream>
//#include <conio.h>
//#include <time.h>
//using namespace std;
//void main() {
//	int count = 0;
//	int rows;
//	int cols;
//	cout << "enter rows and cols value" << endl;
//	cin >> rows >> cols;
//	int** arr = new int* [rows];
//	///////////////////////////////////////////создание
//	for (int i = 0; i < rows; i++) {
//		arr[i] = new int[cols];
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			arr[i][j] = rand() % 10 - 5;
//
//		}
//	}
//		//////////////////////////////////////////вывод
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < cols; j++)
//			{
//				cout << arr[i][j] << "\t";
//			}
//			cout << endl;
//		}
//		//////////////////////////////////////////удаление массива в массиве
//		for (int i = 0; i < rows; i++) {
//			delete[]arr[i];
//		}
//		/////////////////////////////////////////поиск элемента
//		for (int i = 0; i < rows; i++) {
//			for (int j = 0; j < cols; j++) {
//				if (j < 0 && j < cols) {
//					if (arr[i][j - 1]<arr[i][j] && arr[i][j + 1]>arr[i][j])
//						count++;
//
//				}
//			}
//		}
//	
//	delete[]arr;
//	cout << "\n Koli4estvo elementov ravno = " << count;
//	cout << endl;
//}



///////////////////////////////рабочий вариант
#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	srand((unsigned)time(NULL));
	const int m = 5, n = 5;
	int count = 0;
	int mass[m][n];
	////////////////////////////////создание
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mass[i][j] = rand() % 10 - 5;
			cout << mass[i][j] << "\t";
		}
		cout << endl;
	}
	////////////////////////////////////////////поиск элемента
		//вывести номер строки с отрицательным элементом
	int ind2 = 0;
	int ind = 0;
	int nul = mass[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			
			if (j > 0 && j < n)
			{
				if (mass[i][j - 1]<mass[i][j] && mass[i][j + 1]>mass[i][j])
					if (mass[i][j] < nul) {
						count++;
						ind = i;
						nul = mass[i][j];
						cout << i<<j;
					
					}
			}
			
		}
	}
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) {
			if (mass[i][j] < nul) {
				ind = i;
				nul = mass[i][j];
			}

		}

	}
	cout << "\n Koli4estvo elementov ravno = " << count;
	cout << endl;
	
}

