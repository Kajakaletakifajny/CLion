#include <iostream>
#include <string>//klasa obiektów dynamicznych skalowalnych

using namespace std;
int main()
{
    char napis1[30];
    char napis2[30];

    cout << "Podaj pierwszy napis" << endl;
    cin.get(napis1,30);
    cout << "Podaj drugi napis" << endl;
    cin.get(napis2,30);


    strcat(napis1," ");
    strcat(napis1,napis2);

    if(strstr(napis1,"dom"))
    {
        strcat(napis1,napis2);
        cout << "Napis to " << napis1;
    }

    return 0;
}