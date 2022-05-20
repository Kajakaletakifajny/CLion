#include <iostream>
#include <string>

using namespace std;
int main()
{
    string name1, name2;
    int index;
    cout << "Podaj pierwszy tekst" << endl;
    cin >> name1;
    cout << "Podaj drugi tekst" << endl;
    cin >> name2;
    cout << "Podaj gdzie chcesz to wstawic(liczbe)";
    cin >> index;
    cout << name1.insert(index,name2) << endl;

    return 0;
}