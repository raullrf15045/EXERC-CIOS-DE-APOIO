#include <iostream>

using namespace std;

int main() {
    double metros, milimetros;

    cout << "Introduza o valor em metros: ";
    cin >> metros;

    milimetros = metros * 1000;

    cout << "Valor em milimetros: " << milimetros << " mm" << endl;

    return 0;
}
