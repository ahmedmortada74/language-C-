#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "shape.h"
using namespace std;

int main() {
   Square Sq;
    Sq.setDim(6);
    cout << Sq.calcArea();
    cout<< "\n";
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&
    Circle C;
    C.setDim(3);
    cout << C.calcArea();
    //&&&&&&&&&&&&&&&&&&&&&&&&&&&
//   Rectangle Rect;
//    Rect.setDim(2);
//    cout << Rect.calcArea();



    return 0;
}
