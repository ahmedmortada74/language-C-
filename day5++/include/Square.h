#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
using namespace std;

class Square
{
 private:
    int Height;

public:
    Square()
    {
        Height=1;                                                  //عشان ايررور الكول  قيمة ديفولت
    }
    Square(int s)
     {
     Height= s;
    }
    void setHeight(int s)
    {
        Height = s;
    }
    int getHeight(){
        return Height;
    }
    void display()
    {
        cout <<getCalcArea() ;
        cout<<"\n";
    }
    int getCalcArea()
    {
        return Height * Height;
    }
};

#endif // SQUARE_H
