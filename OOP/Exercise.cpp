#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
    private :
        string name,gender;
        int id;
        float salary;
    public :
        Employee(){
            name = "Unknown Name";
            gender = "Unknown Gender";
            id = 0;
            salary = 0.0;
        }  
        Employee(string n, string g, int i, float s){
            this->name = n;
            this->gender = g;
            this->id = i;
            this->salary = s;
        }
        // set id function
        
        int getId(){
            return id;
        }
        void Display(){
            cout<<"\t"<<name<<setw(12)<<gender<<setw(12)<<id<<setw(12)<<salary<<endl;
            cout<<"\t--------------------------------------------------\n";

        }
            
};
int main(){
    system("cls");
    Employee emp[100]; 
    string Ename, Egender;
    int Eid;
    float Esalary;
    int n;

    int choice;
    do{
        cout<<"\t--------------------------------------------------\n";
        cout<<"\t|                  Employee Menu                 |\n";
        cout<<"\t--------------------------------------------------\n";
        cout<<"\t| 1. Add    Employee                             |\n";
        cout<<"\t| 2. View   Employee                             |\n";
        cout<<"\t| 3. Update Employee                             |\n";
        cout<<"\t| 4. Delete Employee                             |\n";
        cout<<"\t| 5. Sort   Employee                             |\n";
        cout<<"\t| 6. Search Employee                             |\n";
        cout<<"\t| 0. Exit                                        |\n";
        cout<<"\t--------------------------------------------------\n";
        cout<<"\tEnter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\t--------------------------------------------------\n";
                cout<<"\t|                   Add Employee                 |\n";
                cout<<"\t--------------------------------------------------\n";
                cout<<"\tEnter Employee For Input : ";
                cin>>n;
                for(int i=0; i<n; i++){
                    cout<<"\t--------------------------------------------------\n";
                    cout<<"\t|               Employee "<<i+1<<"                |\n";
                    cout<<"\t--------------------------------------------------\n\n";
                    cout<<"Enter Employee Name : ";
                    cin.ignore();
                    getline(cin, Ename);
                    cout<<"Enter Employee ID : ";
                    cin>>Eid;
                    cout<<"Enter Employee Gender : ";
                    cin.ignore();
                    getline(cin, Egender);
                    cout<<"Enter Employee Salary : ";
                    cin>>Esalary;
                    emp[i] = Employee(Ename, Egender, Eid, Esalary);  
                    cout<<"\n";
                }
                
                break;
            case 2:
                cout<<"\t--------------------------------------------------\n";
                cout<<"\t|                 View Employee                  |\n";
                cout<<"\t--------------------------------------------------\n";
                cout<<"\t--------------------------------------------------\n";
                cout<<"\tName"<<setw(12)<<"Gender"<<setw(12)<<"ID"<<setw(12)<<"Salary\n";
                cout<<"\t--------------------------------------------------\n";
                for (int i=0; i<n; i++){
                    emp[i].Display();
                }
                
                break;
            case 3:
                int udateEmp;
                cout<<"\t--------------------------------------------------\n";
                cout<<"\t|                  Update Employee               |\n";
                cout<<"\t--------------------------------------------------\n";
                cout<<"\tEnter Employee ID to Update : ";
                cin>>udateEmp;
                for(int i=0;i<n;i++){
                    if(emp[i].getId() == udateEmp){
                        cout<<"\t--------------------------------------------------\n";
                        cout<<"\t|               Employee "<<i+1<<"                |\n";
                        cout<<"\t--------------------------------------------------\n\n";
                        cout<<"Enter Employee Name : ";
                        cin.ignore();
                        getline(cin, Ename);
                        cout<<"Enter Employee ID : ";
                        cin>>Eid;
                        cout<<"Enter Employee Gender : ";
                        cin.ignore();
                        getline(cin, Egender);
                        cout<<"Enter Employee Salary : ";
                        cin>>Esalary;
                        emp[i] = Employee(Ename, Egender, Eid, Esalary);
                        cout<<"\t--------------------------------------------------\n";
                }
            }
                
                break;
            case 4:
                cout<<"\t--------------------------------------------------\n";
                cout<<"\t|                  Delete Employee               |\n";
                cout<<"\t--------------------------------------------------\n";
                break;
            case 5:
                cout<<"\t--------------------------------------------------\n";
                cout<<"\t|                  Sort Employee                 |\n";
                cout<<"\t--------------------------------------------------\n";
                break;
            case 6:
                cout<<"\t--------------------------------------------------\n";
                cout<<"\t|                  Search Employee               |\n";
                cout<<"\t--------------------------------------------------\n";
                break;
            case 0:
                cout<<"\t--------------------------------------------------\n";
                cout<<"\t|                     Exit                       |\n";
                cout<<"\t--------------------------------------------------\n";
                break;
            default:
                cout<<"\t\tInvalid choice. Please try again."<<endl;
        }

    }while(choice != 0);
}