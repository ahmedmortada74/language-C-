#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class Fraction
{
private :
    int Numerator;
    int Denominator;
public:

    Fraction(int _Num,int _Denom)
    {
        Numerator = _Num;
        Denominator = _Denom;
    }
    bool SetNumerator(int _Num)
    {
        Numerator=_Num;
        return Numerator ;
    }
    int GetNumerator()
    {
        return Numerator;
    }
    bool SetDenominator(int _Denom)
    {
        if (_Denom !=0)
        {
            Denominator = _Denom;
            return true;
        }
        else   //cout << "error"
            return false;
    }
    int GetDenominator()
    {
        return Denominator;
    }
    void Display()
    {
        cout << Numerator<< "/" << Denominator<< "\n";
    }
       Fraction()
       {
           Numerator=1;
           Denominator=1;
       }
//    Fraction add(Fraction Fr1,Fraction Fr2)
//    {
//        Fraction F1;
//        F1.Numerator = Fr1.Numerator *Fr2.Denominator+Fr1.Denominator*Fr2.Numerator ;
//        F1.Denominator = Fr1.Denominator*Fr2.Denominator;
//
//        cout << F1.Numerator << "/"<< F1.Denominator <<"\n";
//        return F1;
//    }
//    Fraction sub(Fraction Fr1,Fraction Fr2)
//    {
//        Fraction F2;
//        F2.Numerator = Fr1.Numerator * Fr2.Denominator-Fr1.Denominator*Fr2.Numerator ;
//        F2.Denominator = Fr1.Denominator*Fr2.Denominator;
//
//        cout <<F2.Numerator << "/" << F2.Denominator<< "\n";
//        return F2;
//    }
      //+
                 //******************************************************//
//   Fraction operator+(Fraction Fract)
//{
//      Fraction New_Fract;
//        New_Fract.Numerator = this->Numerator * New_Fract.Denominator + this->Denominator * New_Fract.Numerator;
//      New_Fract.Denominator = this->Denominator * New_Fract.Denominator;
//    return New_Fract ;
//   cout<<New_Fract.Numerator<< "+"<<New_Fract.Denominator<< endl;
//}
                 //*************************************************//
//      pre++
      Fraction operator ++()
      {
         Numerator= Numerator +Denominator;
           return *this;
           cout <<"\n Pre Fract 1:\n ";

      }
        //**********************************************//
      //post++
      Fraction operator++(int)  //الاختلاف بين pre & post
      {
        Fraction temp= *this; //trans value nemm & demo
         Numerator= Numerator +Denominator;
//           return *this; //+1
          return temp;
          cout <<"\n Post Fract 2:\n ";
      }
          ************************************************//
//      ==
         bool operator == (Fraction Fract)
      {
          return (Fract.Denominator== this->Denominator)&&(Fract.Numerator==this->Numerator);
      }
        //***********************************************//

};


#endif // FRACTION_H
