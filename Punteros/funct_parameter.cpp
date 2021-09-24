#include <iostream>
using namespace std;

void miFuncion(int a, int *b, int &c) {
    a++;
    (*b)++;
    c++;
    cout << a << " " << *b << " " << c << endl;
}

int main() {
    int x = 2;
    int y = 4;
    int z = 6;

    miFuncion(x, &y, z);
    cout << x << " " << y << " " << z << endl;
}