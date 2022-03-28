#include <iostream>
#include <cmath>
#include <vector>
#include "unit.h"
using namespace std;

int main() {

    double masa;
    cout << "Podaj masę w funtach" << endl;
    cin >> masa;
    cout << kg(masa) << endl;


    return 0;
}