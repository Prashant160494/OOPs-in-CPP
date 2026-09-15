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
//     // Cricketer c1("Virat Kohli",25000);
//     // Cricketer c2("Rohit Shanrma",18000);
//     int x=4;
//     cout<<&x<<endl;
//     int *p=&x;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     *p=8;
//     cout<<x<<endl;
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
void change(Cricketer* c){
    c->avg=68.0;
}

int main(){
    Cricketer c1("Virat Kohli",25000,55.2);
    // Cricketer c2("Rohit Shanrma",18000);

    Cricketer* p1=&c1;
    cout<<p1->runs<<endl;  //(*p1).runs
    cout<<c1.avg<<endl;
    p1->avg=71.3;
    cout<<p1->avg<<endl;  // (*p1).avg=77.3
    cout<<c1.avg;
    cout<<p1;
    

    return 0;
}