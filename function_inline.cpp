#include <iostream>
using namespace std;

inline double inline_max(double x, double y) {
    return (x > y) ? x:y;    //if x > than y return x else return y
}
inline double inline_min(double x, double y) {
    if(x<y)
        return x;
    else
        return y;
    //return (x < y) ? x:y;
}

int main(){
    double a=16,b=7;
    cout << "The values: " << a << "," << b << endl;
    cout << "The bigger is " << inline_max(a,b);
    return 0;
}