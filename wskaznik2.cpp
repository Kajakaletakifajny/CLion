#include <iostream>

using namespace std;
int main()
{

    double bok1 = 1;
    double *w_bok1;
    w_bok1 = &bok1;

    double bok2 = 2;
    double *w_bok2;
    w_bok2 = &bok2;

    double pole;
    double *w_pole = &pole;

    *w_pole = (*w_bok1) * (*w_bok1);

    double obwod;
    double *w_obwod = &obwod;

    *w_obwdo = 2 * (*w_bok1) + 2 * (*w_bok2);

    cout << "Wyniki: " << endl;
    cout << "Pole wynosi " << *w_pole << endl;
    cout << "Obwód wynosi " << *w_obwod << endl;



    return 0;
}
