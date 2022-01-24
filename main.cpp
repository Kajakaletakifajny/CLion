#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    vector <int> wektor;
    double suma=0;
    int x;
    double arytme=0;
    cout << "Podaj ile elementow" << endl;
    int elementy =0;
    cin >> elementy;
    int a;
    for (int i =0; i < elementy; i++) {
        cout << "Podaj element " << i+1 << endl;
        cin >> a;
        wektor.push_back(a);
    }

    for (int i =0; i < elementy; i++) {
        cout << "Element: " << i << ": " << wektor[i] << endl;//wektor[i] nie jest to tablica ale zmienna dynamiczna która sama siebie usuwa
    }

    /*for(int x : wektor)//pętla foreach nie działa teraz ale może kiedyś zadziała
        cout << "Element: " << x << ": " << wektor[x] << endl;*/

    for (int i =0; i < elementy; i++){
        suma += wektor[i];
        x=i;}

    arytme = suma;

    cout << suma << endl;
    cout << arytme/x;

    return 0;
}