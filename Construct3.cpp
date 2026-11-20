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

    Student(const Student &s) { // Copy constructor
      age = s.age;
      marks = s.marks;
    }

  };

  int main() {
    Student s1(15, 77); // Object created, parameterized constructor called (Polymorphism)
    Student s2 = s1; // Copy constructor called

    cout << "s1 - Age: " << s1.age << ", Marks: " << s1.marks << endl;
    cout << "s2 - Age: " << s2.age << ", Marks: " << s2.marks << endl;

    return 0; // Objects go out of scope, destructors called

  };