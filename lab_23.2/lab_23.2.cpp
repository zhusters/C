// список
#include <iostream>
using namespace std;





struct node {
	node* next;
	int data;
 
};

void push(node*& head, int data) {
	node* temp = new node;   // Создаём новый узел для значения
	temp->data = data;
	temp->next = head;   // Новый узел привязывается к старому головному элементу
	head = temp;   // Новый узел сам становится головным элементом
}

void show(node*& head) {
	node* temp = head;
	if (temp == nullptr)
	{
		cout << "void list" << endl;
	}
	else
	{
		while (temp)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
	}

}



void sort(node*& head) {
	node* temp = head;
	int max = head->data;
	int min = head->data;


	while (head)
	{
		if (head->data > max)
		{
			max = head->data;
		}
		if (head->data < min)
		{
			min = head->data;
		}
		head = head->next;

	}
	head = temp;
	cout << "max - " << max << endl;
	cout << "min - " << min << endl;

	//replace

	/*while (head)
	{
		if (max > min)
		{
			swap(max, min);
		}
	}*/

}



//void sorttwo(node*& head) {
//	node* temp = NULL;
//	int chet = NULL;
//	while (head!= nullptr)
//	{
//		if (head->data %2 == 0)
//		{
//			chet = head->data;
//
//		}
//
//	}
//	head = head->next;
//	cout << "chet - " << chet << endl;
//}



void deleteind(node*& head, int n) {

	node* temp = head;
	node* prev = head;
	for (int i = 0; i < n; i++)
	{
		prev = temp;
		temp = temp->next;

	}
	prev->next = temp->next;
	delete(temp);


}

int main() {

	node* head = nullptr;
	
	cout << "enter size list - ";
	int length;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		push(head, i + 1);
	}
	sort(head);
	push(head, 777);

	//sorttwo(head);
	show(head);
	deleteind(head, 2);
//	sorttwo(head);

	cout << endl << "res - ";

	show(head);

}