#include <iostream>

#define TRUE 1
#define FALSE 0

#define UNSIGNED_INT unsigned int
#define BOOLEAN UNSIGNED_INT

//Definicja makrofunkcji
#define IS_LETTER(c) (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
#define IS_DIGIT(c) (c >= '0' && c <= '9')
#define IS_UPPER(c) c >= 'A' && c <= 'Z'
#define IS_LOWER(c) c >= 'a' && c <= 'z'

//Definicja makroprocedury
#define READ_VARIABLE_1(m, v) std::cout << m; std::cin >> v

//Definicja wieloliniowej makroprocedury
#define READ_VARIABLE_2(m, v) { \
                    std::cout << m; \
                    std::cin >> v; \
                    }


using namespace std;

int main() {

    /*int liczba{100};
    BOOLEAN wynik = (liczba>0)? TRUE:FALSE;
    cout << wynik << endl;//1*/

    int liczba;
    READ_VARIABLE_1("Podaj wartosc liczby calkowitej: ", liczba);
    cout << liczba << endl;

    char znak[1];
    READ_VARIABLE_2("Podaj znak: ", znak[0]);

    if(IS_LETTER(znak[0])) {
        cout << "Wprowadzono litere: " << znak[0] << endl;
        if (IS_LOWER(znak[0]))
            cout << "Litera jest mala" << endl;
        else cout << "Litera jest duza" << endl;
    }
    else if(IS_DIGIT(znak[0]))
        cout << "Wprowadzono cyfre " << znak[0] << endl;
    else
        cout << "Nacisnieto klawisz rozny od litery i cyfry: " << znak[0] << endl;

    return 0;
}