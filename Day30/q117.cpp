#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        int rollNo;
        string name;
        string department;
        double cgpa;
};
class StudentManager{
    private:
        Student directory[100];
        int maxCapacity;
        int currentCount;
    public:
        StudentManager(){
            maxCapacity = 100;
            currentCount = 0;}
void addStudent(int rNo, string n, string dept, double c) {
    if (currentCount >= maxCapacity) {
        cout << "[Error] Database is full! Cannot add more students.\n";} 
    else{
        directory[currentCount].rollNo = rNo;
        directory[currentCount].name = n;
        directory[currentCount].department = dept;
        directory[currentCount].cgpa = c;
        currentCount++;
        cout<<"[System] Record for "<<n<<"saved successfully.\n";}}
void displayAll(){
    if (currentCount==0){
    cout << "\n[System] Database is currently empty.\n";
    return;}
    cout << "\n=== REGISTERED STUDENTS ===\n";
    for(int i=0;i<currentCount;i++){
        cout<<"Roll No: "<<directory[i].rollNo<<" | Name: "<<directory[i].name<<" | Dept: "<<directory[i].department<<" | CGPA: "<<directory[i].cgpa<< "\n";}}
void searchStudent(int searchRoll){
bool found = false;
    for(int i=0;i<currentCount;i++){
        if(directory[i].rollNo == searchRoll){
            cout<<"\n[Record Found]: "<<directory[i].name<<" (Dept: "<<directory[i].department<<", CGPA: "<<directory[i].cgpa<<")\n";
        found = true;
        break;}}
    if(found == false){
        cout<<"\n[Error] No student found with Roll No: "<<searchRoll<< "\n";}}
};
int main() {
    cout << "=== Student Management System ===\n";
    StudentManager admin; 
    int tempRoll;
    string tempName;
    string tempDept;
    double tempCgpa;
    int choice;
    do {
        cout << "\n\t\t=========== Student Record Menu ===========";
        cout << "\n1. Add New Student";
        cout << "\n2. View All Students";
        cout << "\n3. Search Student by Roll No";
        cout << "\n4. Shut Down System";
        cout << "\n==> ";
        cin >> choice;
        if(choice==1){
            cout<<"\nEnter Roll Number: ";
            cin>>tempRoll;
            cout << "Enter Full Name: ";
            cin.ignore();
            getline(cin, tempName);
            cout << "Enter Department (e.g., B.Tech): ";
            getline(cin, tempDept); 
            cout << "Enter CGPA: ";
            cin >> tempCgpa;
            admin.addStudent(tempRoll,tempName,tempDept,tempCgpa);}
        else if(choice==2){
            admin.displayAll();}
        else if(choice==3){
            int searchRoll;
            cout << "\nEnter Roll No to search: ";
            cin >> searchRoll;
            admin.searchStudent(searchRoll);}
        else if(choice==4){
            cout<<"\n[System] Shuting down.\n";}
        else{
            cout<<"\n[Error] Invalid Input, Try again.\n";}
    } while (choice != 4);
    return 0;
}