#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class contact{
    private:
        string Name;
        string Number;
        int totalnum=0;
    public:
void addcontact(){
    cout<<"Enter the Contact: ";
    cin>>Name;
    cout<<"Enter the Name: ";
    cin>>Number;
}
void displayContact(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Number: "<<Number<<endl;
}
void editName(string newName){
        Name = newName;}
void editNumber(string newNumber){
        Number = newNumber;}
void delN(){
    Name = "Empty";
    Number = "null";
}
void setdetails(string tName,string tNumber){
    Name = tName;
    Number = tNumber;
}
string getName() {
    return Name;}
string getNumber() {
    return Number;}
};
void savefile(contact book[],int totalnum){
    ofstream outfile("contacts.txt");
    for(int i=0;i<totalnum;i++){
    outfile<<book[i].getName()<<" "<<book[i].getNumber()<<"\n";}
    outfile.close();
    cout<<"[System] Files Saved!!\n";
}
void loadfile(contact book[],int &totalnum){
    ifstream infile("contacts.txt");
    if(!infile){return;}
    string tName;
    string tNumber;
    while(infile>>tName>>tNumber){
        book[totalnum].setdetails(tName,tNumber);
        totalnum++;}
    infile.close();
}
int main(){
    contact book[1000];
    int totalnum=0;
    int choice;
    loadfile(book, totalnum);
    do{
        cout << "\n\t\t\t=== CONTACT SYSTEM ===\n";
        cout << "\n1. Add New Contact";
        cout << "\n2. View All Contacts";
        cout << "\n3. Search Contact (By Name)";
        cout << "\n4. Update/Edit Contact";
        cout << "\n5. Delete Contact";
        cout << "\n6. Exit & Save";
        cout << "\n==> ";
        cin >> choice;
        if(choice==1){
                book[totalnum].addcontact();
                cout<<"\n[System] Success!Contact "<<book[totalnum].getNumber()<<" is now saved!!"<<book[totalnum].getName()<<".\n";
                totalnum++;
            }
        else if(choice==2){
            if(totalnum==0){
                cout<<"there is no contact in the book!!";}
            else{
            for(int i = 0; i < totalnum; i++) {
                book[i].displayContact();}}
    cout<<"------------------------------------------------";
            }
        else if(choice==3){
            string numname;
            cout<<"Enter the Name of the holder or number of the holder: ";
            cin>>numname;
            bool show = false;
            for(int i=0;i<totalnum;i++){
                if(book[i].getName()==numname||book[i].getNumber()==numname){
                    book[i].displayContact();
                    show = true;
                    break;
                }
                if(show==false){
                    cout<<"There is no contact on the given info!! ";}}
            }
        else if(choice==4){
            int choose;
        do{
            cout<<"Editing options!!";
            cout<<"\n1. Change Name!";
            cout<<"\n2. Change Number!";
            cout<<"\n3. Exit!\n";
            cout<<"==> ";
            cin >> choose;
            if(choose==1){
                string newName;
                cout<<"Enter the Name of the holder: ";
                cin>>newName;
                bool found = false;
                for(int i=0;i<totalnum;i++){
                    if(book[i].getName()==newName){
                        cout<<"Enter the new Name: ";
                        cin>>newName;
                        cout<<"[System] Name Changed!!";
                        book[i].editName(newName);
                        found = true;
                        break;}}
                    if(found==false){
                        cout<<"No contact of this name!!";}
            }
            else if(choose==2){
                string newNumber;
                bool found = false;
                cout<<"Enter the Number of the holder: ";
                cin>>newNumber;
                for(int i=0;i<totalnum;i++){
                    if(book[i].getNumber()==newNumber){
                        cout<<"Enter the new Number: ";
                        cin>>newNumber;
                        book[i].editNumber(newNumber);
                        cout<<"[System] Number Changed!!";
                        found = true;
                        break;}}
                    if(found==false){
                    cout<<"No contact of this number!!";}
            }
            else if(choose==3){
            cout<<"returning....!!";
            break;}
            else{cout<<"Invalid input plz try again";}}
            while(choose!=3);
        }
        else if(choice==5){
            string dnum;
            bool found = false;
            cout<<"Enter the number to be deleted: ";
            cin>>dnum;
            for(int i=0;i<totalnum;i++){
                if(dnum==book[i].getNumber()){
                    for(int j = i; j < totalnum - 1; j++){
                        book[j] = book[j + 1];}
                    totalnum--;
                cout<<"\n[System] Success! Contact "<<dnum<<" is now deleted.\n";
                found = true;
                break;}}
                if(found==false){
                    cout<<"Contact not found";
                }}
        else if(choice==6){
            cout<<"========SYSTEM SHUTDOWN==========\n";
            savefile(book,totalnum);
            return 0;}
        else{cout<<"Wrong selection plz try again!!";}}
    while(choice!=6);
return 0;
}