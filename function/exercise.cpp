#include<iostream>
using namespace std;
int code,qty,dis;
float price,total,payment;
string name;


void Input(int code,string name,float price,int qty){
    
}

float Calculate(){
    
    total = price * qty;
}

void Discount(){
    Calculate();
    if(total >= 1 && total <10){
        dis = 10;
    }else if (total >= 10 && total < 20){
        dis = 20;
    }else if(total >= 20 && total < 30){
        dis = 30;
    }else if(total >= 30 && total < 40){
        dis = 40;
    }else if(total >= 40 && total < 50){
        dis = 50;
    }else if(total >= 50 && total < 60){
        dis = 60;
    }else if(total >= 60){
        dis = 70;
    }else{
        dis = 0;
    }
}

float Payment(){
    Discount();
    payment = total - (total * dis)/100;
}

void Header(){
    cout<<"\033[32m\t\t\t---------------------------------------------"<<endl;
    cout<<"\t\t\t         Welcome to Super Market Store       "<<endl;
    cout<<"\t\t\t---------------------------------------------"<<endl;
    cout<<"\t\t"<<"ID\t"<<"Name\t"<<"Price\t"<<"Quantity\t"<<"Discount\t"<<"Total\t"<<"Payment"<<endl;
}

void Display(){
    Payment();
    cout<<"\t\t"<<code<<"\t"<<name<<"\t"<<price<<"\t"<<qty<<"\t\t"<<dis<<"%\t\t"<<total<<"$\t"<<payment<<"$\033[0m"<<endl;
}

int main(){
    system("cls");
    cout<<"\n\t\t\t\033[33m***************************************\n"<<endl;
    cout<<"\t\t\t=> Enter Product Code : ";
    cin>>code;
    cout<<"\t\t\t=> Enter Product Name : ";
    cin>>name;
    cout<<"\t\t\t=> Enter Product Price : ";
    cin>>price;
    cout<<"\t\t\t=> Enter Product Quantity : ";
    cin>>qty;
    cout<<"\n\t\t\t***************************************\n"<<endl;

    Input(code,name,price,qty);
    Header();
    Display();
    return 0;
}