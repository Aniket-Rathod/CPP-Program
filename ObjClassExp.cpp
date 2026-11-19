
#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:

    // Properties / Attributes
    string name;
    string dept;
    string subject;

    // Member functions / methods
    void changeDept(string newDept) {
        dept = newDept;
    }

    // SETTER
    void setSalary(double s) {
        salary = s;
    }

    // GETTER
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;

    t1.name = "Rahul";
    t1.subject = "Basic Electrical";
    t1.dept = "ENTC";
    t1.setSalary(50000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
