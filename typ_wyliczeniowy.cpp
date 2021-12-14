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


    /*enum Stanowisko
    {
        smieciasz=2, szewc=1, mysliwy=50, rolnik=25
    };
    Stanowisko zawod = szewc;
    cout << zawod << endl;
    zawod = rolnik;
    cout << zawod << endl;

    enum Ocena
    {
        niedostateczny=1,
        dopuszczajacy=2,
        dostateczny=3,
        dobry=4,
        bardzo_dobry=5,
        celujacy=6
    };

    Ocena ocena = dostateczny;

    cout << "Ocena slowna: ";
    switch (ocena)
    {
        case niedostateczny:
            cout << "niedostateczny" << endl;
            break;
        case dopuszczajacy:
            cout << "dopuszczajacy" << endl;
            break;
        case dostateczny:
            cout << "dostateczny" << endl;
            break;
        case dobry:
            cout << "dobry" << endl;
            break;
        case bardzo_dobry:
            cout << "bardzo_dobry" << endl;
            break;
        case celujacy:
            cout << "celujacy" << endl;
            break;

        default: cout << "nieokreślona" << endl;
    }
    cout << "Ocena liczbowa: " << ocena << endl;*/

    int j=0;
    cout << "Do jakiej szkoly chodzisz" << endl;
    cout << "1-podstawowa, 2-liceum, 3-technikum" << endl;
    cin >> j;



    enum Okres
    {
        podstawowa=8,
        liceum=4,
        technikum=5,
        nie_wybrano=0
    };

    Okres okres = nie_wybrano;

    if(j == 1)
        Okres okres = podstawowa;
    else if(j == 2)
        Okres okres = liceum;
    else if(j == 3)
        Okres okres = technikum;


    cout << "Jaka szkola: ";
    switch (j)
    {
        case 1:
            okres = podstawowa;
            break;
        case 2:
            okres = liceum;
            break;
        case 3:
            okres = technikum;
            break;

        default: cout << "nieokreslona" << endl;
    }

    switch (okres)
    {
        case podstawowa:
            cout << "podstawowa" << endl;
            break;
        case liceum:
            cout << "liceum" << endl;
            break;
        case technikum:
            cout << "technikum" << endl;
            break;

        default: cout << "nieokreslona" << endl;
    }

    cout << "Tyle lat: " << okres << endl;

    return 0;
}