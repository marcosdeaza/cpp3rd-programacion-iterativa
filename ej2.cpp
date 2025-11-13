//Muestra de números menores impares respecto valor dado
#include <iostream>
using namespace std;

int main(){
    int numero;
    
    //Solicitar al usuario un número entero
    cout << "Introduce un número entero: ";
    cin >> numero;
    
    //Muestra los números impares desde 1 hasta el número esperado
    cout << "Números impares desde 1 hasta " << numero << ":" << endl;
    for (int i = 1; i <= numero; i += 2) {
        cout << i << endl;
    }
    return 0;
}