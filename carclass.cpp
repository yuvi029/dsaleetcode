#include<bits/stdc++.h>
using namespace std;

class car { //car as a new data type
    public:
      string name;
      int price;
      int seats;
      string type;
};  
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}

int main(){
    car c1;
    c1.name="honda city";
    c1.price=130000;
    c1.seats=5;
    c1.type="sedan";

    car c2;
    c2.name="maruti";
    c2.price=120000;
    c2.seats=5;
    c2.type="hatchback";

    car c3;
    c3.name="wagonr";
    c3.price=500000;
    c3.seats=5;
    c3.type="dan";
    
     //print using function
     print(c1);
     print(c2);
     print(c3);
}