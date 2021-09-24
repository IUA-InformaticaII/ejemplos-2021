#include <iostream>

using namespace std;

int main() {
    int cont1, cont2, cont3;

    int *arr[3]; // Arreglo de punteros

    arr[0] = &cont1;
    arr[1] = &cont2;
    arr[2] = &cont3;

    int contador = 5;
    int *ptr1;
    int **ptr;

    ptr1 = &contador;
    ptr = &ptr1;

    cout << **ptr << endl;

    ptr = arr;

    return 0;
}