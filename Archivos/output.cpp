#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ofstream oFile;
    oFile.open("./Archivos/txt/numeros.txt"); // relativo texto donde se ej el programa

    if (oFile.is_open()) {
        for (int i = 0; i < 10; ++i) {
            oFile << "Numero: \t" << i << endl;
        }

        oFile.close();
    } else {
        cout << "El archivo no se pudo crear";
    }
    return 0;
}