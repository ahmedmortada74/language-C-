#ifndef SQUARE_H
#define SQUARE_H


#include <iostream>
using namespace std;

class square {
    private:
        int side;
    public:
        void setSide(int s) {
            side = s;
        }
        int getSide() {
            return side;
        }
        int area() {
            return side * side;
        }
};

class Rectangle {
    private:
        int length;
        int width;
    public:
        void setLength(int l) {
            length = l;
        }
        void setWidth(int w) {
            width = w;
        }
        int getLength() {
            return length;
        }
        int getWidth() {
            return width;
        }
        int area() {
            return length * width;
        }
};

class Circle {
    private:
        double radius;
    public:
        void setRadius(double r) {
            radius = r;
        }
        double getRadius() {
            return radius;
        }
        double area() {
            return 3.14159 * radius * radius;
        }
};

class Picture {
    private:
        Square square;
        Rectangle rectangle;
        Circle circle;
    public:
        void setSquare(Square s) {
            square = s;
        }
        void setRectangle(Rectangle r) {
            rectangle = r;
        }
        void setCircle(Circle c) {
            circle = c;
        }
};
;

#endif // SQUARE_H
