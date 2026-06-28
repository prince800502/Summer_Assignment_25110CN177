  #include<iostream>
#include<string>
#include<fstream>
using namespace std;
    class library{
        private:
            string booktitle;
            int bookid;
            string bookauthor;
            bool status;
        public:
void addbook(){
    cout <<"\n====Book Details====\n";
    cout <<"Enter Book Title: ";
    cin>>booktitle;
    cout <<"Enter Book ID: ";
    cin>>bookid;
    cout <<"Enter Book Author:";
    cin>>bookauthor;
    status=true;
}
void displaybooks(){
    cout << "Book Title: " << booktitle << "\n";
    cout << "Book ID:    " << bookid << "\n";
    cout << "Author:     " << bookauthor << "\n";
    if(status==true){
        cout << "Status:    [Available on Shelf]\n";}
    else {
        cout << "Status:    [Issued to Student]\n";}
}
string getbooktitle(){
    return booktitle;}
int getbookid(){
    return bookid;}
string getbookauthor(){
    return bookauthor;}
bool getstatus(){
    return status;}
void setdetails(string tbooktitle,int tbookid,string tbookauthor,bool tstatus) {
            booktitle = tbooktitle;
            bookid = tbookid;
            bookauthor = tbookauthor;
            status = tstatus;}
void issuebook() {
        if (status == true) {
            status = false;
            cout << "\n[System] Success! Book has been issued to the student.\n";
        } else {
            cout << "\n[Error] Sorry, this book is currently checked out by someone else.\n";}}
void returnbook() {
        if (status == false) {
            status = true;
            cout << "\n[System] Success! Book returned and placed on the shelf.\n";
        } else {
            cout << "\n[System] This book is already in the library!\n";}}};
void savefile(library lib[],int totalbooks){
    ofstream outfile("library.txt");
    for(int i=0;i<totalbooks;i++){
        outfile<<lib[i].getbooktitle()<<" "<<lib[i].getbookid()<<" "<<lib[i].getbookauthor()<<" "<<lib[i].getstatus()<<"\n";
    }
    outfile.close();
    cout << "\n[System] Library inventory safely saved!\n";}
void loadfile(library lib[],int &totalbooks){
    ifstream infile("library.txt");
    if(!infile){return;}
    string title,author;
    int tid;
    bool tstatus;
    while(infile>>title>>tid>>author>>tstatus){
        lib[totalbooks].setdetails(title,tid,author,tstatus);
        totalbooks++;
    }
    infile.close();
    cout << "\n[System] Library Loaded! " << totalbooks << " books restored to shelves.\n";
}
int main(){
    library lib[100];
    int totalbooks=0;
    int choice;
    char std;
    loadfile(lib, totalbooks);
    do {
         cout << "\n\t\t\tA B C Library Books Management System\n";
        cout << "\n1. Add New Books";
        cout << "\n2. View All Books";
        cout << "\n3. Issue Book";
        cout << "\n4. Return Book";
        cout << "\n5. Exit System";
        cout << "\n==> ";
        cin >> choice;
        if (choice == 1) {
            lib[totalbooks].addbook();
            totalbooks++;
            cout << "\n[System] Book added successfully!\n";}
        else if (choice == 2) {
            if (totalbooks == 0) {
                cout << "\n[System] No Books in the database!\n";}
            else {
                for (int i = 0; i < totalbooks; i++) {
                    cout << "\n\t\t--------------------Book--------------------\n";
                    lib[i].displaybooks();}}}
        else if (choice == 3) {
            int bid;
            cout<<"Enter book Id to issue book: ";
            cin>>bid;
            bool search1=false;
            for(int i=0;i<totalbooks;i++){
                if(lib[i].getbookid()==bid){
                    search1 = true;
                lib[i].issuebook();
                break;}}
            if (search1 == false) {
                cout << "\n[Error] Book ID " << bid << " not found in database!\n";}}
        else if (choice == 4) {
            int rbid;
            cout<<"Enter book Id to return book: ";
            cin>>rbid;
            bool search2 = false;
            for(int i=0;i<totalbooks;i++){
                if(lib[i].getbookid()==rbid){
                    search2 = true;
                lib[i].returnbook();
                break;}}}
        else if (choice == 5) {
            savefile(lib, totalbooks);
            cout << "\n====== SYSTEM SHUTDOWN ======\n";}
        else {cout << "\nInvalid choice! Try again.\n";}
    } while (choice != 5);
return 0;
}