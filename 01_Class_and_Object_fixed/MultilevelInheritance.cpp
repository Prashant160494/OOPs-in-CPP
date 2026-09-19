#include<iostream>
using namespace std;

class Vehicle{
 public:
   int topSpeed;
   float mileage;
   string fuel;
  
};
class TwoWheeler : public Vehicle{ //child class / derived class
    public:
      bool sunroof;
};
class FourWheeller : public Vehicle{ //child class / derived class
    public:
      
};
class Truck : public FourWheeller{ //child class / derived class
    public:
      
};class Bike : public TwoWheeler{ //child class / derived class
    public:
      
};

int main(){
    Bike b1;
    b1.topSpeed=190;
    b1.mileage=12.5;
    b1.gears=5;
   return 0;
}   