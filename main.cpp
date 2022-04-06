#include <iostream>
#include <cmath>
#include <vector>
#include "m_unit.h"
using namespace std;

int main() {

    double masa;
    cout << "Podaj masę w funtach" << endl;
    cin >> masa;
    cout << kg(masa) << endl;


    return 0;
}