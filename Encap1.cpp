#include <iostream>
using namespace std;

class Student {
  private:
    int marks;

    public:
    //setters
    void setMarks(int m) {
      if (m >= 0 && m <= 100) {
        this->marks = m;
      } 
       else {
        cout << "Invalid marks. Please enter a value between 0 and 100." << endl;
      }
    }

    //getters
      int getMarks() { 
        return marks;
      }
  };

  int main() {
    Student s1;
    s1.setMarks(110); // Valid marks
    //s1.setMarks(110); // Invalid marks

    cout<<"Student Marks: "<<s1.getMarks()<<endl;

    return 0;
  };