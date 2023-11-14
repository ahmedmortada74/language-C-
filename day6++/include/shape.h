#ifndef SHAPE_H
#define SHAPE_H
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;



class shape
{
 public:
    int dim;
    void setDim(int _D){
         dim = _D;
    }
    int getDim(){
        return dim;
    }
    void calcArea(){
        dim =  0;    //لايوجد ايريا ل shape
    }
};
class Square:public shape
   {
    public:
    int calcArea(){
      return dim*dim;
    }
};

class Circle : public shape {
    public:
    int calcArea(){
      return 3.14*dim * dim;
    }
};
// class Rectangle: public shape {
//    public:
//    int height;
//    Rectangle(int H){
//        height = H;
//    }
//    int calcArea(){
//      return  dim *H;
//    }
//};

#endif // SHAPE_H
