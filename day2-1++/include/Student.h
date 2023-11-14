#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class student
{
        string id ;
     string name;
   int    age;
      string address;
   public :

       void Setid(int _id);
       int Getid();

       void Setname(string _name);
        string Getname();
       int Getage();
       void Setage(int _age);
//         int Getage();
        string Getaddress();
       void Setaddress(string _address);
//       string Getaddress();

       void Display();
};

#endif // STUDENT_H
