#include <iostream>

using namespace std;

int main() {
    double peso, gravidade, massa;

    cout << "Introduza o peso: ";
    cin >> peso;

    cout << "Introduza a aceleracao da gravidade: ";
    cin >> gravidade;

    massa = peso / gravidade;

    cout << "A massa do corpo e: " << massa << endl;

    return 0;
}
