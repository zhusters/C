//// стек 
//#include<iostream>
//
//using namespace std;
//
//struct stek {
//
//	int data;
//	stek* next;
//
//
//};
//
//void Del(stek*& b) {
//	int max, min, k = 0;
//	stek* c, * a;
//	c = a = b;
//	max = min = b->data;
//	stek* t = b, * deleting;
//	while (t->next != NULL) {
//		if ((t->next->data) < min) {
//			a = t->next;
//			min = a->data;
//			t = t->next;
//
//		}
//		else if ((t->next->data) > max) {
//			c = t->next;
//			max = (c->data);
//			t = t->next;
//
//		}
//		else t = t->next;
//	}
//
//	k = a->data;
//	a->data = c->data;
//	c->data = k;
//
//}
//
//
//void addfirst(stek*& head, int n) {
//
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//
//}
//
//
//void addlast(stek*&head, int n) {
//
//	if (head==NULL)
//	{
//		stek* temp = new stek;
//		temp->data = n;
//		temp->next = head;
//	}
//	else
//	{
//		stek* temp = new stek;
//		temp->next = head;
//
//		while (temp->next != NULL)
//		{
//			temp = temp->next;
//
//		}
//
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//
//}
//
//
//
//
//void show(stek*& head) {
//
//	stek* temp = head;
//	if (head==NULL)
//	{
//		cout << "void list";
//	}
//	while (temp != NULL)
//	{
//		cout << "->" << temp->data;
//		temp = temp->next;
//	}
//	cout << "NULL";
//}
//
//
//int main() {
//	stek* head = nullptr;
//
//	addfirst(head,777);
//	addfirst(head, 777);
//	addfirst(head, 777);
//
//
//	addlast(head, 999);
//	addlast(head, 999);
//	addlast(head, 999);
//
//
//
//
//	show(head);
//
//
//}



// двусвязный

//#include <iostream>
//
//using namespace std;
//
//
//struct dbllist {
//    int data;
//    dbllist* next;
//    dbllist* prev;
//
//};
//dbllist* head = NULL; dbllist* tail = NULL;
//
//
//void addfirst(int value) {
//    dbllist* temp = new dbllist;
//    temp->data = value;
//    if (head == NULL) {
//        temp->next = NULL;
//        temp->prev = NULL;
//        head = temp;
//        tail = temp;
//
//    }
//    else {
//        dbllist* p = head;
//        head->prev = temp;
//        temp->next = head;
//        head = temp;
//
//    }
//    cout << "добавление комплит" << endl;
//}
//
//void printlist()
//{
//    if (head == NULL) { cout << "\nСписок пуст\n\n"; }
//    else
//    {
//        dbllist* a = head;
//        cout << "\nЭлементы списка: ";
//        while (a != NULL)
//        {
//            cout << a->data << " ";
//            a = a->next;
//        } cout << "\n\n";
//    }
//}
//
//
//void deleteind(int pos) {
//
//    if (head==head->next)
//    {
//        delete head;
//        head = NULL;
//    }
//    else {
//        dbllist* a = head;
//        for (int i = pos; i > 1; i--)
//            a = a->next;
//        if (a == head)
//            head = a->next;
//        a->prev->next = a->next;
//        a->next->prev = a->prev;
//        delete a;
//
//
//    }
//
//
//}
//
//
//
//void findavg() {
//
//    dbllist* temp = head;
//    int res = 0, count = 0;
//    while (temp!=NULL)
//    {
//        res += temp->data;
//        temp = temp->next;
//        count++;
//
//
//    }
//    cout << res / count;
//}
//
//
//
//
//
//
//int main() {
//    setlocale(LC_ALL,"ru");
//	addfirst(1);
//	addfirst(2);
//	addfirst(3);
//	addfirst(4);
//	addfirst(5);
//
//	printlist();
//
//
//
//    deleteind(3);
//
//    cout << "avg-";
//    findavg();
//
//    printlist();
//
//}





// деревья
//
//#include <iostream>
//
//using namespace std;
//
//
//struct tree{
//
//	int data;
//	tree* left;
//	tree* right;
//
//};
//
//void add(int data, tree*& mytree) {
//	if (mytree == NULL)
//	{
//		mytree = new tree;
//		mytree->data = data;
//		mytree->left = NULL;
//		mytree->right = NULL;
//
//	}
//	else {
//		if (mytree->data < data)
//		{
//			add(data, mytree->left);
//		}
//		else
//		{
//			add(data, mytree->right);
//		}
//	}
//
//
//}
//
//void print(tree*& mytree) {
//	if (!mytree)
//	{
//		return;
//	}
//	else {
//		print(mytree->left);
//		cout << mytree->data << endl;
//		print(mytree->right);
//	}
//}
//
//void del(tree*&mytree) {
//	if (mytree!=NULL)
//	{
//		del(mytree->left);
//		del(mytree->right);
//		delete mytree;
//		mytree = NULL;
//	}
//		
//
//}
//
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	tree* root = NULL;
//
//	add(1, root);
//	add(2, root);
//	add(3, root);
//	add(4, root);
//
//
//	print(root);
//
//}









// сортировка выбором



//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	setlocale(LC_ALL, "ru");
//
//	int n;
//	cout << "введите кол во элементов массива - ";
//
//	cin >> n;
//	
//
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand()%10;
//	}
//
//	for (int i = 0; i < n-1; i++)
//	{
//		int minj = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[j]<arr[minj])	minj = j;
//			
//			swap(arr[i], arr[minj]);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//
//
//
//}





// quicksort 


//#include <iostream>
//#include <ctime>
//using namespace std;
//const int n = 7;
//int first, last;
////функция сортировки
//void quicksort(int* mas, int first, int last)
//{
//	int mid, count;
//	int f = first, l = last;
//	mid = mas[(f + l) / 2]; //вычисление опорного элемента
//	do
//	{
//		while (mas[f] < mid) f++;
//		while (mas[l] > mid) l--;
//		if (f <= l) //перестановка элементов
//		{
//			count = mas[f];
//			mas[f] = mas[l];
//			mas[l] = count;
//			f++;
//			l--;
//		}
//	} while (f < l);
//	if (first < l) quicksort(mas, first, l);
//	if (f < last) quicksort(mas, f, last);
//}
////главная функция
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int* A = new int[n];
//	srand(time(NULL));
//	cout << "Исходный массив: ";
//	for (int i = 0; i < n; i++)
//	{
//		A[i] = rand() % 10;
//		cout << A[i] << " ";
//	}
//	first = 0; last = n - 1;
//	quicksort(A, first, last);
//	cout << endl << "Результирующий массив: ";
//	for (int i = 0; i < n; i++) cout << A[i] << " ";
//	delete[]A;
//	system("pause>>void");
//}
//
//
//
//
//
//// рекурсия
//
//int fact(int k) {
//	if (k>2)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * fact(k - 1);
//	}
//
//}
//
//
//
//
//
//






// doublelist
//
//
//#include<iostream>
//
//using namespace std;
//
//
//struct list
//{
//	int data;
//
//	list* next;
//	list* prev;
//
//};
//
//list* head = NULL; list* tail = NULL;
//
//
//
//
//void add(int n) {
//    list* temp = new list;
//    temp->data = n;
//    if (head == NULL) {
//        temp->next = NULL;
//        temp->prev = NULL;
//        head = temp;
//        tail = temp;
//    }
//    else {
//        list* p = head;
//        head->prev = temp;
//        temp->next = head;
//        head = temp;
//    }
//    cout << "добавление комплит" << endl;
//}
//
//
//
//void printlist()
//{
//    if (head == NULL) { cout << "\nСписок пуст\n\n"; }
//    else
//    {
//        list* a = head;
//        cout << "\nЭлементы списка: ";
//        while (a != NULL)
//        {
//            cout << a->data << " ";
//            a = a->next;
//        } cout << "\n\n";
//    }
//}
//
//
////while (!exit)
////{
////    exit = true;
////    temp = head;
////    while (temp->next != NULL)
////    {
////        if (temp->i.home > temp->next->i.home)
////        {
////            Swap(temp); // меняет temp и temp->next
////            exit = false;
////        }
////        temp = temp->next;
////    }
////}
//void sort() {
//    list* temp = head;
//    while (temp)
//    {
//        if (temp->data>temp->next->data)
//        {
//            swap(temp,temp->next);
//        }
//        temp = temp->next;
//    }
//
//
//   }
//
//
//
//int main() {
//
//    setlocale(LC_ALL, "ru");
//    add(4);
//    add(5);
//    add(66);
//    add(777);
//    add(5);
//
//
//    printlist();
//  //  sort();
//    printlist();
//
//}











// стек 



//#include<iostream>
//
//using namespace std;
//
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//
//
//}
//
//
//void addlast(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->next = head;
//	while (temp->next!=NULL)
//	{
//		temp = temp->next;
//	}
//	temp->data = n;
//	temp->next = NULL;
//
//
//
//}
//
//
//
//void replace(stek*head) {
//
//	stek *temp;
//	stek* a, * b;
//	int max, min;
//
//
//	while (temp->next!=NULL)
//	{
//		if (temp->next->data<min)
//		{
//			a = temp->next;
//			min = temp->data;
//			temp = temp->next;
//		}
//		if (temp->next->data < max)
//		{
//			b = temp->next;
//			max = temp->data;
//			temp = temp->next;
//
//		}
//	}
//
//	int k = a->data;
//	a->data = b->data;
//	b->data = k;
//
//
//}



// сортировка вставками 


//#include<iostream>
//
//
//using namespace std;
//
//
//int main() {
//
//	int n;
//	cout << "enter arr size - ";
//	cin >> n;
//
//	int* arr = new int;
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i];
//	}
//	cout << "---";
//	for (int i = 0; i < n-1; i++)
//	{
//		int minj = 0;
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[j] > arr[minj]) minj = j;
//			swap(arr[i], arr[minj]);
//		}
//	}
//
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i];
//	}
//
//
//}



// quicksort

//
//#include <iostream>
//
//
//using namespace std;
//
//void qs(int* arr, int left,int right) {
//	int l = left, r = right;
//	int mid = arr [(l + r) / 2];
//
//	do
//	{
//		while (l < r) { l++; }
//		while (r < l) { r--; }
//		if (l<=r)
//		{
//			int temp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = temp;
//			l++;
//			r--;
//		}
//
//	} while (l<r);
//	if (first < l) qs(arr, first, l);
//	if (f < last) qs(arr, f, last);
//
//
//
//}
//
//
//
//
//int main() {
//
//
//}




// дерево 
//#include <iostream>
//
//using namespace std;
//
//struct tree
//{
//	int data;
//	tree* l, * r;
//};
//
//void add(tree*&mytree, int n) {
//	if (mytree == NULL)
//	{
//		mytree = new tree;
//		mytree->data = n;
//		mytree->l = NULL;
//		mytree->r = NULL;
//	}
//	else
//	{
//		if (n >mytree->data)
//		{
//			add(mytree->r, n);
//		}
//		else
//		{
//			add(mytree->l, n);
//
//		}
//	}
//
//
//}
//
//
//int findmin(tree*&mytree) {
//	if (mytree->l==NULL)
//	{
//		return mytree->data;
//
//	}
//	return findmin(mytree->l);
//}
















//однонаправленыый

//
//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//
//};
//
//
//void addfirst(list*&head, int n) {
//
//	list* temp = new list;
//	temp->data = n;
//	temp->next = NULL;
//	head = temp;
//
//
//}
//
//
//
//void addlast(list*&head, int n) {
//	list* temp = new list;
//	if (head == NULL)
//	{
//		temp->data = n;
//		temp->next = NULL;
//		head = temp;
//	}
//	else
//	{
//		while (temp->next!=NULL)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//}






// двунаправленный
//
//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL;
//list* tail = NULL;
//
//
//
//void add(int n) {
//
//	if (head == NULL)
//	{
//		list* temp = new list;
//		temp->data = n;
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//
//	}
//	else
//	{
//		list* temp = head;
//		head->prev = temp;
//		temp->next = head;
//		head = temp;
//		
//	}
//
//}
//
//
//void print() {
//
//	list* temp = head;
//	while (temp->next!=NULL)
//	{
//		temp = temp->next;
//		cout << temp->data;
//	}
//}
//
//
//







// qs
//
//
//#include<iostream>
//
//using namespace std;
//
//void qs(int * arr,int left,int right) {
//	int l = left, r = right;
//	int mid =arr [(l + r) / 2];
//
//	do
//	{
//		while (arr[l]<r)
//		{
//			l++;
//
//		}while (arr[r]>l)
//		{
//			r--;
//		}
//		if (l>=r)
//		{
//			int temp = arr[l];
//			arr[r] = arr[l];
//			arr[r] = temp;
//			l++;
//			r--;
//		}
//
//
//	} while (l>r);
//	if (left < r) qs(arr, left, r);
//	if (l < right) qs(arr, l, right);
//
//}








	
//// qs
//
//
//#include<iostream>
//
//using namespace std;
//
//void qs(int* arr, int left, int right) {
//	int l = left, r = right;
//	int mid = arr[(l+r)/2];
//
//
//	do
//	{
//		while (arr[l]>r)
//		{
//			l++;
//		}
//		while (arr[r]<l)
//		{
//			r--;
//		}
//		if (l>=r)
//		{
//			int temp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = temp;
//			l++;
//			r--;
//		}
//
//	} while (l>r);
//
//
//	if (left>r)
//	{
//		qs(arr,left,r);
//	}
//
//	if (l <right )
//	{
//		qs(arr, l, right);
//	}
//
//}








// рекурсия 
//
//Пример 1
//double fun_rec(double, double);
//void main(void)
//{
//	double a, b;
//	cout << “ Input a, b : ”;
//	cin >> a >> b;
//	cout << “ Result = ” << fun_rec(a, b) << endl;
//}
//double fun_rec(double a, double b) {
//	if (a < b) return fun_rec(b, a);
//	else  return a / b;
//}


//Пример 2.
//	double fact_rec(int k) {
//	if (k < 2) return 1;
//	else
//		return   k * fact_rec(k – 1);
//}


//Пример 3.
//		s = 0; // Начальное значение суммы
//	a = 1;
//	/* Начальное значение для вычисление очередного члена рекуррентной последовательности
//	члена рекуррентной последовательности */
//	for (int k = 1; k <= 100; k++)
//	{
//		a *= -x / k;
//		// Вычисление члена рекуррентной последовательности
//		s += a; // Суммирование всех слагаемых
//	}






//двусвязныйсписок 
//
//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//
//};
//list* head = NULL; list* tail = NULL;
//
//
//void add(int n) {
//	list* temp = new list;
//	if (head == NULL)
//	{
//		temp->data = n;
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//
//	}
//	else
//	{
//		list* temp = head;
//		head->prev = temp;
//		temp->next = head;
//		head = temp;
//	}
//
//}




//стек 

//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* head;
//	list* next;
//
//};
//
//void add(list*&mylist,int n) {
//	list* temp = new list;
//	temp->data = n;
//	temp->next = mylist->next;
//	mylist->head = temp;
//}
//





// двусвязный 

//
//#include<iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//
//};
//list* head = NULL; list* tail = NULL;
//
//void add(int n) {
//	if (head == NULL)
//	{
//		list* temp = new list;
//		temp->data = n;
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//		
//	}
//	else
//	{
//		list* temp = head;
//		head->prev = temp;
//		temp->prev = head; 
//		head = temp; 
//	}
//}
//
//
//void del() {
//	if (head == head->next)
//	{
//		delete head;
//		head = NULL;
//	}
//
//}


//void Delete(int x)
//{
//	MyList* temp = list;
//	while ((temp != NULL) && (temp->data != x))
//		temp = temp->next;
//	if (temp == NULL)
//		return;
//
//	MyList* prev = temp->prev;
//	MyList* next = temp->next;
//	if (prev != NULL)
//		prev->next = next;
//	if (next != NULL)
//		next->prev = prev;
//
//	delete temp;
//}




// qs



//#include<iostream>
//
//using namespace std;
//
//void qs(int * arr, int left, int right) {
//	int l = left, r = right;
//	int mid = arr[(l+r)/2];
//
//	do
//	{
//		while (arr[l]>r)
//		{
//			l++;
//		}
//		while (arr[r]<l)
//		{
//			r--;
//		}
//		if (l>=r)
//		{
//			int temp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = temp;
//			l++;
//			r--;
//
//
//		}
//
//	} while (l>r);
//
//		if (left>r)
//		{
//			qs(arr,left,r);
//		}
//	
//		if (l <right )
//		{
//			qs(arr, l, right);
//		}
//
//
//}




// сортировка вставками
// 
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//
//	for (int i = 0; i < n-1; i++)
//	{
//		int minj = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[i] < arr[minj]) minj = j;
//			swap(arr[i], arr[minj]);
//		}
//	}
//
//
//
//}


//стек 

//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* head;
//	stek* next;
//
//};
//
//
//void add(stek*&list, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->head = list->next;
//	list->head = temp;
//		
//}
//
//
//void addlast(stek*& head, int n) {
//	if (head == NULL)
//	{
//		stek* temp = new stek;
//		temp->data = n;
//		temp->head = head->next;
//		head->head = temp;
//		
//
//	}
//	else
//	{
//		stek* temp = new stek;
//		temp->next = head;
//		while (temp->next!=NULL)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//
//	}
//
//
//}


//стек 
//#include <iostream>
//#include <time.h>
//using namespace std;
//
//struct stek {
//    int data;
//    stek* next;
//
//};
//int lenght = 0;
//
//void addlast(stek*& head, int n) {
//    if (head == NULL)
//    {
//        stek* temp = new stek;
//        temp->next = head;
//        temp->data = n;
//    }
//    else {
//        stek* temp = new stek;
//        temp->next = head;
//
//        while (temp->next != NULL)
//        {
//            temp = temp->next;
//        }
//        temp->data = n;
//        temp->next = NULL;
//    }
//    lenght++;
//}
//
//void addfirst(stek*& head, int n) {
//
//    stek* temp = new stek;
//    temp->data = n;
//    temp->next = head;
//    head = temp;
//
//    lenght++;
//}
//
//void show(stek* head) {
//    stek* temp = head;
//    if (head == NULL) {
//        cout << "void list";
//    }
//    while (temp != NULL) {
//        cout << temp->data << " -> ";
//        temp = temp->next;
//    }
//
//    cout << "NULL\n" << endl;
//}
//int findAverage(stek* head) {
//    int amount = 0, i = 0;
//    for (stek* temp = head; temp != NULL; temp = temp->next, i++) {
//        amount += temp->data;
//    }
//    return amount / i;
//}
//void cleanOut(stek*& head) {
//    for (stek* temp = head->next; head->next; temp = head->next) {
//        delete head;
//        head = temp;
//    }
//}
//void sort(stek*& head) {
//    stek* origin = head;
//    int max = head->data;
//    int min = head->data;
//
//    //нахождение мах и мин
//    while (head != nullptr) {
//        if (head->data > max) {
//            max = head->data;
//        }
//        if (head->data < min) {
//            min = head->data;
//        }
//        head = head->next;
//    }
//    cout << "max - " << max << endl;
//    cout << "min - " << min << endl;
//    head = origin;
//}
//
//void Del(stek*& b) {
//    int max, min, k = 0;
//    stek* c, * a;
//    c = a = b;
//    max = min = b->data;
//    stek* t = b, * deleting;
//    while (t->next != NULL) {
//        if ((t->next->data) < min) {
//            a = t->next;
//            min = a->data;
//            t = t->next;
//
//        }
//        else if ((t->next->data) > max) {
//            c = t->next;
//            max = (c->data);
//            t = t->next;
//
//        }
//        else t = t->next;
//    }
//
//    k = a->data;
//    a->data = c->data;
//    c->data = k;
//
//}
//
//
//
//void replace(stek*&head) {
//    int max = 0, min = 0;
//    stek* minel = head; 
//    stek * maxel = head;
//    stek* temp = head;
//
//    while (temp->next!=NULL)
//    {
//        if (temp->next->data>max)
//        {
//            maxel = temp->next;
//            max = temp->data;
//            temp = temp->next;
//        }
//        else if (temp->next->data<min)
//        {
//            minel = temp->next;
//            min = temp->data;
//            temp = temp->next;
//        }
//    }
//
//    int k = maxel->data;
//    maxel->data = minel->data;
//    minel->data = k;
//
//
//
//}
//
//
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    stek* head = nullptr;
//    srand(time(NULL));
//    for (int i = 0; i < 10; i++) {
//        addfirst(head, rand() % 100);
//    }
//    cout << "one";
//    show(head);
//    addlast(head, 777777);
//    cout << "two";
//    show(head);
//
//
//
//    cleanOut(head);
//}
//
//



// двусвязный
// 
//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//
//};
//
//list* head = NULL; list* tail = NULL;
//
//
//void add(int n) {
//	if (head == NULL)
//	{
//		list* temp = new list;
//		temp->data = n;
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//		tail = temp;
//
//	}
//	else
//	{
//		list* temp = head;
//		head->prev = temp;
//		temp->next = head;
//		head = temp;
//
//	}
//
//}
//
//
//
//void del(int pos) {
//	if (head == NULL)
//	{
//		cout << "void list";
//	}
//	if (head = head->next)
//	{
//		delete head;
//		head = NULL;
//	}
//	else {
//		list* a = head;
//		for (int i = pos; i > 1; i--)
//			a = a->next;
//		if (a == head)
//			head = a->next;
//		a->prev->next = a->next;
//		a->next->prev = a->prev;
//		delete a;
//	}
//
//
//
//
//
//}





// qs
//
//
//void qs(int *arr, int left, int right) {
//	int l = left; int r = right;
//	int mid = arr[(l + r) / 2];
//
//	do
//	{
//		while (arr[l]>mid)
//		{
//			l++;
//		}
//		while (arr[r]<mid)
//		{
//			r--;
//		}
//		if (l>=r)
//		{
//			int temp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = temp;
//			l++;
//			r--;
//
//		}
//	} while (l>r);
//
//	if (left > r){	qs(arr,left,r);}
//	if (l <right ){ qs(arr, l, right);	}
//} 

// сортиовка вставками
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int* arr = new int;
//	int n;
//	
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand()%10 ;
//	}
//
//
//	for (int i = 0; i <  n-1; i++)
//	{
//		int minj = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[i] < arr[minj]) minj = j;
//			
//			swap(arr[i], arr[minj]);
//			
//		}
//	}
//
//}



//стек 
//односвязный
//двусвязный 
//деревья
//квиксорт
//сортировка вставками


//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* head;
//	stek* next;
//
//};
//
//
//void add(stek*&list, int n) {
//
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = list->head;
//	list->head = temp;
//}
//
//void addlast(stek*&head, int n) {
//
//	stek* temp = new stek;
//	temp->next = head;
//	while (temp)
//	{
//		temp = temp->next;
//	}
//
//	temp->data = n;
//	temp->next = NULL;
//}
//
//
//void del(stek*&head) { 
//	stek* temp = head;
//	while (temp)
//	{
//		delete temp;
//		temp = NULL; 
//	}
//
//
//}
//
//
//
//void show(stek*&head) {
//	stek* temp = head;
//	while (temp)
//	{
//		temp = temp->next;
//		cout << temp->data;
//	}
//
//
//}



//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//
//};
//list* head = NULL; list* tail = NULL;
//
//
//
//void add(int n) {
//
//	if (head == NULL)
//	{
//		list* temp = new list;
//
//		temp->data = n;
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//		tail = temp;
//	}
//	else
//	{
//		list* temp = head;
//		head->prev = temp;
//		temp->next = head;
//		head = temp;
//		
//	}
//
//
//
//
//}
//void del() {
//	if (head = head->next)
//	{
//		delete head;
//		head = NULL;
//	}
//
//
//}
//
//void show(list*&head) {
//	list* temp = head;
//	while (temp)
//	{
//		temp = temp->next;
//		cout << temp->data;
//	}
//
//}





//
//#include<iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//
//
//void add(stek*&list, int n) {
//	stek* temp = new stek;
//
//	if (temp == NULL)
//	{
//
//		temp->data = n;
//		temp->next = list;
//		list->next = temp;
//	}
//	else
//	{
//		temp->next = list;
//		while (temp->next!= NULL)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//}
//
//
//
//void del(stek*&head) {
//	 
//	if (head ==NULL)
//	{
//		cout << "void";
//	}
//	else
//	{
//		stek* temp = head;
//		temp = temp->next;
//		delete temp;
//	}
//
//}
//
//
//void task(stek*& head) {
//
//
//	stek* temp = head;
//	stek* minel = head;
//	stek* maxel = head;
//
//	int max = 0, min = 0;
//
//	while (temp)
//	{
//		if (temp->next->data > max)
//		{
//			maxel = temp->next;
//			max = temp->data;
//			temp = temp->next;
//
//		}
//		else if (temp->next->data < min)
//		{
//			minel = temp->next;
//			min = temp->data;
//			temp = temp->next;
//		}
//	}
//
//	int t = maxel->data;
//	maxel->next = minel->next;
//	minel->data = t;
//
//
//}









//-------------------------------------------------------------------

// 1 bilet
//#include<iostream>
//
//
//using namespace std;
//
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//
//void add(stek*& list, int n) {
//	stek* temp = new stek;
//
//	if (temp != NULL)
//	{
//		temp->data = n;
//		temp->next = list;
//		list->next = temp;
//	}
//	else
//	{
//		temp->next = list;
//		while (temp)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//
//
//
//}
//
//
//
//void del(stek*&head) {
//	stek* temp = head;
//	temp = temp->next;
//	delete temp;
//
//}
//
//
//
//void task(stek*&head) {
//
//	int min = 0, max = 0;
//
//	stek* temp = head;
//	stek* minel = head;
//	stek* maxel = head;
//
//
//	while (temp)
//	{
//		if (temp->next->data>max)
//		{
//			maxel = temp->next;
//			max = temp->data;
//			temp = temp->next;
//		}
//		else if (temp->next->data < min)
//		{
//			minel = temp->next;
//			min = temp->data;
//			temp = temp->next;
//		}
//	}
//
//
//	int t = maxel->data;
//	maxel->next = minel->next;
//	minel->data = t;
//
//}





//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	int n;
//	cout << "size arr - ";
//	cin >> n;
//
//	int* arr = new int;
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand()%10;
//	}
//
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i-1; j < n; j++)
//		{
//			int minj = i;
//			if (arr[i] < arr[minj]) minj = j;
//			
//			swap(arr[minj], arr[i]);
//
//			
//		}
//	}
//
//
//
//}







//----------------------------------------------------

// 2 bilet
//
//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//
//};
//
//
//
//void add(stek*&list, int n) {
//	stek* temp = new stek;
//
//	if (temp == NULL)
//	{
//
//
//		temp->data = n;
//		temp->next = list;
//		list->next = temp;
//	}
//	else
//	{
//		temp->next = list;
//		while (temp)
//		{
//			temp = temp->next;
//
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//}
//
//
//
//void task(stek*&head) {
//
//	stek* temp = head;
//	stek* stektwo = NULL;
//
//	while (temp)
//	{
//		if (temp->next->data<0)
//		{
//			stektwo = temp->next;
//			temp->next = temp->next->next;
//			stektwo->next = temp;
//			temp = stektwo;
//
//		}
//	}
//	
//
//	temp = head;
//	temp = temp->next;
//	delete temp;
//
//
//
//}





//#include <iostream>
//
//using namespace std;
//
//struct tree
//{
//	int data;
//	tree* left;
//	tree* right;
//};
//
//
//
//void add(tree*&mytree,  int n) {
//
//	if (!mytree)
//	{
//		mytree = new tree;
//		mytree->data = n;
//		mytree->left = NULL;
//		mytree->right = NULL;
//		if (mytree->data>n)
//		{
//			add(mytree->right, n);
//		}
//		else
//		{
//			add(mytree->left, n);
//		}
//
//	}
//
//
//
//
//}
//
//
//
//void straight(tree*&mytree) {
//
//	straight(mytree->left);
//	cout << mytree->data;
//	straight(mytree->right);
//}
//
//
//



//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	int n;
//	cout << "size arr - ";
//	cin >> n;
//
//	int* arr = new int;
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//
//
//
//	for (int i = 1; i < n; i++)
//	{
//		t = arr[i];
//		it = i - 1;
//		while (it >= 0 && arr[it] > t)
//		{
//			arr[it + 1] = arr[it];
//			arrayPtr[it] = t;
//			it--;
//		}
//	}
//}








//----------------------------------------------------------
// 3 bilet




//#include<iostream>
//
//using namespace std;
//
//
//void rec(int a, int b) {
//	if (a<b)
//	{
//		return rec(b,a);
//	}
//	else
//	{
//		return a / b;
//	}
//}
//
//
//
//
//
//
//
//double fact(int k) {
//
//	if (k<2)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * fact(k - 1);
//	}
//
//
//}
//
//
//
//
//
//
//for (int k = 1; k <= 100; k++)
//{
//	a *= -x / k;
//	s += a; 
//}
//
//
//
//
//








//#include<iostream>
//
//using namespace std;
//
//
//void qs(int *arr, int left, int right) {
//
//
//	int l = left, r = right;
//	int mid = arr[(l+r)/2];
//
//
//	while (l<=r)
//	{
//		while (arr[l] < r)l++;
//		while (arr[r] > l)r--;
//
//		if (l<=r)
//		{
//			int temp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = temp;
//			l++;
//			r--;
//		}
//		
//	}
//	if (left > r)qs(arr, left, r);
//	if (l < right)qs(arr, l ,right);
//
//}









//--------------------------------------
// 4 bilet



//
//#include <iostream>
//#include <time.h>
//using namespace std;
//
//struct stek {
//    int data;
//    stek* next;
//
//};
//int lenght = 0;
//
//void addlast(stek*& head, int n) {
//    if (head == NULL)
//    {
//        stek* temp = new stek;
// //     temp->data = n;
//        temp->next = head;
//        head = temp;
//    }
//    else {
//        stek* temp = new stek;
//        temp->next = head;
//
//        while (temp->next != NULL)
//        {
//            temp = temp->next;
//        }
//        temp->data = n;
//        temp->next = NULL;
//    }
//    lenght++;
//}
//
//
//void show(stek* head) {
//    stek* temp = head;
//    if (head == NULL) {
//        cout << "void list";
//    }
//    while (temp != NULL) {
//        cout << temp->data << " -> ";
//        temp = temp->next;
//    }
//
//    cout << "NULL\n" << endl;
//}
//int findAverage(stek* head) {
//    int amount = 0, i = 0;
//    for (stek* temp = head; temp != NULL; temp = temp->next, i++) {
//        amount += temp->data;
//    }
//    return amount / i;
//}
//void cleanOut(stek*& head) {
//    while (head)
//    {
//        stek* temp = head;
//        delete temp;
//        temp = temp->next;
//    }
//}
//void sort(stek*& head) {
//    stek* origin = head;
//    int max = head->data;
//    int min = head->data;
//
//    //нахождение мах и мин
//    while (head != nullptr) {
//        if (head->data > max) {
//            max = head->data;
//        }
//        if (head->data < min) {
//            min = head->data;
//        }
//        head = head->next;
//    }
//    cout << "max - " << max << endl;
//    cout << "min - " << min << endl;
//    head = origin;
//}
//
//void Del(stek*& b) {
//    int max, min, k = 0;
//    stek* c, * a;
//    c = a = b;
//    max = min = b->data;
//    stek* t = b, * deleting;
//    while (t->next != NULL) {
//        if ((t->next->data) < min) {
//            a = t->next;
//            min = a->data;
//            t = t->next;
//
//        }
//        else if ((t->next->data) > max) {
//            c = t->next;
//            max = (c->data);
//            t = t->next;
//
//        }
//        else t = t->next;
//    }
//
//    k = a->data;
//    a->data = c->data;
//    c->data = k;
//
//}




//
//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL; list* tail = NULL;
//
//
//
//void add(int n) {
//	list* temp = new list;
//	temp->data = n;
//
//	if (head==NULL)
//	{
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//		tail = temp;
//	}
//	else
//	{
//		list* t = head;
//		head->prev = temp;
//		temp->next = head;
//		head = temp;
//	
//
//		
//	}
//
//}
//
//
//void findavg() {
//
//	list* temp = head;
//	while (temp!=NULL)
//	{
//		if (temp->data%2 == 0)
//		{
//			cout << temp->data<<"->";
//			temp = temp->next;
//		}
//	}
//
//
//}
//
//
//void printlist() {
//	list* temp = head;
//	while (temp!=NULL)
//	{
//		cout << temp->data;
//		temp = temp->next;
//	}
//
//
//
//}
//
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	add(4);
//	add(5);
//	add(66);
//	add(777);
//	add(5);
//	printlist();
//
//
//	cout << "chet - ";
//	findavg();
//}





//----------------------------------------------------------------------
// 17 bilet 
//
//#include <iostream>
//
//using namespace std;
//
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL; list* tail = NULL;
//
//
//void add(list*&head, int n) {
//	list* temp = new list;
//	temp->data = n;
//	if (temp==NULL)
//	{
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//		tail = temp;
//
//	}
//	else
//	{
//		list* t = head;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//
//	}
//
//
//
//}
//
//// удаление по услови в двусвязном списке--------------------------------
//
//void task(list*&head) {
//
//	list* temp = head;
//
//	while (temp)
//	{
//		if (temp->data > 0)
//		{
//			list* t = temp;
//			temp->next->prev = t->prev;
//			temp->prev->next = t->next;
//			temp = temp->next;
//			delete t;
//		}
//	}
//
//
//
//}




// ------------------------------------------------
//19bilet
//
//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data; 
//	list* next;
//	list* prev;
//};
//list* head = NULL; list* tail = NULL;
//
//
//void add(list*& head, int n) {
//
//	list* temp = new list;
//	temp->data = n;
//
//	if (temp == NULL)
//	{
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//		tail = temp;
//
//	}
//	else
//	{
//		list* t = temp->next;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//
//
//
//}
//
//
//
//void task(list*&head) {
//
//	list* temp = head;
//	while (temp)
//	{
//		
//		if (temp->data < 0)
//		{
//			temp = temp->next;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			delete temp;
//		}
//	}
//
//
//}





//void rec(int a, int b) {
//	if (a>b)
//	{
//		return rec(b,a)
//	}
//	else
//	{
//		return a/b
//	}
//
//
//
//}
//
//
//
//
//void fact(int k) {
//	if (k>2)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * fact(k - 1);
//	}
//
//
//}
//
//
//
//
//void rec() {
//	for (int i = 1; i < 100; i++)
//	{
//		
//		a *= -x / k;
//		s += a; 
//	}
//}





//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL; list* tail = NULL;
//
//
//void add(list*& head, int n) {
//
//
//	list* temp = new list;
//	temp->data = n;
//
//	if (temp==NULL)
//	{
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//		tail = temp;
//
//
//	}
//	else
//	{
//		list* t = head;
//		head->prev = temp;
//		temp->next = head;
//		head = temp;
//	}
//	
//
//}
//
//
//void task(list*&head) {
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->data < 0)
//		{
//			list* t = temp->next;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			head = temp;
//		}
//	}
//
//
//}




//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//	int n;
//	cout << "enter arr size - ";
//	cin >> n;
//
//	int* arr = new int;
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//
//
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i-1; j < n; j++)
//		{
//			int minj = i;
//			if (arr[minj] > arr[i]) minj = j;
//			swap(arr[minj], arr[i]);
//		}
//	}
//}







//---------------------------------------
//24 bilet


//#include <iostream>
//
//using namespace std;
//
//void qs(int*arr, int first, int last) {
//	int f = first;
//	int l = last; 
//	int mid = arr[(f+l)/2];
//
//	while (f<l)
//	{
//		while (arr[f] < mid)f++;
//		while (arr[l] > mid)l--;
//		if (f<=l)
//		{
//			int t = arr[f];
//			arr[f] = arr[l];
//			arr[l] = t;
//			f++;
//			l--;
//
//		}
//		
//
//		
//	}
//	if (first < l) qs(arr, first, l);
//	if (f < last) qs(arr, f, last);
//
//
//}



 

//#include<iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head,int n) {
//
//	if (head == NULL)
//	{
//
//
//		stek* temp = new stek;
//		temp->data = n;
//		temp->next = head;
//		head = temp;
//	}
//	else
//	{
//		stek* temp = new stek;
//		temp->next = head;
//		while (temp)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//}
//
//
//
//
//
//void replace(stek*&head) {
//	stek* minel = head;
//	stek* maxel = head;
//	stek* temp = head;
//	int max = 0; int min = 0;
//
//	while (temp)
//	{
//		if (temp->next->data > max)
//		{
//			maxel = temp->next;
//			max = temp->data;
//			temp = temp->next;
//		}
//	}
//
//
//
//
//
//
//}








//
//
//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//
//};
//
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//
//	if (temp)
//	{
//		temp->data = n;
//		temp->next = head;
//		head = temp;
//	}
//	else
//	{
//		temp->next = head;
//		while (temp)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//
//
//}
//
//
//
//void del(stek*&head) {
//	stek* temp = head;
//	while (temp)
//	{
//
//		temp = temp->next;
//		delete temp;
//	}
//
//}
//
//
//
//
//
//void task(stek*& head) {
//
//	stek* temp = head;
//	stek* maxel = head;
//	stek* top = head;
//	int max = 0;
//	while (temp->next->data != NULL)
//	{
//
//
//		if (temp->next->data > max)
//		{
//			maxel = temp->next;
//			max = temp->data;
//			temp = temp->next;
//		}
//	}
//
//	int t = maxel->data;
//	maxel->data = top->data;
//	top->data = t;
//	
//}







//using namespace std;
//
//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//
//
//void add(stek*& head, int n) {
//	stek* temp = new stek;
//	if (temp)
//	{
//		temp->data = n;
//		temp->next = head;
//		head = temp;
//	}
//	else
//	{
//		temp->next = head;
//		while (temp)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//
//}
//
//
//
//void task(stek*&head, stek*&newstek) {
//
//	stek* temp = head;
//	while (temp)
//	{
//		newstek = add(newstek,temp->data);
//	}
//}







//  



//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL; list* tail = NULL;
//
//void add(int n) {
//	list* temp = head;
//
//	if (temp)
//	{
//		temp->data = n;
//		temp->next = NULL;
//		temp->prev = NULL;
//		head = temp;
//		tail = temp;
//	}
//	else
//	{
//		list* t = head;
//		temp->next = head;
//		head->prev = temp;
//		head = t;
//	}
//}
//
//
//void task() {
//	list* min = head;
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->next->data < 0)
//		{
//			min = temp->next;
//			temp = temp->next;
//		}
//
//	}
//
//	min->prev = temp;
//	temp->next = min;
//	min->next = NULL;
//
//	
//
//
//}
//
//
//





//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//
//	stek* temp = new stek;
//	temp->data = n;
//
//	if (head == NULL)
//	{
//		head = temp;
//	}
//	else
//	{
//		temp->next = head;
//		head = temp;
//	}
//
//}
//
//
//
//void task(stek*&head, int n) {
//
//	stek* temp = new stek;
//	while (temp->next!=NULL)
//	{
//		temp = temp->next;
//	}
//	temp->data = n;
//	temp->next = NULL;
//}











//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL; list* tail = NULL;
//
//void init(int n) {
//	list* temp = new list;
//	temp->data = n;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//
//}
//
//void add(int n) {
//
//	list* temp = new list;
//	temp->data = n;
//
//	if (temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->prev = temp;
//		tail = temp;
//	}
//}
//
//
//void task() {
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->next->data < 0 )
//		{
//			list* del = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp = temp->next;
//			delete del;
//		}
//	}
//}
//





//#include<iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//
//	stek* temp = new stek;
//	temp->data = n;
//
//	if (head==NULL)
//	{
//		head = temp;
//	}
//	else
//	{
//		temp->next = head;
//		head = temp;
//	}
//
//}








//#include <iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL; list* tail = NULL;
//
//void init(int n) {
//
//	list* temp = new list;
//	temp->data = n;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//
//
//}
//
//
//void add(int n) {
//	list* temp = new list;
//	if (temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//	}
//
//
//}
//
//
//
//
//void task() {
//
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->next->data %2 == 0)
//		{
//			list* del = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp = temp->next;
//			delete del;
//		}
//	}
//}









//#include <iostream>
//
//using namespace std;
//
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL; list* tail = NULL;
//
//
//
//
//void init() {
//	list* temp = new list;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//
//
//}
//
//
//
//void add(int n) {
//	list* temp = new list;
//	temp->data = n;
//
//	if (!temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//	}
//}
//
//void task() {
//	list* temp = head;
//
//	while (temp)
//	{
//		if (temp->data %2 == 0)
//		{
//			list* del = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp = temp->next;
//			delete del;
//		}
//	}
//}
//



//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//
//}
//
//void del(stek*&head) {
//	stek* temp = head;
//	temp = temp->next;
//	delete temp;
//
//
//}
//
//void task(stek*&head) {
//
//	stek* maxel = head;
//	stek* temp = head;
//	int max = 0;
//
//	while (temp)
//	{
//		if (temp->data > max)
//		{
//			maxel = temp->next;
//			max = temp->data;
//			temp = temp->next;
//		}
//	}
//
//	int t = temp->data;
//	temp->data = maxel->data;
//	maxel->data = t;
//
//}





//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//
//
//void add(stek*&head, int n) {
//
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//
//
//}
//
//
//void del(stek*&head) {
//
//	stek* temp = head;
//	temp = temp->next;
//	delete temp;
//
//}
//
//void task(stek*&head) {
//	stek* temp = head;
//	stek* newstek = new stek;
//
//	while (temp)
//	{
//		if (temp->data < 0)
//		{
//			newstek = add(newstek, temp->data);
//			temp = temp->next;
//		}
//	}
//
//
//}
//
//
//
//void print(stek*&head) {
//	stek* temp = head;
//
//	while ( temp)
//	{
//		cout << temp->data;
//		temp = temp->next;
//
//	}
//}
//






//
//#include<iostream>
//
//using namespace std;
//
//int main(){
//
//	int n;
//	cin >> n;
//
//
//	int* arr = new int;
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//
//
//	for (int i = 0; i < n-1; i++)
//	{
//		int minj = i;
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[i] > arr[minj]) minj = j;
//			
//			swap(arr[minj], arr[i]);
//			
//		}
//	}
//
//}



//#include<iostream>
//
//using namespace std;
//
//void qs(int* arr, int first, int last) {
//
//	int f = first, l = last;
//	int mid = arr[(f+l)/2];
//
//	while (f<l)
//	{
//
//
//		while (arr[f] < mid)f++;
//		while (arr[l] > mid)l--;
//		if (f <= l)
//		{
//			int t = arr[l];
//			arr[l] = arr[f];
//			arr[f] = t;
//			f ++ ;
//			l--;
//		}
//	}
//	if (first < l) qs(arr, first, l);
//	if (f < last) qs(arr, f, last);
//
//	
//
//}
//
//
//
//
//#include<iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL;
//list* tail = NULL;
//
//
//void init(int n) {
//	list* temp = new list;
//	temp->data = n;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//
//
//
//}
//
//
//void add(int n) {
//
//
//	list* temp = new list;
//	temp->data = n;
//	if (!temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp-> next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//
//	}
//
//
//
//}
//
//
//
//void del() {
//	list* temp = head;
//
//	while (temp)
//	{
//		temp = temp->next;
//		delete temp;
//	}
//
//}
//
//
//
//void task() {
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->data %2==0)
//		{
//			list* t = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp = temp->next;
//			delete temp;
//		}
//	}
//}






//#include<iostream>
//
//using namespace std;
//
//
//struct tree
//{
//	int data;
//	tree* left;
//	tree* right;
//
//};
//
//void add(tree*&mytree, int n) {
//
//	tree* temp = new tree;
//	temp->data = n;
//	temp->left = NULL;
//	temp->right = NULL;
//	if (temp->data>n)
//	{
//		add(mytree->right, n);
//	}
//	else
//	{
//		add(mytree->right, n);
//	}
//
//
//}
//
//
//
//void straight(tree*&mytree) {
//
//	tree* temp = mytree;
//	cout << temp->data;
//	straight(mytree->left);
//	straight(mytree->right);
//
//}
//



//#include<iostream>
//using namespace std;
//
//
//struct list
//{
//	int data;
//	list* next;
//
//};
//
//void add(list*& head, int n) {
//	list* temp = new list;
//
//	if (temp)
//	{
//		temp->data = n;
//		temp->next = NULL;
//	}
//	else
//	{
//		temp->next = head;
//		while (temp)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//}
//
//
//
//void task(list*&head) {
//	list* temp = head;
//	while (temp->next->next!=NULL)
//	{
//		temp = temp->next;
//		break;
//
//	}
//	list* del = temp->next;
//	temp->next = temp->next->next;
//	delete del;
//
//
//
//}
//
//





//#include<iostream>
//
//using namespace std;
//
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//}
//
//
//void task(stek*&head) {
//
//	stek* temp = head;
//	stek* newstek = new stek;
//
//	while (temp)
//	{
//		if (temp->data%2==0)
//		{
//			add(newstek, temp->data);
//			temp = temp->next;
//		}
//	}
//	stek* del = temp;
//	temp = temp->next;
//	delete del;
//
//}
//
//
//
//void tasktwo(stek*&head) {
//
//	stek* temp = head;
//	stek* maxel = head;
//	int max = 0;
//
//	while (temp)
//	{
//		if (temp->data>max)
//		{
//			maxel = temp->next;
//			max = temp->data;
//			temp = temp->next;
//		}
//	}
//	int t = temp->data;
//	temp->data = maxel->data;
//	maxel->data = t;
//
//}




//#include <iostream>
//using namespace std;
//
//int rec(int a, int b) {
//	if (a>b)
//	{
//		return a / b;
//	}
//	else
//	{
//		return rec(b, a);
//	}
//
//
//}
//
//
//
//int fact(int k) {
//	if (k>2)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * fact(k-1);
//	}
//
//}
//
//
//
//for (int i = 1; i < 100; i++)
//{
//	a *= -x/i;
//	s += a;
//
//}



//#include<iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL;
//list* tail = NULL;
//
//void init(int n) {
//	list* temp = new list;
//	temp->data = n;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//
//}
//
//void add(int n) {
//	list* temp = new list;
//	temp->data = n;
//
//	if (temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//	}
//
//
//}
//
//
//void del() {
//	list* temp = head;
//
//	while (temp)
//	{
//		temp = temp->next;
//		delete temp;
//	}
//
//}
//
//
//void task() {
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->data%2==0)
//		{
//			list* del = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp = temp->next;
//			delete del;
//		}
//	}
//}





//bool flag = false;
//int l = 0, r = 9;
//int mid = (l + r) / 2;
//
//while ((l <= r) && (flag != true)) {
//
//	if (arr[mid] == key) flag = true;
//
//	if (arr[mid] > key)
//		r = mid - 1;
//	else l = mid + 1;
//}

 





//#include <iostream>
//
//using namespace std;
//
//
//void qs(int *arr, int first, int last) {
//	int f = first; 
//	int l = last;
//	int mid = arr[(f+l)/2];
//
//
//	while (f<l)
//	{
//		while (arr[f] < mid)f++;
//		while (arr[l] > mid)l--;
//		if (f<=l)
//		{
//			int t = arr[f];
//			arr[f] = arr[l];
//			arr[l] = t;
//			f++;
//			l--;
//		}
//
//		
//	}
//
//	if (f < last)qs(arr,first, l);
//	if (first > l)qs(arr, f, last);
//
//	
//}




//
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int* arr = new int;
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//
//	for (int i = 0; i < n-1; i++)
//	{
//		int minj = i;
//			for (int j = i+1; j < n; j++)
//			{
//				if (arr[minj] > arr[i])minj = j;
//				swap(arr[minj], arr[i]);
//			}
//	}
//
//
//
//}



//int f = 0;
//int l = 9;
//int mid = (f + l) / 2;
//bool flag = true;
//
//while (f<=l && flag != true)
//{
//	if (arr[mid] == key) flag = true;
//	if (arr[mid]>key)
//	{
//		f = mid - 1;
//	}
//	else
//	{
//		l = mid + 1;
//	}
//}


//#include<iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//
//
//}
//
//
//
//void task(stek*&head) {
//	stek* temp = head;
//	stek* max = head;
//	while (temp)
//	{
//		if (temp->data > max->data)
//		max = temp;
//		temp = temp->next;
//		
//	}
//	stek* t = temp->next->next;
//	temp->next->next = max->next->next;
//	max->next->next = t;
//	t = temp->next;
//	temp->next = max->next; 
//	max->next = t;
//
//
//}


//#include <iotream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//
//void add(stek*&head, int n) {
//
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//}
//
//
//void task(stek*&head) {
//
//	stek* temp = head;
//	stek* maxel = head;
//	int max = 0;
//	while (temp)
//	{
//		if (temp->data > max)
//		{
//			maxel = temp->next;
//			max = temp->data;
//			temp = temp->next;
//		}
//	}
//		
//	int t = temp->data;
//	temp->data = maxel->data;
//	maxel->data = t;
//
//}
//
//
//
//void tasktwo(stek*&head) {
//	stek* temp = head;
//	stek* maxel = head;
//	int max = 0;
//	while (temp)
//	{
//		if (temp->data >max )
//		{
//			maxel = temp;
//			temp = temp->next;
//
//		}
//	}
//
//	stek* t = temp->next->next;
//	temp->next->next = maxel->next->next;
//	maxel->next->next = temp;
//	t = temp->next;
//	temp->next = maxel->next;
//	maxel->next = t;
//
//}









//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//
//}
//
//
//void del(stek*&head) {
//	stek* del;
//	head = head->next;
//	delete del;
//
//
//}
//
//
//
//void task(stek* head) {
//
//	stek* temp = head;
//	stek* max = head;
//
//
//	while (temp)
//	{
//		if (temp->next->data > max->next->data)
//		{
//			max = temp;
//			temp = temp->next;
//		}
//	}
//
//
//	stek* t = temp->next->next;
//	temp->next->next = max->next->next;
//	max->next->next = t;
//	t = temp->next;
//	temp->next = max->next;
//	max->next = t;
//
//
//}



//#include<iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//
//}
//
//
//
//void task(stek*&head) {
//
//	stek* temp = head;
//	stek* newstek = new stek;
//
//	while (temp)
//	{
//		if (temp->data < 0)
//		{
//			newstek = add(newstek, temp->data);
//			temp = temp->next;
//		}
//	}
//
//
//}


//for (int i = 0; i < n-1; i++)
//{
//	int minj = i;
//	for (int j = i+1; j < n; j++)
//	{
//		if (arr[i] < arr[minj]) minj = j;
//
//		int t = arr[i];
//		arr[i] = arr[minj];
//		arr[minj] = t;
//		
//	}
//}

//#include<iostream>
//
//using namespace std;
//
//struct tree
//{
//	int data;
//	tree* left;
//	tree* right;
//};
//
//
//void add(tree*&mytree, int n) {
//	mytree= new tree;
//	mytree->data = n;
//	mytree->left = NULL;
//	mytree->right = NULL;
//
//	if (mytree->data > n)
//	{
//		add(mytree->right,  n);
//	}
//	else
//	{
//		add(mytree->left, n);
//	}
//
//
//
//}






//
//int rec(int k) {
//	if (k<0)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * rec(k-1);
//	}
//}
//
//
//
//int rec(int a, int b) {
//
//	if (a>b)
//	{
//		return a / b;
//	}
//	else
//	{
//		rec(b,a);
//	}
//
//
//}







//void qs(int *arr, int first, int last) {
//	int f = first;
//	int l = last;
//	int mid = arr[(f+l)/2];
//
//
//	while (f>l)
//	{
//		while (arr[f] < mid)f++;
//		while (arr[l] > mid)l--;
//		if (f<=l)
//		{
//			int t = arr[l];
//			arr[l] = arr[f];
//			arr[f] = t;
//			f++;
//			l--;
//		}
//	}
//	if (first < l)qs(arr, first, l);
//	if (last > f)qs(arr,f,last);
//	
//}



//#include<iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//};
//
//void add(list*&head, int n) {
//
//	list* temp = new list;
//	if (temp)
//	{
//		temp->data = n;
//		temp->next = NULL;
//
//	}
//	else
//	{
//		while (temp)
//		{
//			temp = temp->next;
//		}
//		temp->data = n;
//		temp->next = NULL;
//	}
//
//
//}
//
//
//
//void task(list*&head) {
//
//	list* temp = head;
//
//	while (temp)
//	{
//		if (temp->next->next->next != NULL)
//		{
//			temp = temp->next;
//			
//		}
//	}
//
//	list* del = temp->next;
//	temp->next = temp->next->next;
//	delete del;
//
//}



//#include<iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//
//list* head = NULL; 
//list* tail = NULL;
//
//void init(int n) {
//	list* temp = new list;
//	temp->data = n;
//	temp->next = NULL;
//	temp->prev = NULL;
//}
//
//void add(int n) {
//	list* temp = new list;
//
//	temp->data = n;
//	if (!temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//	}
//		
//
//}
//
//
//
//void task() {
//	list* temp = head;
//	list* min = head;
//	while (temp)
//	{
//		if (temp->data < min->data)
//		{
//			min = temp;
//			temp = temp->next;
//		}
//		if (min == tail)
//		{
//			return;
//		}
//		else
//		{
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			min->prev = tail;
//			tail->next = min;
//			min->next = NULL;
//
//		}
//	}
//
//	
//
//
//}
//



//#include<iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//}
//
//
//void task(stek*&head) {
//	stek* temp = head;
//	stek* maxel = head;
//	int max = 0;
//	while (temp)
//	{
//		if (temp->next->data > max)
//		{
//			maxel = temp;
//			temp = temp->next;
//		}
//	}
//
//	
//	stek* t = temp->next;
//	temp->next = maxel->next;
//	maxel->next = head->next;
//	head->next = t;
//
//
//}











//#include<iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//}
//
//
//
//						void task(stek*&head, int n) {
//							stek* temp = head;
//							while (temp)
//							{
//								temp = temp->next;
//							}
//							temp->data = n;
//							temp->next = NULL;
//
//						}
//
//
//





//#include<iostream>
//
//using namespace std;
//
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL;
//list* tail = NULL;
//
//
//void init() {
//	list* temp = new list;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//}
//
//
//void add(int n) {
//	list* temp = new list;
//	temp->data = n;
//
//	if (!temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//	}
//
//}
//
//
//
//void task() {
//
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->data % 2 ==0)
//		{
//			list* del = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp = temp->next;
//			delete del;
//		}
//	}
//
//
//}



//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//
//};
//  
//
//
//void add(stek*& head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//
//
//}
//
//
//void task(stek*&head) {
//	stek* temp = head;
//	stek* maxel = head;
//
//	while (temp)
//	{
//		if (temp->data > maxel->data)
//		{
//			maxel = temp;
//			temp = temp->next;
//
//		}
//	}
//
//
//	stek* t = temp->next;
//	temp->next = maxel->next;
//	maxel->next = head->next;
//	head->next = t;
//
//
//}




//int l = last;
//int f = first;
//int mid = (f + l) / 2;
//bool flag;
//
//while (f<=l && flag != true)
//{
//	if (arr[mid] == key)flag = true
//		if (arr[mid] > key) l = mid - 1;
//		else
//		{
//			f = mid + 1;
//		}
//		
//}
//






//int f = first; 
//int l = last;
//int mid = (f + l) / 2;
//bool flag;
//while (l<=к && flag!= true)
//{
//	if (arr[mid] == key)flag = true;
//	if (arr[mid] > key) f = mid - 1;
//	else
//	{
//		l = mid + 1;
//	}
//}







//#include<iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL;
//list* tail = NULL;
//void add() {
//	list* temp = new list;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//	}
//
//void task() {
//	list* temp = head;
//	list* min = head;
//	//int min = 0;
//	while (temp)
//	{
//		if (temp->data < min->data)
//		{
//			min = temp;
//			temp = temp->next;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			min->prev = tail;
//			tail->next = min;
//			min->next = NULL;
//
//		}
//	}
//
//	
//
//}
//
//


//#include <iostream>
//
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//
//
//void add(stek*&head , int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	
//}
//
//
//void task(stek*&head, int n) {
//	stek* temp = head;
//	temp->data = n;
//	while (temp)
//	{
//		temp = temp->next;
//	}
//	temp->data = n;
//	temp->next = NULL;
//}



//#include<iostream>
//
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL;
//list* tail = NULL;
//
//void init(int n) {
//	list* temp = new list;
//	temp->data = n;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//}
//
//
//void add(int n) {
//	list* temp = new list;
//	temp->data = n;
//	if (!temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->prev = temp;
//		tail = temp;
//	}
//
//}
//
//
//
//void task(list*&head) {
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->data %2==0)
//		{
//			list* del = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp = temp->next;
//			delete del;
//		}
//	}
//}




//
//void rec(int k) {
//	if (k>2)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * rec(k - 1);
//	}
//}





//void qs(int *arr, int first, int last) {
//
//	int f = first;
//	int l = last;
//	int mid = arr[(f+l)/2];
//
//	while (f<l)
//	{
//		while (arr[f] < mid)f++;
//		while (arr[l] > mid)l--;
//		if (f<=l)
//		{
//			int t = arr[l];
//			arr[l] = arr[f];
//			arr[f] = t;
//			f++;
//			l--;
//
//		}
//			
//	}
//	if (first < l)qs(arr, first, l);
//	if (f > last)qs(arr, f, last);
//	
//}




//#include<iostream>
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//
//}
//
//
//		void task(stek*&head) {
//			stek* temp = head;
//			stek* max = head;
//	
//			while (temp)
//			{
//				if (temp->next->data > max->next->data)
//				{
//					max = temp;
//					temp = temp->next;
//				}
//			}
//
//			stek* t = temp->next;
//			temp->next->next = max->next->next;
//			max->next->next = temp->next;
//			t = temp;
//			temp->next = max->next;
//			max->next = t;
//
//
//
//		}



//#include<iostream>
//
//using namespace std;
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head = NULL;
//list* tail = NULL;
//
//
//void init( int n) {
//	list* temp = new list;
//	temp->data = n;
//	temp->next = head; 
//		
//
//}
//
//
//void add( int n) {
//	list* temp = new list;
//	temp->data = n;
//	if (!temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//	}
//
//
//}


//
//void task() {
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->data%2==0)
//		{
//			list* del = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp = temp->next;
//			delete temp;
//
//		}
//	}
//}




//void task() {
//	list* temp = head;
//	list* max = head;
//	list* min = head;
//
//	while (temp)
//	{
//		if (temp->data > max->data)
//		{
//			max = temp;
//			temp = temp->next;
//		}
//		else if (temp->data < min->data)
//		{
//			min = temp;
//			temp = temp->next;
//		}
//	}
//
//	temp->next->prev = temp->next;
//	temp->prev->next = temp->prev;
//	min->prev = max;
//	max->next = min->next;
//	min->next = max->prev;
//
//
//}
//
//





//#include <iostream>
//#include <io.h>
//using namespace std;
//void writing(const char* filename, int n) {
//	FILE* file = fopen(filename, "wb");
//	int temp_value;
//	for (int i = 1; i <= n; i++) {
//		cout << "Введите " << i << " число: ";
//		cin >> temp_value;
//		fwrite(&temp_value, sizeof(int), 1, file);
//	}
//	fclose(file);
//}
//void show(const char* filename) {
//	int data;
//	FILE* file = fopen(filename, "rb");
//	while (fread(&data, sizeof(int), 1, file))
//		if (data % 2 == 0)
//			cout << data << " ";
//	fclose(file);
//}
//









#include<iostream>

using namespace std;
//
//void rec(int num) {
//	if (num %2==0)
//	{
//		return (num % 10) + rec(num / 10);
//	}
//	else
//	{
//		return rec(num / 10);
//	}
//
//
//}



//#include<iostream>
//using namespace std;
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//
//void add(stek*&head, int n) {
//
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//
//}
//
//
//void task(stek*&head) {
//
//	stek* temp = head;
//	stek* min = head;
//	while (temp)
//	{
//		if (temp->data > min->data)
//		{
//			min = temp;
//			temp = temp->next;
//		}
//	}
//
//	stek* t = temp->next->next;
//	temp->next->next = min->next->next;
//	min->next->next = t;
//	t = temp->next;
//	temp->next = min->next;
//	min->next = t;
//}







//void qs(int * arr, int first, int last) {
//	int f = first;
//	int l = last;
//	int mid = arr[(f+l)/2];
//
//	while (f<l)
//	{
//		while (arr[f] < mid)f++;
//		while (arr[l] > )l--;
//		if (f<=l)
//		{
//			int t = arr[f];
//			arr[f] = arr[l];
//			arr[l] = t;
//			f++;
//			l--;
//		}
//	}
//
//	if (first > l)qs(arr, first, l);
//	if (f > last)qs(arr, f,last);
//	
//}



//
//int l = last;
//int f = first; 
//int mid = (f + l)/2;
//bool flag;
//
//while (f<=l && flag!=true)
//{
//	if (arr[mid] == key)
//	{
//		flag = true;
//	}if (arr[mid] > key)
//	{
//		f = mid + 1;
//	}
//	else
//	{
//		l = mid - 1;
//	}
//}



//#include<iostream>
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*& head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//}
//
//
//void task(stek*&head) {
//	stek* temp = head;
//	stek* stektwo = new stek;
//	while (temp)
//	{
//		if (temp->data > 0)
//		{
//			stektwo = add(stektwo, temp->data);
//		}
//
//		stek* del = head;
//		del = del->next;
//		delete del;
//	}
//
//
//
//}




//for (int i = 0; i < n-1; i++)
//{
//	int minj = i;
//	for (int j = i+1; j < n; j++)
//	{
//		if (arr[i] > arr[minj])minj = j;
//		swap(arr[i], arr[minj]);
//	}
//}





//void qs(int * arr, int first, int last) {
//
//	int f = first; 
//	int l = last;
//	int mid = arr[(f + l) / 2];
//
//	while (f<l)
//	{
//		while (arr[f] < mid)f++;
//		while (arr[l] > mid)l--;
//		if (f<=l)
//		{
//			int t = arr[f];
//			arr[f] = arr[l];
//			arr[l] = t;
//			f++;
//			l--;
//
//		}
//	}
//
//	if (first > l)qs(arr, first, l);
//	if (last < f)qs(arr,last,f);
//
//}




//#include<iostream>
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//}
//
//
//
//void task(stek*&head) {
//
//	stek* temp = head;
//	stek* maxel = head;
//	while (temp)
//	{
//		if (temp->next->data > maxel->next->data)
//		{
//			maxel = temp;
//			temp = temp->next;
//
//		}
//	}
//
//	stek* t = temp->next->next;
//	temp->next->next = maxel->next->next;
//	maxel->next->next = temp->next;
//	t = temp->next;
//	temp->next = maxel->next;
//	maxel->next = t;
//
//}







//#include<iostream>
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//
//list* head = NULL;
//list* tail = NULL;
//
//void init() {
//	list* temp = new list;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//}
//
//
//
//void add(int n) {
//	list* temp = new list;
//	temp->data = n;
//
//	if (!temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//	}
//}
//
//
//
//void del() {
//	list* temp = head;
//	temp = temp->next;
//	delete temp;
//
//
//}

//#include<iostream>
//using namespace std;
//
//struct list
//{
//	int data;
//	list* next;
//	list* prev;
//};
//list* head =NULL;
//list* tail = NULL;
//
//
//void init() {
//	list* temp = new list;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//}
//
//
//void add(int n) {
//	list* temp = new list;
//	temp->data = n;
//	if (!temp)
//	{
//		temp->prev = NULL;
//		temp->next = head;
//		head->prev = temp;
//		head = temp;
//	}
//	else
//	{
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//
//	}
//}
//
//
//
//
//void del() {
//	list* temp = head;
//	temp = temp->next;
//	delete temp;
//}
//
//
//
//
//void task() {
//	list* temp = head;
//	while (temp)
//	{
//		if (temp->data %2==0)
//		{
//			list* del = temp;
//			temp->next->prev = temp->next;
//			temp->prev->next = temp->prev;
//			temp->next->prev = temp->next;
//			delete del;
//		}
//	}
//}



//for (int i = 0; i < n-1; i++)
//{
//	int minj = i;
//	for (int j = i+1; j < n; j++)
//	{
//		if (arr[i] > arr[minj])minj = j;
//		swap(arr[i], arr[minj]);
//	}
//}




//#include<iostream>
//using namespace std;
//
//struct stek
//{
//	int data;
//	stek* next;
//};
//
//void add(stek*&head, int n) {
//	stek* temp = new stek;
//	temp->data = n;
//	temp->next = head;
//	head = temp;
//}
//
//
//void del(stek*&head) {
//
//	stek* temp = head;
//	temp = temp->next;
//	delete temp;
//
//}




//
//double NOD(int N, int M) {
//	if (M % N == 0) { return N; }
//	else { return NOD(M % N, N); }
//
//
























