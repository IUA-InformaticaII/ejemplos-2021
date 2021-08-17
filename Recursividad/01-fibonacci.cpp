#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned n) {
    if (n == 0 || n == 1) {
        return n;
    }
    unsigned long fib1 = fibonacci(n - 1);
    unsigned long fib2 = fibonacci(n - 2);

    return fib1 + fib2;
}

int main() {
    for (int i = 0; i < 10; ++i) {
        cout << "fib: " << i << "  " << fibonacci(i) << endl;
    }
    return 0;
}