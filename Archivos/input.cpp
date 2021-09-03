#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream inputFile;
    char texto[200];

    inputFile.open("./Archivos/txt/archivo.txt"); // relativo texto donde se ej el programa

    if(inputFile.is_open()){
        while(!inputFile.eof()){
            inputFile.getline(texto, 200);
            cout << texto << endl;
        }
        inputFile.close();
    }else{
        cout << "no existe el archivo";
    }
    return 0;
}