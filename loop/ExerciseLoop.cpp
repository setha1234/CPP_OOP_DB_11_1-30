#include<iostream>
using namespace std;
int main(){
    system("cls");
    int options;
    float dollar,riel,baht,won,yuan,yen,rupee,euro,peso,exchange;
    do{
        cout<<"Welcome to ours program for exchange amount"<<endl;
        cout<<"1. Dollar to Riel"<<endl;
        cout<<"2. Dollar to Baht"<<endl;
        cout<<"3. Dollar to Won"<<endl;
        cout<<"4. Dollar to Yuan"<<endl;
        cout<<"5. Dollar to Yen"<<endl;
        cout<<"6. Dollar to Rupee"<<endl;
        cout<<"7. Dollar to Euro"<<endl;
        cout<<"8. Dollar to Peso"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>options;
        switch(options){
            case 0 :{
                cout<<"================================================"<<endl;
                cout<<"             Exiting the program...             "<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 1 :{
                riel = 4000.0;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Riel."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * riel;  
                cout<<"The amount in Riel is: "<<exchange<<endl;
                cout<<"================================================"<<endl;

                break;
            }
            case 2 :{
                baht = 33.06;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Baht."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * baht;  
                cout<<"The amount in Baht is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 3 :{
                won = 1404.54;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Won."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * won;  
                cout<<"The amount in Won is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 4 :{
                yuan = 7.15;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Yuan."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * yuan;  
                cout<<"The amount in Yuan is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 5 :{
                yen = 150.18;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Yen."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * yen;  
                cout<<"The amount in Yen is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 6 :{
                rupee = 278.20;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Rupee."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * rupee;  
                cout<<"The amount in Rupee is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 7 :{
                euro = 0.94;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Euro."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * euro;  
                cout<<"The amount in Euro is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            case 8 :{
                peso = 57.79;
                cout<<"================================================"<<endl;
                cout<<"You are choosing exchange Dollar to Peso."<<endl;
                cout<<"Enter the amount of dollars: ";
                cin>>dollar;
                exchange = dollar * peso;  
                cout<<"The amount in Peso is: "<<exchange<<endl;
                cout<<"================================================"<<endl;
                break;
            }
            default:{
                cout<<"================================================"<<endl;
                cout<<"             Invalid option. Try again.         "<<endl;
                cout<<"================================================"<<endl;
                break;
                
            }

        }

    }while(options != 0);
}