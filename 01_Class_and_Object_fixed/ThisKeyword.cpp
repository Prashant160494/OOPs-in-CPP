#include<iostream>
using namespace std;

class Cricketer{
    public:
        string name;
        int runs;

        Cricketer(string name,int runs){
            this->name=name;
            this->runs=runs;

          //  name=name;  
          //  runs=runs;
          // if you run this can give me garbage value for use this Keyword
        }
};
int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Shanrma",18000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;

    return 0;
}