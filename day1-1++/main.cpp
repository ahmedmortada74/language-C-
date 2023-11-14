#include <iostream>

using namespace std;
   struct Employee
{
    string Name ;
    int     Age;
    double Salary;
    string Address;
};
    void fileEmployeeDdata(Employee & Emp)
 {
     cout <<"\nEnter Emp Name:\n";
      cin >>Emp.Name;
     cout <<"\nEnter Emp Age:\n";
     cin >>Emp.Age;
     cout <<"\nEnter Emp Salary:\n";
     cin >>Emp.Salary;
     cout <<"\nEnter Emp Address:\n";
     cin >>Emp.Address;
 }
int main()
{
    struct Employee a;
    fileEmployeeDdata(a);

      string Name ;
    cout << "Employee Name:" << a.Name ;
    int    Age;
    cout << "\tEmployee Age:" << a.Age ;
    double Salary;
    cout << "\tEmployee Salary:" << a.Salary ;
     string Address;
    cout << "\tEmployee Address:" <<a.Address ;


    return 0;
}
