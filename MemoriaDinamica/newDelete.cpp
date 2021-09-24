#include <iostream>

using namespace std;

int main() {
    int *miPuntero;
    int cant;
    cin >> cant;
    miPuntero = new int[cant];

    for (int i = 0; i < cant; i++) {
        cin >> miPuntero[i];
    }
    for (int i = 0; i < cant; i++) {
        cout << "dato " << i << " = " << miPuntero[i]<< endl;
    }

    delete miPuntero;
}