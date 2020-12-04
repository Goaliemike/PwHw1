#include <string>
using namespace std;

class Employee{
    private:
    string name;
    int eId;
    string title;
    float salary;

    public:
    Employee(string name, int eId, string title, float salary);
    string getName();
    int getEId();
    string getTitle();
    float getSalary();
};
