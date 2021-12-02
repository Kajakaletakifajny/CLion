#include <iostream>

namespace stale
{
    const double pi=3.14;
}

using namespace std;
using namespace stale;
int main()
{
    double r;
    cout << "Podaj promien okregu\n";
    cin >> r;

    cout << "Pole okregu rowna sie" << pi*r*r << endl;

    return 0;
}