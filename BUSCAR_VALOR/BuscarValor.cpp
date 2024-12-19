#include <iostream>
using namespace std;

int main() {
    int array[15];
    int valor_buscado;
    bool encontrado = false;

    cout << "Ingresa 15 números:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> array[i];
    }
    
    cout << "Ingresa el valor que deseas buscar: ";
    cin >> valor_buscado;

    // Buscar el valor en el array
    for (int i = 0; i < 15; i++) {
        if (array[i] == valor_buscado) {
            encontrado = true;
            break;  // Si el valor se encuentra, salir del ciclo
        }
    }

    // Mostrar si el valor existe o no en el array
    if (encontrado) {
        cout << "El valor " << valor_buscado << " existe en el array." << endl;
    } else {
        cout << "El valor " << valor_buscado << " no existe en el array." << endl;
    }

    return 0;
}
