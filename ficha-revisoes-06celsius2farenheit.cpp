#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Introduza a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (9.0 * celsius / 5) + 32;

    cout << "Temperatura em Fahrenheit: " << fahrenheit << " F" << endl;

    return 0;
}
