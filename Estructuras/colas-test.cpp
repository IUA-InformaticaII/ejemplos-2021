#include <string>
#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    Queue<string> miQueue;

    miQueue.enqueue("Hola");
    miQueue.enqueue(" ");
    miQueue.enqueue("Mundo");

    cout << miQueue.dequeue();
    cout << miQueue.dequeue();
    cout << miQueue.dequeue();
    try {
        cout << miQueue.dequeue();
    } catch (int e) {
        cout << "Cola vacia con error " << e << endl;
    }

    miQueue.enqueue("Hola");
    miQueue.enqueue(" ");
    miQueue.enqueue("Mundo");
    return 0;
}