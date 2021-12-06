#include <iostream>

using namespace std;
int main()
{
    double i=5;
    double *wsk; //wsk-adres, *-wyciąganie zawartości z wskaźnika
    wsk=&i;
    cout << i << endl;
    cout << (*wsk) << endl;
    cout << wsk << endl;

    return 0;
}