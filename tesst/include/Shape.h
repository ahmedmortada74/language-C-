#ifndef SHAPE_H
#define SHAPE_H


  class Shape{
    public:
    int dim;
    void setDim(int _dum){
         dim = _dum;
    }
    int getDim(){
        return dim;
    }
    void calcArea(){
        dim =  0;
    }
  };
#endif // SHAPE_H
