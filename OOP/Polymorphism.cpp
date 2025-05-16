#include<iostream>
using namespace std;
class Area{
    private : 
        float width;
        float height;
    public :
        // Default Constructor
        Area(){
            width = 0;
            height = 0;
        }
        // Constructor with parameter
        Area(int w,int h){
            this->height = h;
            this->width  = w;
        }

        Area(double a,double b){
            this->height = a;
            this->width = b;
        }
        // new constructor with parameter
        Area (float k,float j){

        }

        int CalculateArea(){
            int total = width * height;
            return total;
        }

        double CalculateFloat(){
            return (width+height)*2;
        }
        void Display(){
            cout<<"Area : "<<CalculateArea()<<endl;
        }
        void DisplayFloat(){
            cout<<"Area : "<<CalculateFloat()<<endl;
        }

};
int main(){
    system("cls");
    Area a;
    a.Display();
    Area b(10,5);
    b.Display();
    Area c(2.5,6.3);
    c.DisplayFloat();


    return 0;
}