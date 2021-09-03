#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ofstream oFile;
    int arr[10];

    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }
    oFile.open("./Archivos/txt/binaryFile", ios::binary); // relativo texto donde se ej el programa

    if (oFile.is_open()) {
        oFile.write((char *) arr, sizeof(arr));
        cout << sizeof(arr) << endl;
        oFile.close();
    } else {
        cout << "El archivo no se pudo crear";
    }
    return 0;
}