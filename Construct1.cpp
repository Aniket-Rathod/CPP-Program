#include <iostream>
using namespace std;

class Student {
public:
    int age;
    int marks;

    Student() {
      age=15;
      marks=77;
        
    }
};

int main() {
    Student s1; // Object created, constructor called   // Default constructor is called here 
    
    cout << "Age: " << s1.age << ", Marks: " << s1.marks << endl;
    

    return 0; // Object goes out of scope, destructor called
}