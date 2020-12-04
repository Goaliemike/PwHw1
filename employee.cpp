#include "employee.h"

Employee::Employee(string name, int eId, string title, float salary) : name(name), eId(eId), title(title), salary(salary){
    
}
string Employee::getName(){
    return name;
}
