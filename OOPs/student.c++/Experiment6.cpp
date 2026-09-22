#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    Student() {
        name = "Unknown";
        cout << "Default Constructor Called: Name set to " << name << endl;
    }

    Student(string s) {
        name = s;
        cout << "Parameterized Constructor Called: Name set to " << name << endl;
    }

    Student(const Student &obj) {
        name = obj.name;
        cout << "Copy Constructor Called: Name copied as " << name << endl;
    }

    ~Student() {
        cout << "Destructor Called: Object for " << name << " destroyed" << endl;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    cout << "--- Creating Object 1 ---" << endl;
    Student s1;

    cout << "\n--- Creating Object 2 ---" << endl;
    Student s2("Rahul");

    cout << "\n--- Creating Object 3 ---" << endl;
    Student s3 = s2;

    cout << "\n--- Displaying Details ---" << endl;
    s1.display();
    s2.display();
    s3.display();

    cout << "\n--- Exiting Main ---" << endl;
    return 0;
}