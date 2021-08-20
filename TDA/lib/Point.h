#ifndef INFOII_POINT_H
#define INFOII_POINT_H


class Point {
public:
    int x;
    int y;

    Point();

    Point(int valX, int valY);

    double distancia(Point p);
};


#endif //INFOII_POINT_H
