#include <iostream>

using namespace std;
int main() {
    /*
    int i = 5;
    int *wsk; //wsk-adres, *-wyciąganie zawartości z wskaźnika
    wsk = &i;
    cout << i << endl;//5
    cout << ++(*wsk) << endl;//6
    cout << *&i << endl;//6
    cout << wsk << endl;
    cout << ++wsk << endl;// wskaźnik rośnie o rozmiar wskaźnika
    */


    int zmienna1 = 1, zmienna2 = 5;
    /*const int *wsk; //const taka deklaracja wartości uniemożliwia zmiany wartości (*wsk)++ ; wskaźnik na stałą
    wsk = &zmienna1;
    //(*wsk)++; // *wsk jest stałe i nie może się zmieniać a wsk może
    wsk=&zmienna2;*/
    int *const wsk=&zmienna1; //wskaźnik stały musi być inicjowany
    //wsk=&zmienna2; // nie mogę zmienić adresu w stałym wskaźniku
    *wsk = 17;
    cout << zmienna1;



    return 0;
}

