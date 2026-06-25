#include<bits/stdc++.h>
#include<fstream>        //This Header is to use file Handling
using namespace std;
struct employee{
    string Name;
    int EmpNo;
    int age;
    float salary;
};

void savetofile(employee e[], int employee_no){

    ofstream fout("employee.txt");

    for(int i=0;i<employee_no;i++){
        fout<<e[i].Name<<endl;
        fout<<e[i].EmpNo<<endl;
        fout<<e[i].age<<endl;
        fout<<e[i].salary<<endl;
    }

    fout.close();
}

void loadfromfile(employee e[], int &employee_no){
    ifstream fin("employee.txt");

    if(!fin){
        return;
    }

    employee_no = 0;

    while(employee_no < 1000 && getline(fin, e[employee_no].Name)){
        if(e[employee_no].Name.empty())
            continue;

        if(!(fin >> e[employee_no].EmpNo >> e[employee_no].age >> e[employee_no].salary)){
            break;   // agar data galat ho to loading stop
        }

        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        employee_no++;
    }

    fin.close();
}







int main(){
    employee e[1000];

    int main_opt,n =0,employee_no = 0;
    int search_emp=0;
    loadfromfile(e,employee_no);
    cout<<"Welcome to Employee Record Management System\n"<<endl;
    do{
    cout<<"Select the options given below:\n"<<endl;
    cout<<"1. Add Employee"<<endl;
    cout<<"2. Display all Employees"<<endl;
    cout<<"3. Search Employee"<<endl;
    cout<<"4. Update Employee"<<endl;
    cout<<"5. Delete Employee"<<endl;
    cout<<"6. Exit"<<endl;
    cin>>main_opt;

//Adding Employee

    if(main_opt == 1){
        cout<<"How many Employees are there to add details: ";
        cin>>n;
        if(employee_no+n >1000){
        cout<<"Storage Limit Exceeded!";
    }
    else{
        cin.ignore();
        for(int i= employee_no ;i<n+employee_no;i++){
        cout<<"Enter Employees details: "<<endl;
        cout<<"Enter Name: ";
        getline(cin,e[i].Name);
        cout<<"Enter Employee Number: ";
        cin>>e[i].EmpNo;
        cout<<"Enter age: ";
        cin>>e[i].age;
        cout<<"Enter Salary: ";
        cin>>e[i].salary;
        cin.ignore();
        }
        employee_no += n;
        savetofile(e,employee_no);
        cout<<"Data Saved Succesfully"<<endl;
    }
    }


    //Display all Employee


    else if(main_opt == 2){
        if(employee_no == 0){
            cout<<"No employee record available!"<<endl;
        }
        else{
        for(int i=0;i<employee_no;i++){
            cout<<i+1<<") "<<"Name: "<<e[i].Name<<endl;
            cout<<"Employee number: "<<e[i].EmpNo<<endl;
            cout<<"Age: "<<e[i].age<<endl;
            cout<<"Salary: "<<e[i].salary<<endl<<endl;
        }
    }
    }


    //Searching of Employee 



    else if(main_opt == 3){
        bool found2 = false;

            cout<<"Enter employee number of the employee: "<<endl;
            cin>>search_emp;
            for(int i=0;i<employee_no;i++){
                if(search_emp == e[i].EmpNo){
                    cout<<"Name: "<<e[i].Name<<endl;
                    cout<<"Employee number: "<<e[i].EmpNo<<endl;
            cout<<"Age: "<<e[i].age<<endl;
            cout<<"Salary: "<<e[i].salary<<endl;
                    found2 = true;
                    break;
                }

            }
             if(!found2){
                    cout<<"Employee details not found!"<<endl;
                }
        }


    //Update Employee Details

    else if(main_opt == 4){
        bool found =false;
        cout<<"To update details"<<endl;
        cout<<"Enter employee number of the employee: ";
        cin>>search_emp;
        for(int i=0;i<employee_no;i++){
            if(search_emp  == e[i].EmpNo){
                cout<<"Enter employee details to update: \n";
                cout<<"Enter Name: ";
                cin.ignore();
        getline(cin,e[i].Name);
        cout<<"Enter Employee Number: ";
        cin>>e[i].EmpNo;
        cout<<"Enter age: ";
        cin>>e[i].age;
        cout<<"Enter Salary: ";
        cin>>e[i].salary;
        savetofile(e,employee_no);
        cout<<"Employee Data updated succesfully"<<endl;
        found = true;
        break;
            }
        }
        if(!found){
                cout<<"Employee Not found"<<endl;
                cout<<"First add the Employee"<<endl;
            }
    }


    //Delete employee details

    else if(main_opt == 5){
        bool found3 = false;
        cout<<"To delete employee details"<<endl;
        cout<<"Enter employee number of the employee: ";
        cin>>search_emp;

        for(int i=0;i<employee_no;i++){
             if(search_emp == e[i].EmpNo){
            for(int j=i;j<employee_no-1;j++){
                e[j] = e[j+1];
               
               

            }
             employee_no--;
             savetofile(e,employee_no);
             cout<<"Employee Data deleted successfully"<<endl;
                found3 =true;
                 break;
        }
    }
        if(!found3){
                cout<<"Employee Not found"<<endl;
                cout<<"First add the Employee"<<endl;
            }
        }

        else if(main_opt == 6){
            cout<<"Have a good Day"<<endl;
            cout<<"Thank You";
        }

        else{
            cout<<"Invalid Input"<<endl;
            cout<<"Try again";
        }
    

    }while(main_opt!=6);

    
    return 0;
    
}