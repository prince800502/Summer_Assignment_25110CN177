#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class bank{
    private: 
        string acholder;
        double ac;
        double balance;
        double amount=0;
    public:
void addac(double verifiedAC){
    ac = verifiedAC;
    cout<<"Enter Name: ";
    cin>>acholder;
    cout<<"Initial Amount deposition: $";
    cin>>balance;
}
void viewac(){
    cout<<"Name: "<<acholder<<endl;
    cout<<"Account Number: "<<ac<<endl;
    cout<<"-------------------------------------------------\n";}
void withdraw(){
    cout<<"Balance: $"<<balance;
    cout<<"\nEnter Amount to Withdraw: ";
    cin>>amount;
    if(amount>balance){
        cout<<"Insufficent balance!!";}
    else if(amount<=0){
        cout<<"Incorrect input";}
    else{
        balance=balance-amount;
        cout<<"Balance: $"<<balance;}
    }
void deposite(){
    cout<<"Balance: $"<<balance;
    cout<<"\nEnter Amount to Deposite: ";
    cin>>amount;
    if(amount>0){
    balance=balance+amount;
    cout<<"Successful!!\n";
    cout<<"Balance: $"<<balance;}
    else{
    cout<<"Incorrect Input\n";
    cout<<"failed!!";
    }}
void searchac(){
    cout<<"Name: "<<acholder<<endl;
    cout<<"Balance: "<<balance<<endl;
    }    
string getacholder(){
    return acholder;}
int getac(){
    return ac;}
double getbalance(){
    return balance;}
void setdetail(string tacholder,double tac,double tbalance){
    acholder = tacholder;
    ac = tac;
    balance = tbalance;
}};
void savefile(bank b[],int totalacc){
    ofstream outfile("bank file.txt");
    for(int i=0;i<totalacc;i++){
    outfile<<b[i].getacholder()<<" "<<b[i].getac()<<" "<<b[i].getbalance()<<"\n";}
    outfile.close();
    cout<<"Files saved!!";
}
void loadfile(bank b[],int &totalacc){
    ifstream infile("bank file.txt");
    if(!infile){return;}
    string tacholder;
    double tac;
    double tbalance;
    while(infile>>tacholder>>tac>>tbalance){
    b[totalacc].setdetail(tacholder,tac,tbalance);
    totalacc++;}
    infile.close();
}
int main(){
    bank b[100];
    int gac;
    int totalacc=0;
    int choice;
    loadfile(b , totalacc);
    cout<<"\t\t\t==================Welcome===================\n";
    cout<<"\t\t\t---------Bank Account Management System-----\n";
    do{
        cout<<"\n-------Options-------";
        cout<<"\n1. Create Account: ";
        cout<<"\n2. View All Accounts: ";
        cout<<"\n3. Withdraw Money: ";
        cout<<"\n4. Deposite Money: ";
        cout<<"\n5. Search Bank Account: ";
        cout<<"\n6. Exit and Save: \n";
        cout<<"==>";
        cin>>choice;
        if(choice==1){
            double nac;
            bool search = false;
            cout<<"Enter New Account Number: ";
            cin>>nac;
            for(int i=0;i<totalacc;i++){
                if(nac==b[i].getac()){
                    search = true;
                    break;}}
                if(search==true){
                    cout<<"account already exist!!\n cannot creat new account";}
                else{
                    b[totalacc].addac(nac);
                    totalacc++;
                    cout<<"Account Created Successfully!!";}}
        else if(choice==2){
            for(int i=0;i < totalacc;i++){
                b[i].viewac();
            }}
        else if(choice==3){
            bool search = false;
            cout<<"Enter Account number: ";
            cin>>gac;
            for(int i=0;i<totalacc;i++){
                if(b[i].getac()==gac){
                search = true;
                b[i].withdraw();
                break;}}
            if(search==false){
                cout<<"The Account does not exist!!! ";}}
        else if(choice==4){
            bool search = false;
            cout<<"Enter Account number: ";
            cin>>gac;
            for(int i=0;i<totalacc;i++){
                if(b[i].getac()==gac){
                search = true;
                b[i].deposite();
                break;}}
            if(search==false){
                cout<<"The Account does not exist!!! ";}
        }
        else if(choice==5){
            bool search = false;
            cout<<"Enter Account number: ";
            cin>>gac;
            for(int i=0;i<totalacc;i++){
                if(b[i].getac()==gac){
                search = true;
                b[i].searchac();
                break;}}
            if(search==false){
                cout<<"The Account does not exist!!! ";}}
        else if(choice==6){
            cout<<"=========System Shutdown=========\n";
            savefile(b ,totalacc);}
        else{
            cout<<"Incorrect Selection plz try again!!";
        }}
    while(choice!=6);
return 0;
}