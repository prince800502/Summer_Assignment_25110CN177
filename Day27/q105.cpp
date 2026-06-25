#include<bits/stdc++.h>
#include<fstream>        //This Header is to use file Handling
using namespace std;
struct student{
    string Name;
    int RollNo;
    int age;
    float marks;
};

void savetofile(student s[], int student_no){

    ofstream fout("student.txt");

    for(int i=0;i<student_no;i++){
        fout<<s[i].Name<<endl;
        fout<<s[i].RollNo<<endl;
        fout<<s[i].age<<endl;
        fout<<s[i].marks<<endl;
    }

    fout.close();
}

void loadfromfile(student s[], int &student_no){
    ifstream fin("student.txt");

    if(!fin){
        return;
    }

    student_no = 0;

    while(student_no < 1000 && getline(fin, s[student_no].Name)){
        if(s[student_no].Name.empty())
            continue;

        if(!(fin >> s[student_no].RollNo >> s[student_no].age >> s[student_no].marks)){
            break;   // agar data galat ho to loading stop
        }

        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        student_no++;
    }

    fin.close();
}







int main(){
    student s[1000];

    int main_opt,n =0,student_no = 0;
    int search_roll=0;
    loadfromfile(s,student_no);
    cout<<"Welcome to Student Record Management System\n"<<endl;
    do{
    cout<<"Select the options given below:\n"<<endl;
    cout<<"1. Add Student"<<endl;
    cout<<"2. Display all Students"<<endl;
    cout<<"3. Search Student"<<endl;
    cout<<"4. Update Student"<<endl;
    cout<<"5. Delete Student"<<endl;
    cout<<"6. Exit"<<endl;
    cin>>main_opt;

//Adding Student

    if(main_opt == 1){
        cout<<"How many Students are there to add details: ";
        cin>>n;
        if(student_no+n >1000){
        cout<<"Storage Limit Exceeded!";
    }
    else{
        cin.ignore();
        for(int i= student_no ;i<n+student_no;i++){
        cout<<"Enter Students details: "<<endl;
        cout<<"Enter Name: ";
        getline(cin,s[i].Name);
        cout<<"Enter Roll Number: ";
        cin>>s[i].RollNo;
        cout<<"Enter age: ";
        cin>>s[i].age;
        cout<<"Enter Marks: ";
        cin>>s[i].marks;
        cin.ignore();
        }
        student_no += n;
        savetofile(s,student_no);
        cout<<"Data Saved Succesfully"<<endl;
    }
    }


    //Display all Student


    else if(main_opt == 2){
        if(student_no == 0){
            cout<<"No student record available!"<<endl;
        }
        else{
        for(int i=0;i<student_no;i++){
            cout<<i+1<<") "<<"Name: "<<s[i].Name<<endl;
            cout<<"Roll number: "<<s[i].RollNo<<endl;
            cout<<"Age: "<<s[i].age<<endl;
            cout<<"Marks: "<<s[i].marks<<endl<<endl;
        }
    }
    }


    //Searching of Student 



    else if(main_opt == 3){
        bool found2 = false;

            cout<<"Enter roll number of the student: "<<endl;
            cin>>search_roll;
            for(int i=0;i<student_no;i++){
                if(search_roll == s[i].RollNo){
                    cout<<"Name: "<<s[i].Name<<endl;
                    cout<<"Roll number: "<<s[i].RollNo<<endl;
            cout<<"Age: "<<s[i].age<<endl;
            cout<<"Marks: "<<s[i].marks<<endl;
                    found2 = true;
                    break;
                }

            }
             if(!found2){
                    cout<<"Student details not found!"<<endl;
                }
        }


    //Update Student Details

    else if(main_opt == 4){
        bool found =false;
        cout<<"To update details"<<endl;
        cout<<"Enter roll number of the student: ";
        cin>>search_roll;
        for(int i=0;i<student_no;i++){
            if(search_roll  == s[i].RollNo){
                cout<<"Enter student details to update: \n";
                cout<<"Enter Name: ";
                cin.ignore();
        getline(cin,s[i].Name);
        cout<<"Enter Roll Number: ";
        cin>>s[i].RollNo;
        cout<<"Enter age: ";
        cin>>s[i].age;
        cout<<"Enter Marks: ";
        cin>>s[i].marks;
        savetofile(s,student_no);
        cout<<"Student Data updated succesfully"<<endl;
        found = true;
        break;
            }
        }
        if(!found){
                cout<<"Student Not found"<<endl;
                cout<<"First add the Student"<<endl;
            }
    }


    //Delete student details

    else if(main_opt == 5){
        bool found3 = false;
        cout<<"To delete student details"<<endl;
        cout<<"Enter roll number of the student: ";
        cin>>search_roll;

        for(int i=0;i<student_no;i++){
             if(search_roll == s[i].RollNo){
            for(int j=i;j<student_no-1;j++){
                s[j] = s[j+1];
               
               

            }
             student_no--;
             savetofile(s,student_no);
             cout<<"Student Data deleted successfully"<<endl;
                found3 =true;
                 break;
        }
    }
        if(!found3){
                cout<<"Student Not found"<<endl;
                cout<<"First add the Student"<<endl;
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