#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int rollno;
        float CGPa;
};
int main(){
    Student s1;
    s1.name = "Prashant Kumar";
    s1.rollno = 46;
    s1.CGPa = 8.7;

    Student s2;
    s2.name = "Rohit Gupta";
    s2.rollno = 40;
    s2.CGPa = 9.3;

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.CGPa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.CGPa<<endl;

    return 0;
}