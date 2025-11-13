//Muestra tabla de programación de número dado
#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario un número entero
    cout << "Introduce un número entero: ";
    cin >> numero;

    // Mostrar la tabla de multiplicación
    cout << "Tabla de multiplicación del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
