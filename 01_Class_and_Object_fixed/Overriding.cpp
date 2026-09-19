#include<iostream>
using namespace std;

class Scooty{
 public:
   int topSpeed;
   float mileage;
   virtual void sound(){
    cout<<"Whroom Whroom"<<endl;
   }
};
class Bike : public Scooty{ //child class / derived class
    public:
     int gears;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    } 
} ;                       
    class SuperBike : public Scooty{ //child class / derived class
    public:
     
    void sound(){
        cout<<"Zhroom Zhroom"<<endl;
    } 
};
int main(){
    Scooty* b=new Bike();
    b->sound();
    Scooty* c=new SuperBike();
    c->sound();
   return 0;
} 