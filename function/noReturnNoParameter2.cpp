#include<iostream>
using namespace std;
// global variable
string name;
char gender;
float salary,rate;
double total;
int id,hour;

void InputEmployee(){
    cout<<"\033[32m===================================[ Input Detail Employee ]======================================="<<endl;
    cout<<"Enter employee name :";
    cin>>name;
    cout<<"Enter employee id :";
    cin>>id;
    cout<<"Enter employee gender (M/F) :";
    cin>>gender;
    cout<<"Enter employee hourly wage :";
    cin>>rate;
    cout<<"Enter number of hours worked :";
    cin>>hour;
    cout<<"Enter employee salary :";
    cin>>salary;

}

float CalculateSalary(){
    total = salary + (rate * hour);
}

void Header(){
    cout<<"\033[33m---------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                           Employee Information                                    "<<endl;
    cout<<"---------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Name\tID\tGender\tRate\tHour\tSalary\tTotalSalary"<<endl;
}

void DisplayEmployee(){
    CalculateSalary();
    cout<<name<<'\t'<<id<<'\t'<<gender<<'\t'<<rate<<'\t'<<hour<<'\t'<<salary<<'\t'<<total<<endl;
    cout<<"---------------------------------------------------------------------------------------------------\033[0m"<<endl;
}

int main(){
    system("cls");
    InputEmployee();
    Header();
    DisplayEmployee();
    

    return 0;
}