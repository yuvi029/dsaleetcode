#include<bits/stdc++.h>
using namespace std;
class vehicle{//parent class
    public:
       int topspeed;
       int mileage;
       string fuel;
       class car : public vehicle{
    public:
      int seats;
       };
};
class bike : public vehicle{//child class
    public:
        int gears;
     };
     int main(){
        bike b1;
        b1.topspeed=180;
        b1.mileage=12.5;
        b1.gears=6;
     }
