// #include<iostream>
// using namespace std;
// // class 1 name Car - Base Class / Super Class
// class Car{
//     public : 
//         // data member
//         string model;
//         int year;
//         float price;
// };
// // New class name : MyCar - Sub Class / Derived Class
// class MyCar:public Car{
//     public :
//         // method member
//         void Input(){
//             cout<<"Enter your model of car : ";cin>>model;
//             cout<<"Enter your year of car  : ";cin>>year;
//             cout<<"Enter your price of car : ";cin>>price;
//         }
//         void output(){
//             cout<<"My Car model : "<<model<<endl;
//             cout<<"My Car year  : "<<year<<endl;
//             cout<<"My Car price : "<<price<<endl;
//         }

// };

// int main(){
//     MyCar car1;
//     car1.Input();
//     car1.output();

//     return 0;

// }


// Multiple Inheritance

// #include<iostream>
// using namespace std;
// // base class
// class Mom{
//     public:
//         string name;
//         float money;
// };
// // base class
// class Dad{
//     public : 
//         string car;
//         float price ;

// };
// // sub class / devrid class
// class Son:public Mom,public Dad{
//     public : 
//         Son(string n,string c,float m,float p){
//             this->car  = c;
//             this->name = n;
//             this->money = m;
//             this->price = p;
//         }
//         void Display(){
//             cout<<"House : "<<name<<endl;
//             cout<<"Car   : "<<car<<endl;
//             cout<<"Money : "<<money<<endl;
//             cout<<"Price : "<<price<<endl;
//         }
// };
// int main(){
//     system("cls");
//     Son obj("Vila","Nissan",10000,8000);
//     obj.Display();

//     return 0;
// }

#include<iostream>
using namespace std;
class Person{
    protected :
        string name;
        int code;
        string sex;
        string DOB;
    public : 
        Person(){
            name = "N/A";
            code = 0;
            sex  = "N/A";
            DOB  = "dd/mm/yyyy";
        }
        Person(string n,string s,string d,int c){
            name = n;
            sex  = s;
            DOB  = d;
            code = c;
        }
        void Input(){
            cout << "|==============================================|" << endl;
            cout << "|                  Input Detail                |" << endl;
            cout << "|==============================================|" << endl;
            cout << "\t Enter the code   : "; cin >> code;
            cout << "\t Enter the name   : "; cin.ignore(); getline(cin,name);
            cout << "\t Enter the gender : "; getline(cin,sex);
            cout << "\t Enter the DOB    : "; getline(cin,DOB);
        }

        void Output(){
            cout << "|==============================================|" << endl;
            cout << "|                 Output Detail                |" << endl;
            cout << "|==============================================|" << endl;
            cout << "\t Code   : " <<code << endl;
            cout << "\t Name   : " <<name << endl;
            cout << "\t Gender : " <<sex  << endl;
            cout << "\t DOB    : " <<DOB  << endl;
        }
};

class Employee : public Person{
    public : 
    void InputDetailOfEmployee(){
        Input();
    }
    void OutputDetailOfEmployee(){
        Output();
    }
};

class Student : public Person{
    public : 
    void InputDetailOfStudent(){
        Input();
    }
    void OutputDetailOfStudent(){
        Output();
    }
};

int main(){
    Person p;
    // base class : Person
    p.Input();
    p.Output();
    // Sub class : Employee : Person
    Employee e;
    e.InputDetailOfEmployee();
    e.OutputDetailOfEmployee();
    Student s;
    s.InputDetailOfStudent();
    s.OutputDetailOfStudent();

    return 0;
}