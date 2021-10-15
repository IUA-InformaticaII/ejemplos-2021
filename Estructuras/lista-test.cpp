#include <iostream>
#include "LinkedList.h"

using namespace std;

class Car{
public:
    string marca;
    string modelo;
    string patente;
    int kilometraje;

};

int main() {
    LinkedList<string> l;
    LinkedList<int> lint;
    lint.insert(0, 5);

    try {
        l.insert(0, "hola");
        l.insert(0, "chau");
        l.insert(0, "casa");
        l.insert(3, "asdf");
        l.insert(300, "intenté");
        cout << "Lo intenté " << endl;
    } catch (int n) {
        cout << "No se pudo insertar en la lista. " << n << endl;
    }

    cout << l.find("casa")<< endl;

    try {
        for (int i = 0; i < 20; ++i) {
            cout << "pos: " << i << " - " << l.get(i) << endl;
        }
    } catch (int n) {
        cout << " no se encontró dicha pos.  " << n << endl;
    }

    return 0;
}