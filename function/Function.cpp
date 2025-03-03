// * Function :
/*
    + Non Return Function
        - void nameFunction()
        1 - Non parameter
            - void nameFunction()
        2 - Has Parameter
            - void nameFunction(parameter1, parameter2,...)

* None return function Syntax :

    + Non return function non parameter
        syntax:
            void function_name()
            {
                function body
            }
    - None return function Has parameter
        syntax:
            void function_name(parameter1,parameter2,.....)
            {
                function body
            }


    + Return Function
        - dataType nameFunction()
        - int nameFunction()
        - long nameFunction()
        - char nameFunction()
        - char * nameFunction()
        - float nameFunction()
        - double nameFunction()
        1 - Non Parameter
            - int nameFunction(null)
        2 - Has Parameter
            - int nameFunction(int parameter1, int parameter2,...)

* return function
    + Return function none parameter
        syntax:
            int function_name()
            {
                function body
                return result;
            }
            char * function_name()
            {
                function body
                return "result";
            }
            double function_name()
            {
                function body
                return result;
            }
    + return function Has parameter
        syntax:
            int function_name(int a,int b)
            {
                function body
                return result;
            }
            char * function_name(char *str)
            {
                function body
                return "result";
            }
            double function_name(double a,double b)
            {
                function body
                return result;
            }

*/

//  * Example Function : Non Function

//  - Non Return Function with Non Parameter

/*

#include<iostream>
using namespace std;

void HelloWorld(){
    cout<<"Hello World!";
}

int main(){
    HelloWorld();
    return 0;
}


*/

//  - Non Return Function with Parameter

/*

#include<iostream>
using namespace std;

void Add(int num1, int num2){
    int result = num1 + num2; // => local variables
    cout<<"Sum : "<<result<<endl;
}

int main(){
    Add(5, 10);
    return 0;
}

*/

// * Example Function : Return Function

// - Return Function Non Parameter

/*

#include<iostream>
using namespace std;

int Add(){
    int num1 = 5;
    int num2 = 10;
    return num1 + num2;
}

int main(){
    int sum = Add();
    cout<<"Sum : "<<sum<<endl;
    return 0;
}

*/

// - Return Function Has Parameter

/*

#include<iostream>
using namespace std;

int Add(int num1, int num2){
    return num1 + num2;
}

int main(){
    int sum = Add(5, 10);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}

*/

// * Exercise Function


// code
// name
// size
// price
// qty 
// total
// dis 
// payment
// charge to reil 
// charge to dollar 
// void input()
// void output()
// void header()
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int code,qty;
// string name,size;
// double price,total,dis,payment,c_reil;
// void Input()
// {
//     cout<<"===============[INPUT]==============="<<endl;
//     cout<<"Enter Code  : ";cin>>code;
//     cout<<"Enter Name  : ";cin>>name;
//     cout<<"Enter Size  : ";cin>>size;
//     cout<<"Enter Qty   : ";cin>>qty;
//     cout<<"Enter Price : ";cin>>price;

//     total = price * qty;
//     dis = (total * 10)/100;
//     payment = total - dis;
// }
// void Display()
// {
//     cout<<setw(12)<<code<<
//     setw(12)<<name<<
//     setw(12)<<size<<
//     setw(12)<<qty<<
//     setw(12)<<price<<
//     setw(12)<<total<<
//     setw(12)<<dis<<
//     setw(12)<<payment<<endl;
// }
// void Header()
// {
//     cout<<setw(12)<<"code"<<
//     setw(12)<<"name"<<
//     setw(12)<<"size"<<
//     setw(12)<<"qty"<<
//     setw(12)<<"price"<<
//     setw(12)<<"total"<<
//     setw(12)<<"dis"<<
//     setw(12)<<"payment"<<endl;
// }
// void MENU()
// {
//     cout<<"=================[MENU]================="<<endl;
//     cout<<"[1 - INPUT      ]"<<endl;
//     cout<<"[2 - OUPTUT     ]"<<endl;
//     cout<<"[3 - PAY KHR    ]"<<endl;
//     cout<<"[4 - PAY DOLLAR ]"<<endl;
//     cout<<"[5 - Exit       ]"<<endl;
// }
// int main()
// {
//     int op;
//     do{
//         MENU();
//         cout<<"Please select one option : ";cin>>op;
//         switch(op)
//         {
//             case 1:{
//                 Input();
//             }break;
//             case 2:
//             {
//                 Header();
//                 Display();
//             }break;
//             case 3:{
//                 c_reil = payment * 4100;
//                 cout<<"Payment KHR : "<<c_reil<<endl;
//             }break;
//             case 4:{
//                 cout<<"Payment : "<<payment<<endl;
//             }break;
//         }
//     }while(op!=0);
//     return 0;
// }

// * Exercise Function : Return Function

//#include <iostream>
// using namespace std;
// float Sum(float a, float b)
// {
//     return a + b;
// }
// int main()
// {
//     float x,y;
//     cout<<"Enter X and Y : ";cin>>x>>y;
//     float result = Sum(x,y);
//     cout<<"result = "<<result<<endl;
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// #include <windows.h>
// using namespace std;
// // global variable
// int code;
// string name,size;
// double qty,price;
// void AddProduct()
// {
//     cout<<"================[AddProduct]================"<<endl;
//     cout<<"Enter Code  : ";cin>>code;
//     cout<<"Enter Name  : ";cin.ignore();getline(cin,name);
//     cout<<"Enter Price : ";cin>>price;
//     cout<<"Enter Qty   : ";cin>>qty;
// }
// double Total()
// {
//     return qty * price;
// }
// double Dis()
// {
//     return (Total() >= 1 && Total() <= 20)? (Total() * 10)/100 :
//     (Total() > 20 && Total() <= 50)? (Total() * 20)/100 :(Total() * 30)/100;
// }
// double Tax()
// {
//     return (Total() * 10)/100;
// }
// double Payment()
// {
//     return Total() + Tax() - Dis();
// }
// void Display()
// {
//     cout<<setw(12)<<code<<
//     setw(12)<<name<<
//     setw(12)<<price<<
//     setw(12)<<qty<<
//     setw(12)<<Total()<<
//     setw(12)<<Dis()<<
//     setw(12)<<Tax()<<
//     setw(12)<<Payment()<<endl;
// }
// void Header()
// {
//     cout<<setw(12)<<"code"<<
//     setw(12)<<"name"<<
//     setw(12)<<"price"<<
//     setw(12)<<"qty"<<
//     setw(12)<<"Total"<<
//     setw(12)<<"Dis"<<
//     setw(12)<<"Tax"<<
//     setw(12)<<"Payment"<<endl;
// }
// double KHR()
// {
//     return Payment() * 4100;
// }
// double Dollar()
// {
//     return Payment();
// }
// void Loadings()
// {
//     system("Color a");
//     // char x =219;
//     // char x =178;
//     // char x =175;
//     char x =177;
    
//     cout<<"\n""\t\t\t\t        LOADING.....\t\t\t\t\n";
//     cout<<"\t\t\t"; for(int i=0;i<40;i++)
//     {
//     cout<<x;
//     Sleep(80);
//     }
//     system("cls");
// }
// int main()
// {
//     Loadings();
//     int op;
//     do{
//         cout<<"[ 1 - AddProducts  ]"<<endl;
//         cout<<"[ 2 - Display      ]"<<endl;
//         cout<<"[ 3 - Pay Reil     ]"<<endl;
//         cout<<"[ 4 - Pay Dollar   ]"<<endl;
//         cout<<"Please select one option : ";cin>>op;
//         switch(op)
//         {
//             case 1:{
//                 AddProduct();
//             }break;
//             case 2:{
//                 Header();
//                 Display();
//             }break;
//             case 3:{
//                 cout<<"PAYMENTS = "<<KHR()<<"  KHR"<<endl;
//             }break;
//             case 4:{
//                 cout<<"PAYMENTS = "<<Dollar()<<"  Dollar"<<endl;
//             }break;
//             default: cout<<"Invalid Option"<<endl;
//         }
//     }while(op!=0);
//     return 0;
// }
