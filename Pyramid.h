#ifndef SET1_PYRAMID_H
#define SET1_PYRAMID_H

#include "Point.h"
#include <math.h>
#include <iostream>

class Pyramid {
    const int defaultValue = 5;
private:
    int x, y, a, h, xPlusA, yPlusA, xPlusAdiv2;
    double surface, volume;
    Point pointA, pointB, pointC, pointD;

    //Checks the input, in case it negative or zero returns default value
    int checkInput(int input) {
        if (input <= 0) {
            input = defaultValue;
        }
        return input;
    }

    double getPyramidSurface() {
        return pow(a, 2) + 2 * a * sqrt((pow(a, 2) / 4) + pow(h, 2));
    }

    double getPyramidVolume() {
        return pow(a, 2) * h / 3;
    }

    double getTotalDistance() {
        //base diagonal
        double baseDiagonal = sqrt(pow(a, 2) + pow(a, 2));
        //edge to top
        double edgeToTop = sqrt(h * h + pow((baseDiagonal / 2), 2));
        return 4 * a + 4 * edgeToTop;
    }

public:
    Pyramid(int x1, int y1, int a1, int h1) {
        x = checkInput(x1);
        y = checkInput(y1);
        a = checkInput(a1);
        h = checkInput(h1);
        xPlusA = x + a;
        yPlusA = y + a;
        xPlusAdiv2 = x + a / 2;
        //create Points 2D clockwise
        pointA = Point(x, y);
        pointB = Point(x, yPlusA);
        pointC = Point(xPlusA, yPlusA);
        pointD = Point(xPlusA, y);

    }

    void setX(int x1) {
        x = x1;
    }

    int getX() {
        return x;
    }

    void setY(int y1) {
        y = y1;
    }

    int getY() {
        return y;
    }

    void setA(int a1) {
        a = a1;
        xPlusA = a + x;
        yPlusA = a + y;
        xPlusAdiv2 = x + a / 2;
    }

    int getA() {
        return a;
    }

    void setSurface(double s) {
        surface = s;
    }

    double getSurface() {
        return getPyramidSurface();
    }

    void setVolume(double v) {
        volume = v;
    }

    double getVolume() {
        return getPyramidVolume();
    }

    void setEdgeLength(double v) {
        volume = v;
    }

    double getEdgeLength() {
        return getTotalDistance();
    }

    Pyramid() {
        x = defaultValue;
        y = defaultValue;
        a = defaultValue;
        h = defaultValue;
        xPlusA = x + a;
        yPlusA = y + a;
        xPlusAdiv2 = x + a / 2;
    };
};

#endif //SET1_PYRAMID_H
