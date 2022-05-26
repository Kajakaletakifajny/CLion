#include <iostream>
using namespace std;

struct element_listy        //a linked list is multiple structures linked with pointers
{
    int var1;
    element_listy *adres_element;  //pointer to the next list element
};

int main()
{
    int var1;
    int ile;

    element_listy *head = NULL; //this is the last element because has the address null
    element_listy *nowy_element;        //creating a new element as a pointer

    cout << "Ile chcesz wstawic liczb?";
    cin >> ile;

    //adding an element to the list
    for(int i=0;i<ile;i++)
    {
        cout << "Dodaj liczbe";
        cin >> var1;
        nowy_element = new element_listy;         //creating new element of structure and adding to variable
        nowy_element->adres_element = head; //attaching new element to list
        nowy_element->var1 = var1;               //adding data to element
        head = nowy_element;                     //"hooking up" new element to list
    }

    element_listy *temp = head;    //adding head address to a temp variable
    cout << endl << "List:" << endl;

    while(temp!=NULL)           //navigate through the list
    {
        cout << temp->var1<<endl;
        temp=temp->adres_element;
    }
    return 0;
}