// #include<iostream>
// using namespace std;

// class Cricketer{
//     public:
//         string name;
//         int runs;
//         float avg;

//         Cricketer(string name,int runs,float avg){
//             this->name=name;
//             this->runs=runs;
//             this->avg=avg;    
          
//         }
// };
// int main(){
//     // Cricketer c1("Virat Kohli",25000,55.9);
//     // Cricketer c2("Rohit Shanrma",18000,44.6);

//     // int x=6;
//     // int* ptr=&x;
//     // cout<<ptr<<endl;
//     // cout<<*ptr<<endl;

//     int* p=new int(5); // memory allocate at runtime
//     cout<<p<<endl;
//     cout<<*p<<endl;
    
//     return 0;
// }



#include<iostream>
using namespace std;

class Cricketer{
    public:
        string name;
        int runs;
        float avg;

        Cricketer(string name,int runs,float avg){
            this->name=name;
            this->runs=runs;
            this->avg=avg;    
          
        }
};
int main(){
    Cricketer c1("Virat Kohli",25000,55.9);
    Cricketer* c2= new Cricketer("Rohit Shanrma",18000,44.6);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<(*c2).name<<" "<<c2->name<<endl;

    return 0;
}  