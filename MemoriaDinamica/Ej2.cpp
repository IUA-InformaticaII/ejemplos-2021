/*
 * Crear un programa que pregunte al usuario cuántos
 * caracteres desea introducir, reserve espacio para
 * dicho número de caracteres, le permita al usuario
 * introducirlos desde teclado y luego mostrar por
 * pantalla los valores. Luego, el programa pregunta
 * cuántos caracteres desea agregar a la lista de
 * elementos ya introducida, agrega espacio de memoria
 * y solicita el ingreso de los nuevos valores. Por último,
 * mostrar la lista resultante.
 */

#include <iostream>

char *resize(const char *arreglo, int &tamanio, int agregar);

using namespace std;

int main() {
    int cant_car, cant_agregar;
    char *caracteres;

    cout << "Cuántos caracteres desea introducir?: ";
    cin >> cant_car;
    caracteres = new char[cant_car];
    cout << "Ingrese texto:" << endl;
    cin.ignore();
    cin.getline(caracteres, cant_car);

    cout << caracteres << endl;

    cout << "Cuántos caracteres desea agregar?: ";

    while (getchar() != '\n');

    cin.clear();
    cin >> cant_agregar;

    caracteres = resize(caracteres, cant_car, cant_agregar);


    cout << "Ingrese texto:" << endl;
    cin.getline(caracteres, cant_car);
    cout << caracteres << endl;

    return 0;
}

char *resize(const char *arreglo, int &tamanio, int agregar) {
    char *tmp;
    tmp = new char[tamanio + agregar];
    for (int i = 0; i < tamanio; ++i) {
        tmp[i] = arreglo[i];
    }
    delete arreglo;
    tamanio += agregar;
    return tmp;
}
