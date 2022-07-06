//двусвязный список
#include <iostream>
using namespace std;

struct dbllist {
    int data;
    dbllist* next;
    dbllist* prev;

};
dbllist* head = NULL; dbllist* tail = NULL;


void addfirst(int value) {
    dbllist* temp = new dbllist;
    temp->data = value;
    if (head == NULL) {
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
        tail = temp;

    }
    else {
        dbllist* p = head;
        head->prev = temp;
        temp ->next = head;
        head = temp;
    
    }
    cout << "добавление комплит"<<endl;
}






void printlist()
{
    if (head == NULL) { cout << "\nСписок пуст\n\n"; }
    else
    {
        dbllist* a = head;
        cout << "\nЭлементы списка: ";
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        } cout << "\n\n";
    }
}






void findaverage() {
    dbllist* a = head;
    int sum = 0;
    int count = 0;
    if (head == NULL) {
        cout << "\nСписок пуст\n\n";
    }
    else {

        while (a != NULL)
        {
            sum += a->data;
            a = a->next;
            count++;
        }
        cout << sum << endl;
    }     

}





void deletelist(int pos) {
    if(head == NULL) {
        cout << "список пуст";
    }
    if (head == head->next) {
        delete head;
        head = NULL;
    }
    else {
        dbllist* a = head;
        for (int i = pos; i > 1; i--) 
            a = a->next;
        
        if (a == head) 
            head = a->next;
            a->prev->next = a->next;
            a->next->prev = a->prev;
            delete a;
        
        
    }
    cout << "удаление комплит"<<endl;
}





int main() {
    setlocale(LC_ALL, "Rus");
    int value, position, x;
    do
    {
        cout << "1. Добавить элемент" << endl;
        cout << "2. Удалить элемент" << endl;
        cout << "3. Вывести список" << endl;
        cout << "4. Среднее значение" << endl;
        cout << "0. Выйти" << endl;
        cout << "\nНомер операции > "; cin >> x;
        switch (x)
        {
        case 1:
            cout << "Значение > "; cin >> value;
            cout << "Позиция > "; cin >> position;
            if (position == 1) addfirst(value);
          //  else addend(value); break;
        case 2:
            cout << "Позиция > "; cin >> position;
            deletelist(position); break;
        case 3: printlist(); break;
        case 4: findaverage(); break;

        }
    }
     while (x != 0);
}

// ошибка при удалении элемента если список пуст
// не рабоатет удаление если стоят скобки
// findaverage не работает




