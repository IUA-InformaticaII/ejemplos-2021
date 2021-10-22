#include <string>
#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack<string> miPila;
    miPila.push("hola");
    miPila.push(" ");
    miPila.push("mundo");

    cout << miPila.pop();
    cout << miPila.pop();
    cout << miPila.pop() << endl;
    try {
        cout << miPila.pop();
    }catch (...){
        cout << "Pila vacia" << endl;
    }

    return 0;
}