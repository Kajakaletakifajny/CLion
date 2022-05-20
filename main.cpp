#define TEXT(m,v) std::cout << m <<endl; std::cin >> v
#include <iostream>

using namespace std;

main(){
    float text;
#ifdef TEXT("Podaj tekst\n", text);
#endif

    return 0;
}