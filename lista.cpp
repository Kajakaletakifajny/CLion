#include <iostream>
using namespace std;

struct list_element        //a linked list is multiple structures linked with pointers
{
    int var1;
    list_element *next_element_adres;  //pointer to the next list element
};

int main()
{
    list_element *head = NULL; //this is the last element because has the address null
    list_element *new_element;        //creating a new element as a pointer
    int var1;
    char odp;
    do            //adding an element to the list
    {
        cout << "Add var1 : ";
        cin >> var1;
        new_element = new list_element;         //creating new element of structure and adding to variable
        new_element->next_element_adres = head; //attaching new element to list
        new_element->var1 = var1;               //adding data to element
        head = new_element;                     //"hooking up" new element to list
        cout << endl << "Add extra to the list? y/n: ";
        cin >> odp;
    }
    while (odp!='n');
    list_element *temp = head;    //adding head address to a temp variable
    cout << endl << "List:" << endl;
    while(temp!=NULL)           //navigate through the list
    {
        cout << temp->var1<<endl;
        temp=temp->next_element_adres;
    }return 0;
}