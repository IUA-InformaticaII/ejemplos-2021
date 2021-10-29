#include <iostream>
#include "LinkedList.h"

using namespace std;

class Car {
public:
    string marca;
    string modelo;
    string patente;
    int kilometraje;


    bool operator==(const Car &rhs) const {
        return patente == rhs.patente;
    }

    bool operator!=(const Car &rhs) const {
        return !(rhs == *this);
    }

    };

int main() {
    LinkedList<Car> l;
    Car a1;
    a1.marca = "Fiat";
    a1.modelo = "Punto";
    a1.patente = "AB123CD";
    a1.kilometraje = 1234534;

    Car a2 = {"Ford", "EcoEsport", "CD456DE", 123434};

    l.insert(0, a1);
    l.insert(0, a2);
    l.insert(0, {"VW", "Gol", "CD496DE", 89734});

    Car tmp = l.find({"", "", "CD456DE", 0});

    cout << tmp << endl;


    return 0;
}