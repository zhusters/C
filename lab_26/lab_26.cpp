//дерево
#include <iostream>

using namespace std;

struct Tree{

	int data;
	Tree* left;
	Tree* right;

}; int counteven, tabs;


void add(Tree*&mytree, int data) {

	if (mytree == NULL)
	{


		mytree = new Tree;
		mytree->data = data;
		mytree->left = NULL;
		mytree->right = NULL;
	}

	else {
		if (mytree->data < data)
		{
			add(mytree->left,data);
		}
		else
		{
			add(mytree->right,data);
		}
	}

}





void del(Tree *& mytree) {
	if (!mytree)
	{
		del(mytree->right);
		del(mytree->left);
		delete mytree;
		mytree = NULL;

	}


}


void findeven(Tree*&mytree) {
	if (mytree)
	{


		if (mytree->data % 2 == 0)
		{
			cout << "четные элементы - " << mytree->data << endl;
		}
		findeven(mytree->left);
		findeven(mytree->right);
	}
}


void preorder(Tree*& mytree) {
	if (!mytree)
	{
		return;
	}
	cout << mytree->data<<endl ;
	preorder(mytree->left);
	preorder(mytree->right);



}

void postorder(Tree*& mytree) {
	if (!mytree)
	{
		return;
	}
	postorder(mytree->left);
	postorder(mytree->right);
	cout << mytree->data<<endl;




}


void inorder(Tree*& mytree) {
	if (!mytree)
	{
		return;
	}
	inorder(mytree->left);
	cout << mytree->data<<endl;
	inorder(mytree->right);

}




int findkey(int key, Tree* mytree) {
	int res;
	if (mytree)
	{

		if (mytree->data == key)
		{
			return mytree->data;
		}
		else if (key < mytree->data)
		{
			if ((mytree->right))
			{
				return findkey(key, mytree->left);

			}
		}
		else
		{
			
			if ((mytree->left))
			{
				return findkey(key, mytree->right);
			}

		}




	}
	else return 0;
}




void print(Tree*& mytree) {
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

int countnode( Tree*mytree) {
	if (mytree->left == NULL && mytree->right == NULL)
		return 1;
	int left, right;

	if (mytree->left != NULL)
		left = countnode(mytree->left);
	else
		left = 0;
	if (mytree->right != NULL)
		right = countnode(mytree->right);
	else
		right = 0;


	return left + right;
}




 
int find_min(Tree*& mytree) {

	if (mytree->right == NULL)
	{
		return mytree->data;
	}
	return find_min(mytree->right);

}

int find_max(Tree*& mytree) {
	Tree* temp = mytree;
	if (temp->left == NULL)
	{
		return temp->data;
	}
	return find_max(temp->left);

}




int main() {
	
	setlocale(LC_ALL, "ru");


	Tree* root = NULL;
	int n;
	cout << "введите кол-во элементов дерева - " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		add(root, rand()%10);
	}

	add(root, 777);
	add(root, -777);


	cout << "поиск четных" << endl;
	findeven(root);


	cout << "preorder - " << endl;
	preorder(root);

	cout << "postorder - " << endl;
	postorder(root);

	cout << "inorder - " << endl;
	inorder(root);


	cout << "поиск по ключу - " << endl;

	cout<< findkey(8, root) <<endl;


	cout << "кол-во узлов - " << endl;
	cout << countnode(root)<<endl;


	cout << "min max - " << endl;
	cout<<find_min(root)<<endl;
	cout<<find_max(root);



	print(root);

}