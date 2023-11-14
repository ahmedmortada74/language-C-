#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Shape {
    public:
    int height;
    Rectangle(int _height){
        height = _height;
    }
    int calcArea(){
      return  dim * height;
    }
};

#endif // RECTANGLE_H
