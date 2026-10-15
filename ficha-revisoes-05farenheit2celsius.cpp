#include <iostream>

using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Introduza a temperatura em Fahrenheit: ";
    cin >> fahrenheit;

    celsius = 5 * (fahrenheit - 32) / 9;

    cout << "Temperatura em Celsius: " << celsius << " C" << endl;

    return 0;
}
