#include<iostream>
using namespace std;

int main() {
    int units;
    double bill = 75;

    cout <<"Enter Unit: ";
    cin>>units;

    if (units<=100){
        bill = bill + units * 4;
    }
    else if(units>=300){
        bill = bill + 100 * 4;
        bill = bill + (units-100)*6;
    }
    else{
        bill = bill + 100 * 4;
        bill = bill + 200 * 6;
        bill = bill + (units-300)*8;
    }
    cout<<"Total Bill Rs.: "<<bill;

    return 0;

}