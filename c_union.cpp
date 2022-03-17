#include <iostream>

using namespace std;

union Student{
    int imie;
    int ocena;
};

int main()
{
    Student uczen;
    uczen.ocena = 4;
    uczen.imie = 5;
    cout << sizeof(Student) << endl;
    cout << uczen.ocena; //wypisze 5 bo jest ostania wpisana do union

    return 0;
}