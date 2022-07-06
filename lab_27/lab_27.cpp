#include <iostream>
#include <string>

using namespace std;

struct Laba
{
	char data;
	Laba* pNext;
} *value;

int Check(char);
Laba* Еntrance(Laba*, char);
Laba* Exit(Laba*, char*);

Laba* Еntrance(Laba* p, char data)
{
	Laba* t = new Laba;
	t->data = data;
	t->pNext = p;
	return t;
}

Laba* Exit(Laba* p, char *data)
{
	Laba* t = p;
	*data = t->data;
	p = p->pNext;
	delete t;
	return p;
}

int Check(char a)
{
	switch (a)
	{
	case '^': return 4;
	case '*': case '/': return 3;
	case '-': case '+': return 2;
	case '(': return 1;
	}
	return 0;
}

Laba* t, * Start = NULL;
char a, In[50], Out[50];
int k = 0, l = 0;
double mas[50] = { 5.6, 3.2, 0.9, 1.7, 4.8 };


string form(char* In) {
	while (In[k] != '\0')
	{
		if (In[k] == ')')
		{
			while ((Start->data) != '(') {
				Start = Exit(Start, &a);
				if (!Start)a = '\0';
				Out[l++] = a;
			}
			t = Start;
			Start = Start->pNext;
			delete t;
		}
		if (In[k] >= 'a' && In[k] <= 'z') Out[l++] = In[k];
		if (In[k] == '(') Start = Еntrance(Start, In[k]);
		if (In[k] == '+' || In[k] == '-' || In[k] == '*' || In[k] == '/' || In[k] == '^')
		{
			while (Start != NULL && Check(Start->data) >= Check(In[k]))
			{
				Start = Exit(Start, &a);
				Out[l++] = a;
			}
			Start = Еntrance(Start, In[k]);
		}
		k++;
	}
	while (Start != NULL) {
		Start = Exit(Start, &a);
		Out[l++] = a;
	}
	Out[l] = '\0';
	cout << "My answer: ";
	return Out;
}


double answer(char* Str)
{
	char ch, ch1, ch2;
	double rez = 0, Start1, Start2;
	char chr = 'z';
	for (int i = 0; i < strlen(Str); i++)
	{
		ch = Str[i];
		if (ch >= 'a' && ch <= 'z') value = Еntrance(value, ch);
		else {
			value = Exit(value, &ch1);
			value = Exit(value, &ch2);
			Start1 = mas[int(ch1) - 97];
			Start2 = mas[int(ch2) - 97];
			switch (ch)
			{
			case '+': rez = Start2 + Start1; break;
			case '-': rez = Start2 - Start1; break;
			case '*': rez = Start2 * Start1; break;
			case '/': rez = Start2 / Start1; break;
			case '^': rez = pow(Start2, Start1); break;
			}
			mas[int(chr) - 97] = rez;
			value = Еntrance(value, chr);
			chr--;
		}
	} return rez;
}



int main()
{
	cout << "Formula for copying: a-(b/c*(d+e)) " << endl;
	cin >> In;
	form(In);
	cout << answer(Out) << endl;
	return 0;
}
