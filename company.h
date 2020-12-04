#include <vector>
#include "employee.h"

class Company{
    private:
    vector<Employee> employees;

    public:
    void addEmployee(Employee e);
    int getEmployeeCount();
};
