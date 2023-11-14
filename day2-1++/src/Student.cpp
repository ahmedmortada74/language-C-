
#include "student.h"
#include <iostream>
#include <string>
using namespace std;

  int student::Getid()
   {
    return id;
   }
     void student::Setid(int _id)
{
    string id_string = to_string(_id);

    if (id_string.length() == 14)
    {
        id = _id;
    }
    else
    {
        cout << "Error The-id\n" << endl;
    }
}
string student::Getname()
{
    if(name == "")
        return  "Error";
    else
        return name;
   }
 void student::Setname(string _name)
 {
    if(_name.length() > 3)
        name = _name;
    else
    {
        cout << "Error Length< 3";
    }
  }
 int student::Getage()
  {
    return age;
  }
   void student::Setage(int _age)
   {
   if (age < 21)
  {
     cout << "Error ";
   }

  else{
     age =_age;
   }
    }
    string student::Getaddress()
   {
    return address;
     }
  void student::Setaddress(string _address)
      {
     address=_address;
   }
 void student::Display()
  {
    cout << "id = " << id << "\n name = " << name << " \nage = " << age << " \naddress = " << address;



}

