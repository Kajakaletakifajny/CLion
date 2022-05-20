#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    const char *napisI = "3";
    const char *napisF = "3.14159";

    cout << atol(napisI) << endl;
    cout << strtol(napisI, NULL, 0) << endl;

    return 0;
}