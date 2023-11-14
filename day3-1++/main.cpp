#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction F ;
    int N;
    int D;

    cout << "Enter Numerator ";
    cin >> N;
      F.SetNumerator(N);

        cout << "Enter Denominator ";
        cin >>D;
      F.SetDenominator(D);
      while(N==0)
      {
          cout<<"RE Enter Denominator";
          cin>> D;
          F.SetNumerator(N);

      }

//       Fraction Z (5,9);
//   Z.Display ();
//    F.Display ();
//    Fraction S;
//       Fraction M(5,8);
//       S.add(M,Z);
////    M.sub(M,Z);
//**************************************************
      Fraction Z(1,1);
     Z.Display ();
    Fraction New_Fract =F+Z;               //في حالة تشغيل  برنامج operator+
    New_Fract.Display();
//**********************************************************
        Fraction Z(9,7);
        Fraction X=++F;                    ////في حالة تشغيل  برنامج operator++
         X.Display ();
         //*****************************************************
          Fraction K(2,5);
        Fraction U=F;
         U.Display ();
         //************************************************
         if(F==U)
         {
             cout<<"EQUAL";
         }
         else{
            cout<<"NOT EQUAL";
         }






//     Fraction Fract1, Fract2;
//     Fraction Fract3 = Fract1+Fract2;
//    std::cout<<Fract3.Numerator<< "+"<<Fract3.Denominator<< std::endl;
    return 0;
}
