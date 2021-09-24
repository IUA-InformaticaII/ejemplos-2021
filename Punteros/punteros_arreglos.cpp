#include <iostream>

using namespace std;

int main() {
    int contador2 = 50;
    int arr[3]{1, 2, 3};  // arr == &arr[0]
    int contador = 50;
    int *ptr;


    cout << arr << " == " << &arr[0] << endl;

    cout << arr[0] << " = " << *(arr + 0) << endl;

    cout << arr[1] << " = " << *(arr + 1) << endl;

    cout << arr[2] << " = " << *(arr + 2) << endl;


    cout << contador << contador2 << endl << endl;


    // Recorremos segemento hasta segfault .
    ptr = &contador2;
    while (true) {
        cout << *ptr << endl;
        ptr++;
    }


    return 0;
}