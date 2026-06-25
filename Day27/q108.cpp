#include<bits/stdc++.h>
#include<fstream>        //This Header is to use file Handling
using namespace std;
struct student{
    string Name;
    int RollNo;
    int age;
    float maths,physics,chemistry,english,computer;
    float total,percentage;
    char grade;
    string result;
};

void calculatemarksheet(student &s){
    s.total = s.maths + s.physics + s.chemistry + s.english + s.computer;
    s.percentage = s.total/5;

    if(s.maths<33 || s.physics<33 || s.chemistry<33 || s.english<33 || s.computer<33){
        s.result = "Fail";
        s.grade = 'F';
    }
    else{
        s.result = "Pass";
        if(s.percentage >= 90)
            s.grade = 'A';
        else if(s.percentage >= 75)
            s.grade = 'B';
    else if(s.percentage >= 60)
            s.grade = 'C';
        else if(s.percentage >= 40)
            s.grade = 'D';
   else{
            s.grade = 'F';
   }            
    }
}

void savetofile(student s[], int student_no){

    ofstream fout("student.txt");

    for(int i=0;i<student_no;i++){
        fout<<s[i].Name<<endl;
     fout<<s[i].RollNo<<endl;
        fout<<s[i].age<<endl;
        fout<<s[i].maths<<endl;
           fout<<s[i].physics<<endl;
    fout<<s[i].chemistry<<endl;
        fout<<s[i].english<<endl;
        fout<<s[i].computer<<endl;
           fout<<s[i].total<<endl;
        fout<<s[i].percentage<<endl;
    fout<<s[i].grade<<endl;
        fout<<s[i].result<<endl;
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

        if(!(fin >> s[student_no].RollNo >> s[student_no].age >> s[student_no].maths >> s[student_no].physics >> s[student_no].chemistry >> s[student_no].english >> s[student_no].computer >> s[student_no].total >> s[student_no].percentage >> s[student_no].grade)){
            break;
        }

        fin.ignore();
        getline(fin,s[student_no].result);
        student_no++;
    }

    fin.close();
}







int main(){
    student s[1000];

    int main_opt,n =0,student_no = 0;
    int search_roll=0;
    loadfromfile(s,student_no);
    cout<<"Welcome to Marksheet Generation System\n"<<endl;
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
     cout<<"Enter Maths Marks: ";
          cin>>s[i].maths;
       cout<<"Enter Physics Marks: ";
        cin>>s[i].physics;
       cout<<"Enter Chemistry Marks: ";
        cin>>s[i].chemistry;
    cout<<"Enter English Marks: ";
        cin>>s[i].english;
                cout<<"Enter Computer Marks: ";
    cin>>s[i].computer;
        calculatemarksheet(s[i]);
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
            cout<<"Maths: "<<s[i].maths<<endl;
     cout<<"Physics: "<<s[i].physics<<endl;
            cout<<"Chemistry: "<<s[i].chemistry<<endl;
                        cout<<"English: "<<s[i].english<<endl;
            cout<<"Computer: "<<s[i].computer<<endl;
        cout<<"Total: "<<s[i].total<<endl;
            cout<<"Percentage: "<<s[i].percentage<<endl;
                        cout<<"Grade: "<<s[i].grade<<endl;
            cout<<"Result: "<<s[i].result<<endl<<endl;
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
        cout<<"Maths: "<<s[i].maths<<endl;
            cout<<"Physics: "<<s[i].physics<<endl;
        cout<<"Chemistry: "<<s[i].chemistry<<endl;
            cout<<"English: "<<s[i].english<<endl;
            cout<<"Computer: "<<s[i].computer<<endl;
        cout<<"Total: "<<s[i].total<<endl;
            cout<<"Percentage: "<<s[i].percentage<<endl;
                        cout<<"Grade: "<<s[i].grade<<endl;
            cout<<"Result: "<<s[i].result<<endl;
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
        cout<<"Enter Maths Marks: ";
        cin>>s[i].maths;
    cout<<"Enter Physics Marks: ";
        cin>>s[i].physics;
    cout<<"Enter Chemistry Marks: ";
        cin>>s[i].chemistry;
        cout<<"Enter English Marks: ";
        cin>>s[i].english;
    cout<<"Enter Computer Marks: ";
        cin>>s[i].computer;
        calculatemarksheet(s[i]);
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