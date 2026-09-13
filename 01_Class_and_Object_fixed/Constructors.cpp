#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int rno;
        float gpa;

        Student(){ //Defacult Constructor
            
        }
    
        Student(int r){ //
            rno = r;
        }

        Student(string n,int r){ //Parameterised Constructor
            name = n;
            rno = r;
        }

        Student(string n,int r,float g){ //Parameterised Constructor
            name = n;
            rno = r;
            gpa = g;
        }

        Student(int r,float g, string n){ //Parameterised Constructor
            name = n;
            rno = r;
            gpa = g;
        }
};
int main(){
    Student s1("Pinku",20);
    s1.gpa=8.9;
    Student s2;
    s2.name = "Devansh Diwedi";
    s2.rno = 45;
    s2.gpa = 8.7;

    Student s3("Sanuj",67,8.7);

    Student s4("Rahul",20,8.7);
    

    Student s5("Prashant Kumar",20,8.7);



    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl;

    return 0;
}