//Calcular la potencia de un número dado la base y el exponente
#include <iostream>
using namespace std;

int main() {
    double base;
    int exponente;
    double resultado = 1.0; // Inicializamos resultado a 1 (cualquier número elevado a 0 es 1)

    // Solicitar al usuario la base y el exponente
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;

    // Comprobar si el exponente es negativo
    int contador = 0; // Inicializamos el contador
    if (exponente < 0) {
        // Calcular potencia para exponente negativo
        while (contador > exponente) {
            resultado *= (1 / base); // Multiplicamos el inverso de la base
            contador--;
        }
    } else {
        // Calcular potencia para exponente positivo
        while (contador < exponente) {
            resultado *= base; // Multiplicamos por la base
            contador++;
        }
    }

    // Mostrar el resultado
    cout << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}
