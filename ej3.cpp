//Calculo de factorial por bucle while
#include <iostream>
using namespace std;

int main() {
    int numero;
    long long factorial = 1; // Utilizamos long long para manejar grandes números

    // Solicitar al usuario un número entero
    cout << "Introduce un número entero: ";
    cin >> numero;

    // Validar que el número sea no negativo
    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
        return 1; // Salir del programa con un código de error
    }

    int contador = 1; // Inicializar el contador

    // Calcular el factorial usando un bucle while
    while (contador <= numero) {
        factorial *= contador; // Multiplicar el valor actual del contador
        contador++; // Incrementar el contador
    }

    // Mostrar el resultado
    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
