#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<io.h>
#include<Windows.h>

	

using namespace std;

struct Stud {
	char name[20];
	int year, group, phys, math, inform, chym;
	double srednee;
};





void creation(void);
void add(void);
void viewall(void);
void view(Stud*);
void edit(void);
void task(void);




int main(){
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int vibor;
	while (true) {
		cout << "main menu:\n1.create\n2.add students\n3.view\n4.edit\n5.the task\n6.exit\ninput number - ";
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
			cout << "exit"<<endl;
			return 0;
		
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
		exit	(1);
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
		cout << "value" << p->srednee<<endl;
		fwrite(p, sizeof(Stud), 1, fp);
	}
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
	cout << "FIO stud:\t\t"<< p->name<<endl;
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
	cout <<"enter fio for edit - ";
	cin >> str;
	fread(p, sizeof(Stud), n, fp);
	for (int i = 0; i < n; i++){
		if (!strcmp(str, p[i].name)) {
			cout << "\tnumber students - " << i + 1<< endl;
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
				
				cout<< p[i].srednee << endl;
			break;
		}
	}
	fwrite(p, sizeof(Stud), n, fp);
	fclose(fp);
	//viewall();
}
void task() {
	int n;
	FILE*fp, *ftxt;
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