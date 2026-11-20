#include <iostream>
using namespace std;

class Student {
  public:
    Student(){
      cout<<"Constructor called"<<endl;
    }
    void study() {
        cout << "Student is studying" << endl;
    }
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s1; // Object created, constructor called
    s1.study(); // Member function called

    return 0; // Object goes out of scope, destructor called
    
};
