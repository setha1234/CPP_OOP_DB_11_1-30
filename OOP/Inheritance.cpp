#include<iostream>
using namespace std;
// class 1 name Car - Base Class / Super Class
class Car{
    public : 
        // data member
        string model;
        int year;
        float price;
};
// New class name : MyCar - Sub Class / Derived Class
class MyCar:public Car{
    public :
        // method member
        void Input(){
            cout<<"Enter your model of car : ";cin>>model;
            cout<<"Enter your year of car  : ";cin>>year;
            cout<<"Enter your price of car : ";cin>>price;
        }
        void output(){
            cout<<"My Car model : "<<model<<endl;
            cout<<"My Car year  : "<<year<<endl;
            cout<<"My Car price : "<<price<<endl;
        }

};

int main(){
    MyCar car1;
    car1.Input();
    car1.output();

    return 0;

}