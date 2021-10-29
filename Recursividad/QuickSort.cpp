#include  <iostream>
#include <algorithm>

using namespace std;
#define TAM 7

class Car {
public:
    string marca;
    string modelo;
    string patente;
    int kilometraje;

    bool operator<(const Car &rhs) const {
        return marca < rhs.marca;
    }

    bool operator>(const Car &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Car &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Car &rhs) const {
        return !(*this < rhs);
    }

    friend ostream &operator<<(ostream &os, const Car &car) {
        os << "marca: " << car.marca << "\tmodelo: " << car.modelo << "\tpatente: " << car.patente;
        return os;
    }
};

template<typename T>
void quicksort(T a[], int primero, int ultimo) {
    int i, j;
    T pivote, tmp;
    pivote = a[primero];
    //pivote = a[(primero + ultimo) / 2];
    i = primero;
    j = ultimo;

//    // para mostrar
//    for (int i = 0; i < TAM; i++)
//        cout << a[i] << " ";
//    cout << " - " << primero << " " << pivote << " " << ultimo << endl;

    do {
        while (a[i] < pivote)
            i++;
        while (a[j] > pivote)
            j--;

        if (i <= j) {
            tmp = a[i];  // Swapping
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j)
        quicksort(a, primero, j); // Llamada recursiva
    if (i < ultimo)
        quicksort(a, i, ultimo); // Llamada recursiva
}

int main() {

    Car autos[] = {
            {"Fiat", "Punto",   "ABC123", 43000},
            {"Ford", "Mondeo",  "ZXC123", 43000},
            {"WV",   "Poilo",   "ABC432", 43000},
            {"Fiat", "Chronos", "ATC123", 43000},
            {"Fiat", "Strada",  "ABX123", 43000},
            {"BMW",  "234",     "ABC823", 43000},
            {"Fiat", "Chronos", "ABC003", 43000},
    };

    //quicksort<Car>(autos, 0, TAM - 1);
    sort(autos, autos + 7);
    for (int i = 0; i < TAM; i++)
        cout << autos[i] << endl;
    return 0;
}