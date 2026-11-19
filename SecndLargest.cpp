#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1; // will store second largest, -1 means not found yet

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // previous largest becomes second largest
            largest = arr[i];        // update largest
        } else if (arr[i] < largest) {
            if (secondLargest == -1 || arr[i] > secondLargest) {
                secondLargest = arr[i]; // update second largest
            }
        }
    }

    if (secondLargest == -1) {
        cout << "There is no second largest element (all elements may be equal)." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}


// C:\Users\ASUS\Desktop\Programming\Internship - Archer IT\C++ Program>g++ -o secndLargest secndLargest.cpp
// C:\Users\ASUS\Desktop\Programming\Internship - Archer IT\C++ Program>secndLargest
// Enter the number of elements: 4
// Enter 4 elements: 44 23 76 87
// The second largest element is: 76