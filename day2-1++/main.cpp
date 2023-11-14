#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    student  S;

  S.Setid(11223344556677);

   cout<< S.Getid();
   S.Setname("Ahmed");

   S.Setage(24);
    S.Setaddress("Qena");
   S.Display();

    return 0;
}
