#include <iostream>

using namespace std;
int main()
{
    int i=5;
    int *wsk; //wsk-adres, *-wyciąganie zawartości z wskaźnika
    wsk=&i;
    cout << i << endl;//5
    cout << ++(*wsk) << endl;//6
    cout << *&i << endl;//6
    cout << wsk << endl;
    cout << ++wsk << endl;// wskaźnik rośnie o rozmiar wskaźnika

    return 0;
}