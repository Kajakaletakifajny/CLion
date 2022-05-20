#include <iostream>
#include <string>//klasa obiektów dynamicznych skalowalnych

using namespace std;
int main()
{
    string napis;
    //getline(cin,napis); //sposób na pobieranie łańcuchów wieloczłonowych
    napis = "bob jest bobem";
    napis.append(" ale fajnym"); //dołączamy na końcu
    napis.insert(3,"ak"); //dołączamy gdzie chcemy
    cout <<napis.compare("bobak jest bobem ale fajnym")<<endl;//zwraca zero dla napisów takich samych
    cout << napis;                                                // lub liczbe rozna od zero dla roznych

    cout << napis;

    return 0;
}