#include <iostream>
#include "employee.h"
#include "company.h"
using namespace std;

int main(){
    //instantiates employee members
    Employee e1 = Employee("mike", 0101, "CEO", 1000.00);
    Employee e2 = Employee("rich", 0021, "manager", 500.00);
    Employee e3 = Employee("adam", 0001, "janitor", 200.00);
    //get employee names
    cout << e1.getName();

    //instance of class Company. call method using employee intsants as parameter, then add that to vector in addEmployee()
    Company c;
    c.addEmployee(e1);
    c.addEmployee(e2);
    c.addEmployee(e3);

    //prints employeeCount after adding to the list above
    cout<< "Employees: " << c.getEmployeeCount();

    return 0;
}
