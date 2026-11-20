#include <iostream>
using namespace std;

class Student {
public:
    int age;
    int marks;

    Student(int a, int m) {
      age=a;
      marks=m;

    };

    void display() {
      cout << "Age: " << age << ", Marks: " << marks << endl;
    }
        
  };


int main() {
    Student s1(15, 77); // Object created, parameterized constructor called
    s1.display(); // Member function called

    Student s2(16, 88); // Another object created, parameterized constructor called
    s2.display(); // Member function called

    return 0; // Object goes out of scope, destructor called
}