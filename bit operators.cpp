#include <iostream>

using namespace std;
int main()
{
    int number1 {7};
    int number2 {5};
    int result = number1 & number2;

    cout << "---Program do sprawdzania dzialania bitow---" << endl;

    cout << "Wykonuje AND z liczby 7 i 5 = "; // daje 1 kiedy jest 1 i 1 lub 0 i 0 więc 7 = 111, 5 = 101 więc końcowa liczba jest 101
    cout << result << endl;

    int result2 = number1 | number2;
    cout << "Wykonuje OR z liczby 7 i 5 = "; // daje 1 kiedy jest 0 i 1 lub 1 i 1 więc 7 = 111, 5 = 101 więc końcowa liczba jest 111
    cout << result2 << endl;

    int result3 = number1 ^ number2;
    cout << "Wykonuje XOR z liczby 7 i 5 = "; // kiedy wychodzi 1 i 0 daje 0 jeśli 1 i 1 lub 0 i 0 wychodzi 0
    cout << result3 << endl;

    int result4 = ~number1;
    cout << "Wykonuje NOT z liczby 7 = "; // 7 = 111 i not dodaje na poczatku -1 oraz odwraca liczby czyli bedzie -1000
    cout << result4 << endl;

    int result5 = number1 << 1;
    cout << "Wykonuje przesuniecie w lewo 7 o 1 = "; // przesuwa w lewo o 1 czyli 111 zmienia się w 1110
    cout << result5 << endl;

    int result6 = number1 >> 2;
    cout << "Wykonuje przesuniecie w prawo 7 o 2 = "; // przesuwa w prawo o 2 czyli 111 zmienia się w 001
    cout << result6 << endl;

    cout << "---------------------------------------------";

    return 0;
}