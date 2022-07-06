//дерево
#include <iostream>
using namespace std;

struct Node                         
{	
	int count=0;
	int x;  
	char y;
	Node* l, * r; 
                     
};
void show(Node*& Tree)              
{
	if (Tree != NULL)               
	{
		cout << Tree->x << '\t';

		show(Tree->l); 
		show(Tree->r); 

 	}

}


int count(Node* node)
{
	if (node->l == NULL && node->r == NULL) {
		return 1;
	}
	int left, right;
	if (node->l != NULL) {
		left = count(node->l);
	}
	else {
		left = 0;
	}
	if (node->r != NULL) {
		right = count(node->r);
	}
	else {
		right = 0;
	}
	int res = left + right;
	cout << endl<<"res - " << res+1 << endl;

	return left + right+1;
}
//void calc(Node*& Tree) {
//	if (Tree != NULL){
//		for (int i = 0; i < ; i++)
//		{
//
//		}
//	}
//}

void del(Node*& Tree) {
	if (Tree != NULL)                
	{
		del(Tree->l);                
		del(Tree->r);                
		delete Tree;                 
		Tree = NULL;               
	}

}
void add_node(char y, Node*& MyTree)
{
	if (NULL == MyTree)
	{
		MyTree = new Node;
		MyTree->x = y;
		MyTree->l = MyTree->r = NULL;
	}

	if (y < MyTree->x)
	{
		if (MyTree->l != NULL) {
			add_node(y, MyTree->l); //добавление в дерево пока не найдем место
		}
		else
		{
			MyTree->l = new Node;                 //Выделяем память левому элементу 
			MyTree->l->l = MyTree->l->r = NULL;
			MyTree->l->x = y;                     //Записываем в левое подзвено записываемый элемент
		}
	}

	if (y > MyTree->x)
	{
		if (MyTree->r != NULL) { 
			add_node(y, MyTree->r);
		}
		else
		{
			MyTree->r = new Node;
			MyTree->r->l = MyTree->r->r = NULL;
			MyTree->r->x = y;
		}
	}
}

void add_node(int x, Node*& MyTree) 
{
	if (NULL == MyTree)             
	{
		MyTree = new Node;          
		MyTree->x = x;              
		MyTree->l = NULL;
		MyTree->r = NULL;
	}

	if (x < MyTree->x)   
	{
		if (MyTree->l != NULL) { 
			add_node(x, MyTree->l);//добавление в дерево пока не найдем место 
		}
		else          
		{
			MyTree->l = new Node;                 //Выделяем память левому элементу 
			MyTree->l->l = MyTree->l->r = NULL;  
			MyTree->l->x = x;                     //Записываем в левое подзвено записываемый элемент
		}
	}

	if (x > MyTree->x)             
	{
		if (MyTree->r != NULL) {
			add_node(x, MyTree->r);
		}
		else              
		{
			MyTree->r = new Node;                 
			MyTree->r->l = MyTree->r->r = NULL;   
			MyTree->r->x = x;                     
		}
	}
}

int main()
{
	Node* Tree = NULL; 
	Node* Treeone = NULL;
	add_node('evr', Treeone);
	//show(Treeone);

	for (int i = 0; i < 10; i++)
	{
		add_node(i, Tree);
	}
	cout << endl;
	show(Tree);
	del(Tree);
	show(Tree);

	//count(Tree);

}



//
//– сформировать дерево(добавить новый элемент);
//
//– обойти все элементы дерева(например, для просмотра или выполнения некоторой операции);
//
//– выполнить поиск элемента с указанным значением в узле;
//
//+– удалить заданный элемент.
