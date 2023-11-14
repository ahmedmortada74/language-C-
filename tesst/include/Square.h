#ifndef SQUARE_H
#define SQUARE_H


class Square :
     public Shape {
    public:
    int calcArea(){
      return dim * dim;
    }
};

#endif // SQUARE_H
