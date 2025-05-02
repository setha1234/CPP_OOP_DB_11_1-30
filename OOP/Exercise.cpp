#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
private:
    string name, gender;
    int id;
    float salary;

public:
    Employee()
    {
        name = "Unknown Name";
        gender = "Unknown Gender";
        id = 0;
        salary = 0.0;
    }
    Employee(string n, string g, int i, float s)
    {
        this->name = n;
        this->gender = g;
        this->id = i;
        this->salary = s;
    }
    // set id function

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
    void Display()
    {
        cout << "\t" << name << setw(12) << gender << setw(12) << id << setw(12) << salary << endl;
        cout << "\t--------------------------------------------------\n";
    }
};
int main()
{
    system("cls");
    Employee emp[100];
    string Ename, Egender;
    int Eid;
    float Esalary;
    int n;
    bool check;

    int choice;
    do
    {
        cout << "\t--------------------------------------------------\n";
        cout << "\t|                  Employee Menu                 |\n";
        cout << "\t--------------------------------------------------\n";
        cout << "\t| 1. Add    Employee                             |\n";
        cout << "\t| 2. View   Employee                             |\n";
        cout << "\t| 3. Update Employee                             |\n";
        cout << "\t| 4. Delete Employee                             |\n";
        cout << "\t| 5. Sort   Employee                             |\n";
        cout << "\t| 6. Search Employee                             |\n";
        cout << "\t| 0. Exit                                        |\n";
        cout << "\t--------------------------------------------------\n";
        cout << "\tEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\t--------------------------------------------------\n";
            cout << "\t|                   Add Employee                 |\n";
            cout << "\t--------------------------------------------------\n";
            cout << "\tEnter Employee For Input : ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "\t--------------------------------------------------\n";
                cout << "\t|               Employee " << i + 1 << "                |\n";
                cout << "\t--------------------------------------------------\n\n";
                cout << "Enter Employee Name : ";
                cin.ignore();
                getline(cin, Ename);
                cout << "\tEnter Employee ID : ";
                cin >> Eid;
                cout << "\tEnter Employee Gender : ";
                cin.ignore();
                getline(cin, Egender);
                cout << "\tEnter Employee Salary : ";
                cin >> Esalary;
                emp[i] = Employee(Ename, Egender, Eid, Esalary);
                cout << "\n";
            }

            break;
        case 2:
            cout << "\t--------------------------------------------------\n";
            cout << "\t|                 View Employee                  |\n";
            cout << "\t--------------------------------------------------\n";
            cout << "\t--------------------------------------------------\n";
            cout << "\tName" << setw(12) << "Gender" << setw(12) << "ID" << setw(12) << "Salary\n";
            cout << "\t--------------------------------------------------\n";
            for (int i = 0; i < n; i++)
            {
                emp[i].Display();
            }

            break;
        case 3:
            int udateEmp;
            cout << "\t--------------------------------------------------\n";
            cout << "\t|                  Update Employee               |\n";
            cout << "\t--------------------------------------------------\n";
            cout << "\tEnter Employee ID to Update : ";
            cin >> udateEmp;
            for (int i = 0; i < n; i++)
            {
                if (emp[i].getId() == udateEmp)
                {
                    cout << "\t--------------------------------------------------\n";
                    cout << "\t|               Employee " << i + 1 << "                |\n";
                    cout << "\t--------------------------------------------------\n\n";
                    cout << "\tEnter Employee Name : ";
                    cin.ignore();
                    getline(cin, Ename);
                    cout << "\tEnter Employee ID : ";
                    cin >> Eid;
                    cout << "\tEnter Employee Gender : ";
                    cin.ignore();
                    getline(cin, Egender);
                    cout << "\tEnter Employee Salary : ";
                    cin >> Esalary;
                    emp[i] = Employee(Ename, Egender, Eid, Esalary);
                    cout << "\t--------------------------------------------------\n";
                }
            }

            break;
        case 4:
            cout << "\t--------------------------------------------------\n";
            cout << "\t|                  Delete Employee               |\n";
            cout << "\t--------------------------------------------------\n";
            int del_Emp;
            check = false;
            cout << "\tEnter your id : ";
            cin >> del_Emp;
            for (int i = 0; i < n; i++)
            {
                if (del_Emp == emp[i].getId())
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        emp[i] = emp[j + 1];
                        check = true;
                        cout << "\tDelete Successfully!!!" << endl;
                    }
                    n--;
                }
            }
            if (check = false)
            {
                cout << "\tError can't delete" << endl;
            }
            break;
        case 5:
            int sort;
            check = false;
            cout << "\t--------------------------------------------------\n";
            cout << "\t|                  Sort Employee                 |\n";
            cout << "\t--------------------------------------------------\n";
            cout << "\t 1 . Sort ID" << endl;
            cout << "\t 2 . Sort Name" << endl;
            cout << "\t Enter for sort [1-2] : ";
            cin >> sort;

            if (sort == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (emp[i].getId() > emp[j].getId())
                        {
                            swap(emp[i], emp[j]);
                            // cout<<"Complate sort by id"<<endl;
                            check = true;
                        }
                    }
                }
            }
            else if (sort == 2)
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        if (emp[i].getName() > emp[j].getName())
                        {
                            swap(emp[i], emp[j]);
                            // cout<<"Complate sort by name"<<endl;
                            check = true;
                        }
                    }
                }
            }
            if (check == false)
            {
                cout << "\tError can't sort" << endl;
            }
            break;
        case 6:
            int chose;
            
            cout << "\t--------------------------------------------------\n";
            cout << "\t|                  Search Employee               |\n";
            cout << "\t--------------------------------------------------\n";
            cout << "\t 1. Search Name" << endl;
            cout << "\t 2. Search Id" << endl;
            cout << "\t 3. Search Salary" << endl;
            cout << "\t Enter for choosing option : "; cin>>chose;
            switch (chose)
            {
            case 1:
            {
                cout << "\t--------------------------------------------------\n";
                string search_name;
                cout << "\tEnter name for search : ";
                cin >> search_name;
                for (int i = 0; i < n; i++)
                {
                    if (search_name == emp[i].getName())
                    {
                        cout << "\tName" << setw(12) << "Gender" << setw(12) << "ID" << setw(12) << "Salary\n";
                        cout << "\t--------------------------------------------------\n";
                        emp[i].Display();
                        
                    }
                }
                break;
            }
            case 2 : {
                int search_id;
                cout << "Enter id for search : ";
                cin >> search_id;
                for (int i = 0; i < n; i++)
                {
                    if (search_id == emp[i].getId())
                    {
                        cout << "\tName" << setw(12) << "Gender" << setw(12) << "ID" << setw(12) << "Salary\n";
                        cout << "\t--------------------------------------------------\n";
                        emp[i].Display();
                        
                    }
                }
                break;
            }
            case 3: {
                float search_salary;
                cout << "Enter salary for search : ";
                cin >> search_salary;
                for (int i = 0; i < n; i++)
                {
                    if (search_salary == emp[i].getSalary())
                    {
                        cout << "\tName" << setw(12) << "Gender" << setw(12) << "ID" << setw(12) << "Salary\n";
                        cout << "\t--------------------------------------------------\n";
                        emp[i].Display();
                    }
                }
                break;
            }
        }
            
            break;
        case 0:
            cout << "\t--------------------------------------------------\n";
            cout << "\t|                     Exit                       |\n";
            cout << "\t--------------------------------------------------\n";
            break;
        default:
            cout << "\t\tInvalid choice. Please try again." << endl;
        }
    

    } while (choice != 0);
}