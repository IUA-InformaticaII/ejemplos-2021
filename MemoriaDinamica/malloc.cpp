#include <iostream>

using namespace std;

int main() {
    int *miPuntero;
    int cant;
    cout << "Ingrese cant de numeros" << endl;
    cin >> cant;
    miPuntero = (int *) malloc(cant * sizeof(int));
    if (miPuntero == nullptr) {
        cout << "No tengo tanta memoria!";
        exit(EXIT_FAILURE);
    }
    int i;
    for (i = 0; i < cant; i++) {
        cout << "Ingrese el numero " << i << endl;
        cin >> miPuntero[i];
    }
    for (i = 0; i < cant; i++) {
        cout << "dato " << i << " = " << miPuntero[i];
    }
    free(miPuntero);
}