//дерево
#include <iostream>

using namespace std;

struct tree {
	int data;
	string datastring;
	tree* left;
	tree* right;
};
int counteven, tabs;


void addstring(string datastring, tree*& mytree) {
	if (mytree == NULL)
	{
		mytree = new tree;
		mytree->datastring = datastring;
		mytree->left = NULL;
		mytree->right = NULL;

	}
	else {
		if (mytree->datastring < datastring)
		{
			addstring(datastring, mytree->left);
		}
		else
		{
			addstring(datastring, mytree->right);
		}
	}




}



void add(int data, tree*& mytree) {
	if (mytree == NULL)
	{
		mytree = new tree;
		mytree->data = data;
		mytree->left = NULL;
		mytree->right = NULL;

	}
	else {
		if (mytree->data < data)
		{
			add(data, mytree->left);
		}
		else
		{
			add(data, mytree->right);
		}
	}


}



void print(tree*& mytree) {
	if (!mytree)
	{
		return;
	}
	else {
		tabs += 2;
		print(mytree->left);
		for (int i = 0; i < tabs; i++)cout << "	";
		cout << mytree->data << endl;
		print(mytree->right);
		tabs -= 2;
	}


}

void del(tree*& mytree) {
	if (mytree != NULL)
	{
		del(mytree->left);
		del(mytree->right);
		delete mytree;
		mytree = NULL;
	}

}


void findeven(tree*& mytree) {
	if (mytree)
	{
		if (mytree->data % 2 == 0)
		{
			counteven++;
			cout << "четные элементы - " << mytree->data << endl;
		}
		findeven(mytree->left);
		findeven(mytree->right);
	}

}


void straight(tree*& mytree) {
	if (!mytree)
	{
		return;
	}

	cout << mytree->data << endl;
	
	straight(mytree->left);

	straight(mytree->right);
}

//void removekey(int key, tree*& mytree) {
//	if (mytree == NULL) {
//		return;
//	}
//	else if (key == mytree->data) {
//		if (mytree->right == NULL)
//		{
//			mytree = mytree->left;
//		}
//	}
//
//}




void findkey(int key, tree*& mytree) {
	if (mytree)
	{
		if (mytree->data == key)
		{
			findkey(key, mytree->left);
			cout << mytree->data;
			findkey(key, mytree->right);

		}

	}
}



int nodecount(tree*& mytree) {
	//int c = 0;

	//if (mytree == NULL)
	//	return 0;

	//else
	//{
	//	c += nodecount(mytree->left);
	//	c += nodecount(mytree->right);
	//	return c;
	//}
	if (mytree->left == NULL && mytree->right == NULL)
		return 1;
	int left, right;

	if (mytree->left != NULL)
		left = nodecount(mytree->left);
	else
		left = 0;
	if (mytree->right != NULL)
		right = nodecount(mytree->right);
	else
		right = 0;

	
	return left + right;
}


//int find_min(tree*& mytree) {
//	tree* temp = mytree;
//	if (temp->right == NULL)
//	{
//		return temp->data;
//	}
//	return find_min(temp->right);
//
//}
int find_min(tree*& mytree) {

	if (mytree->right == NULL)
	{
		return mytree->data;
	}
	return find_min(mytree->right);

}
int find_max(tree*& mytree) {
	tree* temp = mytree;
	if (temp->left == NULL)
	{
		return temp->data;
	}
	return find_max(temp->left);

}


//int leftcount(tree*& mytree) {
//	int count = 0;
//	if (mytree)
//	{
//		count += leftcount(mytree->left);
//	}
//	if (mytree->left == NULL)
//	{
//		count +=1;
//			
//	}
//	return count;
//
//}

int main() {
	setlocale(LC_ALL, "rus");
	tree* root = NULL;
	tree* rootstring = NULL;


	int el;
	cout << "Введите кол-во элементов для будущего дерева: ";

	cin >> el;

	for (int i = 0; i < el; i++)

	{

		add(rand() % 100, root);

	}
	/*add(777, root);
	add(999, root);
	add(2, root);
	add(5, root);
	add(6, root);

	add(111, root);	cout << endl;*/

	cout << "поиск четных" << endl;
	findeven(root);
	cout << endl;

	cout << "прямой обход" << endl;
	straight(root);
	cout << endl;


	cout << "символьное дерево" << endl;
	addstring("sevs", rootstring);
	addstring("dbf", rootstring);
	addstring("db", rootstring);
	addstring("dbffb", rootstring);
	addstring("dfbfdbfdb", rootstring);

	print(rootstring);

	cout << "вывод дерева" << endl;
	print(root);
	cout << endl;

	cout << "поиск по ключу" << endl;
	findkey(41, root);
	//findkey(18, root);
	//findkey(34, root);


	cout << endl;


	cout << "кол-во узлов" << endl;
	cout << nodecount(root);
	cout << endl;


	cout << "мин" << endl;
	cout << find_min(root);
	cout << endl;
	cout << "мах" << endl;
	cout << find_max(root);
	cout << endl;

	cout << "кол во листьев левой ветви" << endl;
	//cout<<leftcount(root);
	cout << endl;



}