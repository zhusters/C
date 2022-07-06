//стек
#include <iostream>
#include <time.h>
using namespace std;

struct stek {
    int data;
    stek* next;

};
int lenght = 0;



void addlast(stek*& head, int n) {
    if (head == NULL)
    {
        stek* temp = new stek;
        temp->next = head;
        temp->data = n;
    }
    else {
        stek* temp = new stek;
        temp->next = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
   
        temp->data = n;
        temp->next = NULL; 
    }
    lenght++;

    
}



void addfirst(stek*& head, int n) {
 
    stek* temp = new stek;
    temp->data = n;
    temp->next = head;
    head = temp;

    lenght++;

}



void show(stek* head) {
    stek* temp = head;

    if (head == NULL) {
        cout << "void list";
    }
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n" << endl;
}



int findAverage(stek* head) {
    int amount = 0, i = 0;
    for (stek* temp = head; temp!=NULL; temp = temp->next, i++) {
        amount += temp->data;
    }
    return amount/i;
  
}

void cleanOut(stek*& head) {
    for (stek* temp = head->next; head->next; temp = head->next) {
        delete head;
        head = temp;
    }
}
 


void sort(stek*& head) {
    stek* origin = head;
    int max = head->data;
    int min = head->data;

    //нахождение мах и мин
    while (head != nullptr) {
        if (head->data > max) {
            max = head->data;
        }

        if (head->data < min) {
            min = head->data;
        }
        head = head->next;

    }
    cout << "max - " << max << endl;
    cout << "min - " << min << endl;

    head = origin;



    //replace

   /* while (head != nullptr)
    {
        if (max > min)
        {
            swap(max,min);
        }
    }*/
    //while (head) {
    //    if (head->data == max) {
    //        head->data = min;
    //    }
    //    else if (head->data == min) {
    //        head->data = max;
    //    }
    //    head = head->next;
    //}
}


  


int main() {
    setlocale(LC_ALL, "Russian");
    stek* head = nullptr;
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        addfirst(head, rand()%100);
    }
    cout << "one";
    show(head);

    addfirst(head, 111111);
    addfirst(head, 44444);

    addlast(head, 777777);
    sort(head);
    cout << "two";

    show(head);
  //  head->data = findAverage(head);
   



    cleanOut(head); 
}



