#include<iostream>
using namespace std;

// float Sum()
// {
//     float num1,num2,result;
//     cout<<"Enter value for number 1 : ";
//     cin>>num1;
//     cout<<"Enter value for number 2 : ";
//     cin>>num2;
//     result = num1 * num2;
//     return result;
// }


// int main(){
//     float res = Sum();

//     cout<<"Result : "<<res<<endl;

//     return 0;
// }
float A(){
    float a=10,b=30;// local variable
    return a,b;
}

float B(){
    float a = 50, b=20; // local variable
    return a,b;
}

float Sum(){
    float x = A(); // a = 10  , b = 30
    float y = B(); // a = 50  , b = 20
    float q = A(); // 
    float r = B(); // 

    cout<<"x"<<x<<endl;
    cout<<"y"<<y<<endl;
    cout<<"q"<<q<<endl;
    cout<<"r"<<r<<endl;
    return (x * y) , (r + q);
}

int main(){
    system("cls");
    float result = Sum();
    cout<<"Result : "<<result<<endl;
}
