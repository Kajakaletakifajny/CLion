#define WRITE_MESSAGE(m,v) std::cout << m <<endl; std::cin >> v
#include <iostream>

using namespace std;

main(){
    int i;
    while(i=1){

        string text;
#ifdef WRITE_MESSAGE
        WRITE_MESSAGE("Podaj tekst\n", text);
#endif

        cout << text << endl;};

    return 0;
}