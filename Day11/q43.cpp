#include<iostream>
using namespace std;
void prime(int a);
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    prime(a);
    return 0;
}

void prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Entered number is prime.";
    }
    else{
        cout<<"Number is not Prime";
    }
}