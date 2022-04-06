#include <iostream>

#define TRUE 1
#define FALSE 0

#define UNSIGNED_INT unsigned int
#define BOOLEAN UNSIGNED_INT

using namespace std;

int main() {

    int liczba{100};
    BOOLEAN wynik = (liczba>0)? TRUE:FALSE;
    cout << wynik << endl;//1

    return 0;
}