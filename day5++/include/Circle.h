#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class Circle
{
   private:
    double Radius;

   public:
       Circle()
       {
           Radius=1;
       }
        Circle(double R)
        {
             Radius= R;
        }
   void setRadius(double R) {
        Radius = R;
    }
    double getRadius()
    {
        return Radius;
    }
    double  getCalcArea()
    {
        return 3.14*Radius*Radius;
    }
   void display()
    {
        cout<<getCalcArea();
    }


};

#endif // CIRCLE_H
