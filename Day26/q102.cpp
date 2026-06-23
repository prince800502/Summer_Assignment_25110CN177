#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<120 && age>0){
    if(age>=18){
        cout<<"Eligible for voting";
    }
    else if(age<18){
        cout<<"Not eligible for voting";
    }
}
else{
    cout<<"Please enter a valid input";
}
return 0;
}

