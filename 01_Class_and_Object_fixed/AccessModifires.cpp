#include<iostream>
using namespace std;

class Student{
   public: 
    string name;
    int rollno ;
Student(string n,int r,float m){
    name=n;
    rollno=r;
    marks=m;
}
float getMarks(){ //getter
    return marks;
}
void setMarks(float m){
    marks = m;
}

   private: 
    float marks;
    
};
int main(){
    Student s1("Prashant Kumar", 846,92.2);
    cout<<s1.getMarks()<<endl; //use only for print private member
    s1.setMarks(98.5); //use for change private member value
    cout<<s1.getMarks()<<endl;
    return 0;
    
}

?// Getter and Setter ka use mainly private data member ko safely acces and modify kerne ke liye hota hai
//3 main access modifire : public:  private:  and protected: