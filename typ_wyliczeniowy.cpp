#include <iostream>

using namespace std;
int main()
{

    /*enum Stanowisko
    {
        smieciasz, szewc, mysliwy, rolnik
    }zawod=smieciasz;
    cout << zawod << endl;
    zawod = rolnik;
    cout << zawod << endl;*/


    enum Stanowisko
    {
        smieciasz=2, szewc=1, mysliwy=50, rolnik=25
    };
    Stanowisko zawod = szewc;
    cout << zawod << endl;
    zawod = rolnik;
    cout << zawod << endl;


    return 0;
}