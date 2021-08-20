#include <iostream>
#include "lib/Point.h"

int main() {
    Point pepe;
    Point juan(1, 1);

    pepe.x = 3;
    pepe.y = 10;
    juan.x = 5;

    std::cout << pepe.x << std::endl;
    std::cout << pepe.distancia(juan) << std::endl;

    return 0;
}

