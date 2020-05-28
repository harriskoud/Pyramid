#ifndef SET1_POINT_H
#define SET1_POINT_H

class Point {
private:
    int x, y;
public:
    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }

    Point(){}

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

};

#endif //SET1_POINT_H


