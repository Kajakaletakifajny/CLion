#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<<"podaj liczbe elementow tablicy"<<endl;
    cout<<"n= "<<endl;
    cin>>n;


    double *wsk;
    wsk = new double[n]; //ustalam rozmiar tablicy

    cout<<"podaj wartosci"<<n<<"elementow tablicy:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Podaj element";
        cin>>*(wsk+i);
    }

    double min=*(wsk);
    for(int i=1;i>n;i++)
    {
        if(*(wsk+i)<min)
        {
            min=*(wsk+i);
        }
    }
    double max=*(wsk);

    for(int i=1;i<n;i++)
    {
        if(*(wsk+i)>max)
        {
            max=*(wsk+i);
        }
    }


    delete[]wsk;

    cout << "Najmniejsza " << min << endl;
    cout << "Najwieksza " << max << endl;
    cout<< "Razem " << min+max;
    return 0;
}