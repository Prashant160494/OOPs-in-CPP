#include<iostream>
using namespace std;

class Scooty{
 public:
   int topSpeed;
   float mileage;
   
 private:
   int bootspace; 
};
class Bike : public Scooty{ //child class / derived class
    public:
     int gears;
};
int main(){
    Bike b1;
    b1.topSpeed=190;
    b1.mileage=12.5;
    b1.gears=5;
   return 0;
}   