#include <iostream>
#include <string>
using namespace std;
class Book{
    public:
        int id;
        string title;
        string author;
        bool isIssued;
};
class Library{
    private:
        Book collection[100];
        int maxCapacity;
        int currentCount;
    public:
        Library(){
            maxCapacity = 100;
            currentCount = 0;}
void addBook(int id, string t, string a){
    if (currentCount >= maxCapacity) {
    cout << "[Error] Library shelves are full!\n";} 
    else{
        collection[currentCount].id = id;
        collection[currentCount].title = t;
        collection[currentCount].author = a;
        collection[currentCount].isIssued = false;
        currentCount++;
        cout<<"[System] '"<<t<<"' has been added to the catalog.\n";}
}   // <-- Missing brace added here

void displayAll(){
    if (currentCount == 0) {
        cout << "\n[System] The library is currently empty.\n";
        return;}
        cout << "\n=== LIBRARY CATALOG ===\n";
        for(int i=0;i<currentCount;i++){
            cout <<"ID: "<<collection[i].id<<" | Title: "<< collection[i].title<<" | Author: "<< collection[i].author<<" | Status: ";
            if(collection[i].isIssued==true) {
                cout << "[ISSUED]\n";} 
            else{
                cout << "[AVAILABLE]\n";}}}
void issueBook(int searchId){
bool found = false;
    for(int i=0;i<currentCount;i++){
        if(collection[i].id == searchId){
            found = true;
            if(collection[i].isIssued==true){
                cout<<"[Error] Sorry, '"<<collection[i].title<< "' is already checked out.\n";} 
            else{
                collection[i].isIssued = true;
                cout<<"[System] '"<<collection[i].title <<"' has been successfully issued.\n";}
                break;}}
        if(found==false){
            cout<<"\n[Error] No book found with ID: "<< searchId<<"\n";}}
void returnBook(int searchId){
bool found = false;
    for(int i=0;i<currentCount;i++){
        if(collection[i].id == searchId){
            found = true;
            if(collection[i].isIssued==false){
                cout<<"[Error] '"<<collection[i].title<<"' was not checked out.\n";}
            else{
                collection[i].isIssued = false;
                cout<<"[System] '"<<collection[i].title<<"' has been returned to the shelf.\n";}
                break;}}
        if(found==false){
            cout<<"\n[Error] No book found with ID: "<< searchId<<"\n";}}
};
int main(){
    cout<<"=== LIBRARY SYSTEM ===\n";
    Library centralLibrary; 
    int tempId;
    string tempTitle;
    string tempAuthor;
    int choice;
    do {
        cout << "\n\t\t=========== Library Menu ===========";
        cout << "\n1. Add New Book";
        cout << "\n2. View Catalog";
        cout << "\n3. Issue a Book";
        cout << "\n4. Return a Book";
        cout << "\n5. Shut Down System";
        cout << "\n==> ";
        cin >> choice;
        if (choice==1){
            cout<<"\nEnter Book ID: ";
            cin>>tempId;
            cout<<"Enter Title: ";
            cin.ignore();
            getline(cin,tempTitle);
            cout<<"Enter Author: ";
            getline(cin,tempAuthor);
            centralLibrary.addBook(tempId,tempTitle,tempAuthor);}
        else if(choice==2){
            centralLibrary.displayAll();}
        else if(choice==3){
            int issueId;
            cout<<"\nEnter Book ID to issue: ";
            cin>>issueId;
            centralLibrary.issueBook(issueId);}
        else if(choice==4){
            int returnId;
            cout<<"\nEnter Book ID to return: ";
            cin>>returnId;
            centralLibrary.returnBook(returnId);}
        else if(choice==5){
            cout<<"\n[System] shuting down.\n";}
        else{cout<<"\n[Error] Invalid command. Try again.\n";}}
while (choice != 5);
return 0;
}