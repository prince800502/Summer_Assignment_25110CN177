#include<bits/stdc++.h>
using namespace std;
int random_generator(){
    long long n = rand();
    int random_guess = n%100 + 1;
    return random_guess;
}
int main(){
    cout<<"Are you ready to play the game"<<endl;
    cout<<"Enter 1 or 2 to select the options"<<endl;
    cout<<"1. Start              2.Exit"<<endl;
    int select;
    cin>>select;
    if(select == 1){
        cout<<"Let's go"<<endl;
    srand(time(0));
    int constant_num = random_generator();
    cout<<"I have selected a number between 1 to 100"<<endl;
    cout<<"You have to guess it"<<endl;
    int guess = 0;
    
    while(guess != constant_num ){
        cout<<"Any guesses: ";
        cin>>guess;
        if(guess <= 100 && guess >= 1){
        if(guess == constant_num){
            cout<<"Congratulation that's correct"<<endl;
            cout<<"You have won the game";
            break;
        }
        else if(guess<constant_num){
            cout<<"It's too low"<<endl;
            cout<<"Try again"<<endl;
        }
        else if(guess > constant_num){
            cout<<"It's too high"<<endl;
            cout<<"Try Again"<<endl;
        }
    }
    else{
        cout<<"Please enter a valid input"<<endl;
        cout<<"Try again"<<endl;
    }
    }
}
else if(select == 2){
        cout<<"Have a good Day, Thank you"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}