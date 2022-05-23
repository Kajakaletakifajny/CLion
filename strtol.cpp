#include <iostream>
using namespace std;

int main() {
    const char *napisI = "3";
    const char *napisF = "3.14159";
    cout << atol(napisI) << endl;
    cout << strtol(napisI, NULL, 0) << endl;
    cout << atof(napisF) << endl;
    cout << strtod(napisF, NULL) << endl;
    cout << strtof(napisF, NULL) << endl;
    char *wsk;
    cout << "strtol: " << strtol(napisF, &wsk, 0) <<endl;
    cout << "wsk: " << wsk << endl;
    return 0;
}