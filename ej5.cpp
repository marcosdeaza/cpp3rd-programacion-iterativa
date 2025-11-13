//Calcular el doble y el triple de un número ingresado repetidamente
#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        // Solicitar al usuario un número
        cout << "Introduce un número (negativo para salir): ";
        cin >> numero;

        // Calcular y mostrar el doble y el triple si el número no es negativo
        if (numero >= 0) {
            int doble = numero * 2;
            int triple = numero * 3;
            cout << "El doble de " << numero << " es: " << doble << endl;
            cout << "El triple de " << numero << " es: " << triple << endl;
        }
    } while (numero >= 0); // Continuar hasta que se introduzca un número negativo

    return 0;
}