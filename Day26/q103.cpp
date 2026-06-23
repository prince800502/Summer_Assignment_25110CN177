#include<bits/stdc++.h>
using namespace std;
int random_generator(){
    long long n = rand();
    int random_guess = n%100 + 1;
    return random_guess;
}
int main(){
    srand(time(0));
    //Pin is Given as 2026
    int real_pin = 2026,pin =0;
    cout<<"Welcome, This is an ATM Simulation"<<endl;
    cout<<"\n";
    cout<<"Note :-> Please select the options as their corresponding numbers"<<endl;
    cout<<"\n";
    cout<<"Main Menu"<<endl;
    cout<<"Please choose the transaction type by replying with number\n"<<endl;
    cout<<"\n";
    cout<<"       1.Deposit Cash     2.Withdraw Cash     3.Check Balance\n"<<endl;
    int opt,cash_deposit,cash_with;
    cin>>opt;
    if(opt == 1){
        cout<<"Enter amount to be deposited: ";
        cin>>cash_deposit;
        cout<<"Select type of Currency Notes: \n"<<endl;
        cout<<"   1) 100rs      2) 200rs      3) 500rs      4) 2000rs\n";
        int currency;
        cin>>currency;
        while(pin!=real_pin){
        cout<<"Enter your pin to Check Balance: ";
        cin>>pin;
        if(pin == real_pin){
             cout<<"Insert the amount in the cash deposited section"<<endl;
            cout<<cash_deposit<<"rs Deposited  succesfully\n"<<endl;
            cout<<"Thank you";
        }
        else{
            cout<<"Incorrect Pin"<<endl;
            cout<<"Try again"<<endl;
        }
    }
    }
    else if(opt == 2){
        cout<<"Enter amount to be Withdrawn: ";
        cin>>cash_with;
        while(pin!=real_pin){
            cout<<"Enter four digit atm pin: ";
            cin>>pin;
        if(pin == real_pin){
            cout<<"Take out your cash"<<endl;
            cout<<"Thank you"<<endl;
            break;
        }
        else{
            cout<<"Incorrect Pin"<<endl;
            cout<<"Try Again"<<endl;
        }
    }
}

else if(opt == 3){
    while(pin!=real_pin){
        cout<<"Enter your pin to Check Balance: ";
        cin>>pin;
        if(pin == real_pin){
            cout<<"Your Balance is: "<<random_generator()<<"rs";
            break;
        }
        else{
            cout<<"Incorrect Pin"<<endl;
            cout<<"Try again"<<endl;
        }
    }
}
else{
    cout<<"Invalid Input";
}

    return 0;
}