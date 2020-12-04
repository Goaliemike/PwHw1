#include "company.h"

void Company::addEmployee(Employee e){
    employees.push_back(e);
}

int Company::getEmployeeCount(){
    return employees.size();
}
