#include <iostream>

using namespace std;

int main() {
    int **miMatriz;
    int filas, columnas;
    cin >> filas;
    cin >> columnas;
    miMatriz = new int *[filas];
    // Debería vefiricar que miMatriz no es NULL

    for (int i = 0; i < filas; i++) {
        miMatriz[i] = new int[columnas];
        // Debería vefiricar que miMatriz[i] no es NULL
        for (int j = 0; j < columnas; ++j) {
            miMatriz[i][j] = (i + 1) * j;
        }
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; ++j) {
            cout << miMatriz[i][j] << " ";
        }
        cout << endl;
    }


    // Lo mismo con el Free, debo liberar cada malloc que hice.
    for (int i = 0; i < filas; i++) {
        delete[] miMatriz[i]; // o free(miMatriz[i]);
    }
    delete[] miMatriz; // o free(miMatriz);
}