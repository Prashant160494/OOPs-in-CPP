#include<iostream>
using namespace std;

class Loading{
    public:
        void Sum(int a,int b){
            cout<<a+b<<endl;
        }
        void Sum(int a,int b,int c){
            cout<<a+b+c<<endl;
        }   
};

int main(){
    Loading a;
    a.Sum(5,8);
    a.Sum(3,8,9);
}