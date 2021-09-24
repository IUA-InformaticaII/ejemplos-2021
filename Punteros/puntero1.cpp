#include <iostream>
using namespace std;

int main(){
    int *miPuntero;
    int num = 5;

    cout << num << endl;
    cout << &num << endl;

    miPuntero = &num ;

    cout << miPuntero << endl;
    cout << *miPuntero << endl;

    return 0;
}