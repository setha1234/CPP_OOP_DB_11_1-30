#include <iostream>
using namespace std;

float A(){
    float a = 21;
    
    
    return a;
 
}

float B(){
    float b = 30;
    return b;
}

float Add(){
    float x = A();
    float y = B();
    return x + y;  
}

float Subtract(){
    float x = A();
    float y = B();
    
    return x - y;
}

float Multiply(){
    float x = A();
    float y = B();
    
    return x * y;
}

float Divide(){
    float x = A();
    float y = B();
    return x / y;
}



int main(){
    char op;
    float   add = Add(),
            sub = Subtract(),
            mul = Multiply(),
            div = Divide();
    cout<<"Input operator (+,-,*,/):";
    cin>>op;

    switch(op){
        case '+': cout<<"Result :"<<add ; break;
        case '-': cout<<"Result :"<<sub; break;
        case '*': cout<<"Result :"<<mul; break;
        case '/': cout<<"Result :"<<div; break;
        default: cout<<"Invalid operator!";
    }



}