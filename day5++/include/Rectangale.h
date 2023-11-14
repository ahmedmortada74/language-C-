#ifndef RECTANGALE_H
#define RECTANGALE_H
#include <iostream>
using namespace std;

class Rectangale
{
private:
    int Leight;
    int Width;
public:
    Rectangale()
    {
        Leight=1;
        Width=1;
    }
    Rectangale(int L, int W)
    {
        Leight= L;
        Width= W;
    }
    void setLeight(int L)
    {
        Leight= L;
    }
     int getLeight()
    {
        return Leight;
    }
    void setWidth(int W)
    {
        Width= W;
         }
         int getwidth()
    {
        return Width;
    }
        int  getCalcArea()
        {
            return Leight*Width;
        }
        void display()
        {
            cout<<getCalcArea();
        }

};

#endif // RECTANGALE_H
