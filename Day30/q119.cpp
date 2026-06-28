#include <iostream>
#include <string>
using namespace std;
class Employee {
    public:
        int empId;
        string name;
        string designation;
        double salary;
};
class EmployeeManager {
    private:
        Employee staff[100];
        int maxCapacity;
        int currentCount;
    public:
        EmployeeManager() {
            maxCapacity = 100;
            currentCount = 0;}
void addEmployee(int id, string n, string role, double sal) {
    if (currentCount >= maxCapacity) {
        cout << "[Error] Server capacity reached! Cannot onboard more employees.\n";} 
    else {
        staff[currentCount].empId = id;
        staff[currentCount].name = n;
        staff[currentCount].designation = role;
        staff[currentCount].salary = sal;
        currentCount++;
        cout << "[System] " << n << " has been successfully onboarded as a " << role << ".\n";}}
void displayAll() {
    if (currentCount == 0) {
        cout << "\n[System] The employee roster is currently empty.\n";
        return;}
        cout << "\n=== View All Employees ===\n";
        for (int i = 0; i < currentCount; i++) {
            cout<<"ID: "<<staff[i].empId<<" | Name: "<<staff[i].name <<" | Role: "<< staff[i].designation<<" | Salary: $"<< staff[i].salary<< "\n";}}
void searchEmployee(int searchId) {
    bool found = false;
    for (int i = 0; i < currentCount; i++) {
        if (staff[i].empId == searchId) {
            cout<<"\n[Personnel File Found]:\n"<<"Name: "<<staff[i].name<<"\n"<<"Designation: " << staff[i].designation<<"\n"<<"Current Salary: $"<<staff[i].salary<<"\n";
            found = true;
            break;}}
        if(!found){cout<<"\n[Error] No employee found with ID: "<<searchId<<"\n";}}
void updateSalary(int searchId){
bool found = false;
    double newSalary;
    for(int i=0;i<currentCount;i++) {
        if (staff[i].empId == searchId) {
            cout << "Enter the new salary for " << staff[i].name << " (" << staff[i].designation << "): $";
            cin >> newSalary;
            staff[i].salary = newSalary;
            cout << "[System] Payroll updated successfully!\n";
            found = true;
            break;}}
        if (!found) {
            cout<<"\n[Error] No employee found with ID: "<< searchId<<"\n";}}
};
int main() {
    cout <<"=== Employee Management system ===\n";
EmployeeManager Database; 
int tempId;
string tempName;
string tempRole;
double tempSalary;
int choice;
do {
    cout << "\n\t\t=========== Mini Employee Management System ===========";
    cout << "\n1. Onboard New Employee";
    cout << "\n2. View All Employees";
    cout << "\n3. Search Employee by ID";
    cout << "\n4. Adjust Employee Salary";
    cout << "\n5. Shut Down System";
    cout << "\n==> ";
    cin >> choice;
    if(choice==1){
        cout<<"\nEnter Employee ID: ";
        cin>>tempId;
        cout<<"Enter Full Name: ";
        cin.ignore();
        getline(cin, tempName);
        cout << "Enter Job Designation: ";
        getline(cin, tempRole); 
        cout << "Enter Starting Salary: $";
        cin >> tempSalary;
        Database.addEmployee(tempId, tempName, tempRole, tempSalary);}
    else if(choice == 2) {
        Database.displayAll();}
    else if(choice == 3) {
        int searchId;
        cout << "\nEnter Employee ID to search: ";
        cin >> searchId;
        Database.searchEmployee(searchId);}
    else if(choice == 4) {
            int updateId;
        cout<<"\nEnter Employee ID for payroll adjustment: ";
        cin>>updateId;
        Database.updateSalary(updateId);}
    else if(choice == 5){
        cout << "\n[System] Encrypting database... Powering down.\n";}
    else{
        cout << "\n[Error] Invalid authorization code. Try again.\n";}}
while (choice != 5);
return 0;
}