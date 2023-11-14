#ifndef PICTURE_H
#define PICTURE_H
#include <iostream>
using namespace std;

class Picture
{
   public:     //استخدام بابلك  لاستدعاء الكلاس
       Square sq;
       Rectangale* rect;
       //Circle ci;
       void setSquare(Square s)
       {
           sq =s;
       }                                         // استد كلاس
     Square  getSquare()
       {
           return sq;
       }
       //Aggr
        void setRectangale(Rectangale* r)
        {
            rect =r;
        }
        Rectangale* getRectangale()
        {
            return rect;
        }
      void Circle(Circle R )
      {
        R.getCalcArea();
      }
//      double calcArea()
//      {
//          //double R= Circle.getRadius();
//           return 3.14 * Radius * Radius;
//      }
//

};

#endif // PICTURE_H
