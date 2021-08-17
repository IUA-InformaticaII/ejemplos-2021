#include <iostream>
using namespace std;

unsigned long long potencia(unsigned int base, unsigned int exp){
    unsigned long long resultado;
    if(exp == 0){
        return 1;
    }
    resultado = potencia( base, exp - 1 );
    return base * resultado;
}

int main(){
    cout << "2 a la 0:  " << potencia(2,0)  << endl;
    cout << "2 a la 4:  " << potencia(2,4)  << endl;
    cout << "2 a la 8:  " << potencia(2,8)  << endl;
    cout << "2 a la 16: " << potencia(2,16) << endl;
    cout << "2 a la 32: " << potencia(2,32) << endl;
    return 0;
}