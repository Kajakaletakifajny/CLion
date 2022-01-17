#include <iostream>

using namespace std;
int main()
{
    int n;
    int *wsk;

    cout << "Podaj liczbe elementow tablicy: " << endl;
    cout << "n = ";
    cin >> n;

    wsk = new int[n]; //mozemy okreslic rozmiar tablicy w trakcie wykonywaniu programu, nie mamy nazwy tablicy
    //rezerwujemy pamięć na stercie
    for(int i=0;i<n;i++)
    {
        cout << "Podaj elementy tablicy" << endl;
        cin >> *(wsk+i);
    }

    int max = *(wsk);
    for(int i=1;i<n;i++)
    {
        if(*(wsk + i)<max);
        max=*(wsk+i);
    }

    delete[] wsk;
    cout << max;
    return 0;

}