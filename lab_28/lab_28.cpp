#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<io.h>
#include<Windows.h>



using namespace std;

struct Stud {
	char name[20];
	int year, group, phys, math, inform, chym;
	double srednee;
	int count;
};

Stud* A;

void recQuick(int start, int end, Stud* pers);
void creation(void);
void add(void);
void viewall(void);
void view(Stud*);
void edit(void);
void task(void);
void linesearch(void);
void quicksort(Stud* p, int start, unsigned long end);
void callqs();
void binarysearch(void);
void directselectionsort(void);



int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int vibor;
	while (true) {
		cout << "main menu:\n1.create\n2.add students\n3.view\n4.edit\n5.the task\n6.exit\n7.linesearch\n8.quicksort\n9.binarysearch\n10.directselectionsort\ninput number - ";
		cin >> vibor;
		cout << endl;
		switch (vibor) {
		case 1:creation();
			break;
		case 2:add();
			break;
		case 3: viewall();
			break;
		case 4: edit();
			break;
		case 5: task();
			break;
		case 6:
			cout << "exit" << endl;
			return 0;
		case 7:
			linesearch();
			break;
		case 8:
			callqs();
			break;
		case 9:
			binarysearch();
			break;
		case 10:
			directselectionsort();
			break;
		}
	}

}

void creation() {
	FILE* fp;
	if ((fp = _fsopen("spisok.dat", "wb", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		exit(1);
	}
	fclose(fp);
	return;
}
void add() {
	Stud* p = new Stud;
	int n;
	cout << "enter value students - ";
	cin >> n;
	FILE* fp;
	if ((fp = _fsopen("spisok.dat", "ab", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		exit(1);
	}

	for (int i = 1; i <= n; i++) {
		cout << "\tnumber students - " << i << endl;
		cout << "fio";
		cin >> p->name;
		cout << "year";
		cin >> p->year;
		cout << "number group";
		cin >> p->group;
		cout << "gradue of math";
		cin >> p->math;
		cout << "gradue of physics";
		cin >> p->phys;
		cout << "gradue of inform";
		cin >> p->inform;
		cout << "gradue of chym";
		cin >> p->chym;
		p->srednee = (p->math + p->phys + p->inform + p->chym) / 4;
		cout << "value" << p->srednee << endl;
		fwrite(p, sizeof(Stud), 1, fp);
	}
	p->count++;
	fclose(fp);
	delete[]p;
}
void viewall() {
	FILE* fp, * ftxt;
	if ((fp = _fsopen("spisok.dat", "rb", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}
	if ((ftxt = _fsopen("result.dtxt", "wt", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}
	Stud* p = new Stud;
	fprintf(ftxt, "8642 proverka");
	while (true) {
		fread(p, sizeof(Stud), 1, fp);
		if (!feof(fp)) {
			view(p);
			fprintf(ftxt, "FIO stud:\t%s\nYear:\t%d\nNumber group:\t%d\nValue:\t lf\n", p->name, p->year, p->group, p->srednee);

		}
		else break;
	}
	fclose(fp);
	fclose(ftxt);
	delete[] p;

}
void view(Stud* p) {
	cout << "FIO stud:\t\t" << p->name << endl;
	cout << "Year:\t\t" << p->year << endl;
	cout << "Number group" << p->group << endl;
	cout << "value of physycs" << p->phys << endl;
	cout << "value of math" << p->math << endl;
	cout << "value of inform" << p->inform << endl;
	cout << "value of chym" << p->chym << endl;
	cout << "value" << p->srednee << endl;
}

void edit() {
	int n;
	char str[20];
	FILE* fp;
	if ((fp = _fsopen("spisok.dat", "r+", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}
	n = _filelength(_fileno(fp)) / sizeof(Stud);// кол-во структур в файле
	Stud* p = new Stud[n];
	cout << "enter fio for edit - ";
	cin >> str;
	fread(p, sizeof(Stud), n, fp);
	for (int i = 0; i < n; i++) {
		if (!strcmp(str, p[i].name)) {
			cout << "\tnumber students - " << i + 1 << endl;
			cout << "fio";
			cin >> p[i].name;
			cout << "year";
			cin >> p[i].year;
			cout << "number group";
			cin >> p[i].group;
			cout << "gradue of math";
			cin >> p[i].math;
			cout << "gradue of physics";
			cin >> p[i].phys;
			cout << "gradue of inform";
			cin >> p[i].inform;
			cout << "gradue of chym";
			cin >> p[i].chym;
			p[i].srednee = (p[i].math + p[i].phys + p[i].inform + p[i].chym) / 4;
			cout << "value";

			cout << p[i].srednee << endl;
			break;
		}
	}
	fwrite(p, sizeof(Stud), n, fp);
	fclose(fp);
	//viewall();
}
void task() {
	int n;
	FILE* fp, * ftxt;
	if ((fp = _fsopen("spisok.dat", "r", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}

	n = _filelength(_fileno(fp)) / sizeof(Stud);// кол-во структур в файле
	Stud* p = new Stud[n];

	fread(p, sizeof(Stud), n, fp);
	if ((ftxt = _fsopen("task.txt", "wt", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (p[i].inform >= 8) {
			view(p + i);
			fprintf(ftxt, "FIO stud:\t%s\nYear:\t%d\nNumber group:\t%d \nValue: \nsrednee: %d \nmath: %d \nphys:%d\ninform: %d\nchym: %d", p[i].name, p[i].year, p[i].group, p[i].srednee, p[i].math, p[i].phys, p[i].inform, p[i].chym);
			cout << p[i].name << endl;
		}
	}
	fclose(fp);
	fclose(ftxt);


}



void linesearch() {
	int n, key;
	cout << "enter year for search" << endl;
	cin >> key;
	FILE* fp, * ftxt;
	if ((fp = _fsopen("spisok.dat", "r", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}

	n = _filelength(_fileno(fp)) / sizeof(Stud);// кол-во структур в файле
	Stud* p = new Stud[n];

	fread(p, sizeof(Stud), n, fp);
	if ((ftxt = _fsopen("task.txt", "wt", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}
	bool a;
	for (int i = 0; i < n; i++) {
		if (p[i].year == key)
		{
			cout << p[i].name << endl;
		}
		else {
			a = false;
		}
	}
	if (a)
	{
		cout << "no pon" << endl;

	}


	fclose(fp);
	fclose(ftxt);




}



void callqs() {
	int n;
	FILE* fp;
	if ((fp = _fsopen("spisok.dat", "r", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}

	n = _filelength(_fileno(fp)) / sizeof(Stud);// кол-во структур в файле
	Stud* p = new Stud[n];

	fread(p, sizeof(Stud), n, fp);

	quicksort(p, 0 , n-1);
	for (int i = 0; i < n; i++)
		cout << p[i].name<<endl;
	fread(p, sizeof(Stud), n, fp);
	fclose(fp);
	//fclose(ftxt);
}




void quicksort(Stud* pers, int start, unsigned long end) {
	int right, left, x;
	Stud p;
	left = start;
	right = (int)end;

	x = pers[(left + right) / 2].year;

	do {
		while (pers[left].year < x && left < end) left++;
		while (pers[right].year > x && right > start) right--;
		if (left <= right) {
			p = pers[left];
			pers[left] = pers[right];
			pers[right] = p;
			left++;
			right--;
		}
	} while (left <= right);
	if (start < right) quicksort(pers, start, right);
	if (left < end) quicksort(pers, left, end);
	//cout << "enter year for search" << endl;
	//cin >> key;
	//FILE* fp, * ftxt;
	//if ((fp = _fsopen("spisok.dat", "r", _SH_DENYNO)) == NULL) {
	//	cout << "error" << endl;
	//	return;
	//}

	//n = _filelength(_fileno(fp)) / sizeof(Stud);// кол-во структур в файле
	//Stud* pone = new Stud[n];

	//fread(pone, sizeof(Stud), n, fp);


	//fclose(fp);
	//if ((ftxt = _fsopen("task.txt", "wt", _SH_DENYNO)) == NULL) {
	//	cout << "error" << endl;
	//	return;
	//}


	//recQuick(start, end, pers);
	//fread(pone, sizeof(Stud), n, fp);
	
	//int l = 0, r = n - 1;
	//int i = l, j = r;
	//	int mid = (l + r) / 2;
	//	do
	//	{
	//		while (p[i].year < mid) i++;
	//		while (p[j].year > mid) j--;
	//		if (i <= j)
	//		{
	//			Stud t = p[i];
	//			p[i] = p[j];
	//			p[j] = t;
	//			i++;
	//			j--;
	//		}
	//	} while (i <= j);
	//	if (l < j) quicksort();
	//	if (i < r) quicksort();

	//	if (l < j) quicksort(l,j,p);
	//	if (i < r) quicksort(i,r,p);
	//	cout << p[i].name;

	//void quick_sort(int l, int r, list * zap)
	//{
	//	int i = l, j = r;
	//	int x = zap[(l + r) / 2].days;
	//	do
	//	{
	//		while (zap[i].days < x) i++;
	//		while (zap[j].days > x) j--;
	//		if (i <= j)
	//		{
	//			list t = zap[i];
	//			zap[i] = zap[j];
	//			zap[j] = t;
	//			i++;
	//			j--;
	//		}
	//	} while (i <= j);
	//	if (l < j) quick_sort(l, j, zap);
	//	if (i < r) quick_sort(i, r, zap);



	//fclose(ftxt);



}
void recQuick(int start, int end, Stud *pers) {

}














void binarysearch() {
	int n, key;
	cout << "enter year for search" << endl;
	cin >> key;
	FILE* fp, * ftxt;
	if ((fp = _fsopen("spisok.dat", "r", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}

	n = _filelength(_fileno(fp)) / sizeof(Stud);// кол-во структур в файле
	Stud* p = new Stud[n];

	fread(p, sizeof(Stud), n, fp);
	if ((ftxt = _fsopen("task.txt", "wt", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}


	int l = 0, r = n - 1, mid;
	bool a = false;
	while ((l <= r) && (a != true))
		{
			mid = (l + r) / 2;
			if (p[mid].year == key) a = true;
			if (p[mid].year < key) r = mid - 1;
			else if(p[mid].year > key) l = mid + 1;
		}
	if (a)
	{
		cout << p[mid].name << endl;
	}
	/*if (p[mid].year == key) {
	cout << p[mid].name << endl;
	a = true;
}*/

	




	fclose(fp);
	fclose(ftxt);

}







void directselectionsort()
{
	int n;
	cout << "This sort list" << endl;
	//cin >> key;
	FILE* fp, * ftxt;
	if ((fp = _fsopen("spisok.dat", "r", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}

	n = _filelength(_fileno(fp)) / sizeof(Stud);// кол-во структур в файле
	Stud* p = new Stud[n];

	fread(p, sizeof(Stud), n, fp);
	if ((ftxt = _fsopen("task.txt", "wt", _SH_DENYNO)) == NULL) {
		cout << "error" << endl;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (p[i].year < p[j].year) {
				swap(p[i].year, p[j].year);
			}
		cout << p[i].year << endl;

	}

	fclose(fp);
	fclose(ftxt);

}