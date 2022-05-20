#include <iostream>


#define PI 3.14159

#define READ_VARIABLE(m,v) std::cout<< m; std::cin>> v

using namespace std;

int main() {
    float promien;

#ifdef READ_VARIABLE
    READ_VARIABLE("Podaj promien kola: ", promien);
#endif

#ifndef READ_VARIABLE
    cout << "Podaj promien kola";
    cin >>  promien;
#endif
    cout<<promien<<endl;
    float pole, obwod;

#ifdef PI
    pole = PI * promien * promien;
    obwod = 2 * PI * promien;
#endif

#ifndef PI
    pole= 3.14*promien*promien;
    obowd = 2*3,14*promien;
#endif

    cout<<pole<<endl;
    cout<<obwod<<endl;

    return 0;
}