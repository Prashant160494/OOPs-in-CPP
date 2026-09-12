#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        int price;
        int seat;
        string type;

       
};
void print(Car c){
        cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.type<<endl;
    } 

// void change(Car c){ //Pass by value
//     c.name = "Audi A8";
// } 

void change(Car& c){ //Pass by Reference
    c.name = "Audi A8";
}    
int main(){
    Car c1;
    c1.name = "Honda Suzuki";
    c1.price = 600000;
    c1.seat = 5;
    c1.type = "Sedan";

    print(c1);
    change(c1);
    print(c1);

    return 0;
}    