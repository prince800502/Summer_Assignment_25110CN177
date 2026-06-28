#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Seat{
    private:
        string viewerName;
        int seatNumber;
        bool booked;
    public:
void setupSeat(int sNum) {
            seatNumber = sNum;
            viewerName = "blank";
            booked = false;}
void bookSeat(string pName){
    viewerName = pName;
    booked = true;
    cout<<"\n[System] Success! Seat "<<seatNumber<<" is now reserved for "<<viewerName<<".\n";}
void cancelSeat(int sno){
    seatNumber = sno;
    booked = false;
    viewerName = "blank";
    cout<<"\n[System] Success! Seat "<<seatNumber<<" is now unreserved.\n";}
void setdetails(string tviewerName,int tseatNumber,bool tbooked){
    viewerName = tviewerName;
    seatNumber = tseatNumber;
    booked = tbooked;
}
string getviewerName() {
    return viewerName;}
int getseatNumber() {
    return seatNumber;}
bool getbooked() {
    return booked;}
};
void savefile(Seat theater[]){
    ofstream outfile("Ticket.txt");
    for(int i=0;i<50;i++){
    outfile<<theater[i].getviewerName()<<" "<<theater[i].getseatNumber()<<" "<<theater[i].getbooked()<<"\n";}
    outfile.close();
    cout<<"[System] Files Saved!!";
}
void loadfile(Seat theater[]){
    ifstream infile("Ticket.txt");
    if(!infile){return;}
    string tviewerName;
    int tseatNumber;
    bool tbooked;
    int i=0;
    while(infile>>tviewerName>>tseatNumber>>tbooked){
        theater[i].setdetails(tviewerName,tseatNumber,tbooked);
        i++;}
    infile.close();
}
int main(){
    Seat theater[50];
    int choice;
    for(int i=0;i<50;i++){
        theater[i].setupSeat(i+1);}
    loadfile(theater);
    do{
        cout << "\n\t\t\t=== GRAND CINEMA VIP BOOKING ===\n";
        cout << "\n1. Show Seat Map";
        cout << "\n2. Book a Ticket";
        cout << "\n3. Cancel Seat";
        cout << "\n4. Search viewer";
        cout << "\n5. Exit System";
        cout << "\n==> ";
        cin >> choice;
        if(choice==1){
            for(int i=0;i<50;i++){
            if(theater[i].getbooked()==true){
                cout<<"[XX]";}
            else if(i<9){
            cout<<"[0"<<theater[i].getseatNumber()<<"]";}
            else{
            cout<<"["<<theater[i].getseatNumber()<<"]";
            }
            if ((i+1)%10==0){
            cout << "\n";}}}
        else if(choice==2){
            int targetSeat;
            string pName;
            cout << "\nEnter Seat Number to Book (1-50): ";
            cin >> targetSeat;
            if(targetSeat<1 || targetSeat>50){
                cout << "\n[Error] Invalid Seat Number! Please choose between 1 and 50.\n";}
            else if (theater[targetSeat-1].getbooked()==true) {
                cout << "\n[Error] Sorry, Seat " << targetSeat << " is already booked!\n";}
            else{
                cout << "Enter Passenger Name (One word): ";
                cin >> pName;
                theater[targetSeat-1].bookSeat(pName);}}   
        else if(choice==3){
            int sno;
            cout << "\nEnter the seat Number to Cancel it: ";
            cin >> sno;
            if(sno<1 || sno>50){
                cout << "\n[Error] Invalid Seat Number! Please choose between 1 and 50.\n";}
            else if (theater[sno-1].getbooked()==false) {
                cout << "\n[Error] Sorry, Seat " << sno << " is already unresearved!\n";}
            else{theater[sno-1].cancelSeat(sno);}}
        else if(choice == 4) {
            string searchName;
            bool found = false;
            cout << "\nEnter Passenger Name to search: ";
            cin >> searchName;
            for(int i = 0; i < 50; i++){
                if(theater[i].getbooked() == true && theater[i].getviewerName() == searchName){
                    cout << "\n====== PASSENGER FOUND ======\n";
                    cout << "Name: " << searchName << "\n";
                    cout << "Seat: " << theater[i].getseatNumber() << "\n";
                    found = true;
                    break; }}
            if (found == false) {
                cout << "\n[Error] No reservation found for '" << searchName << "'.\n";}}
        else if(choice==5){
            cout<<"========SYSTEM SHUTDOWN==========\n";
            savefile(theater);
            return 0;}
        else{cout<<"Wrong selection plz try again!!";}}
    while(choice!=5);
return 0;
}