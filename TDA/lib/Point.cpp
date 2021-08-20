#include <cmath>
#include "Point.h"

Point::Point() {
    x = 0;
    y = 0;
};

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
};

double Point::distancia(Point p) {
    int dX = x - p.x;
    int dY = y - p.y;
    return sqrt(dX * dX + dY * dY);
}
