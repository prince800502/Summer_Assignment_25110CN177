#include<iostream>
using namespace std;
long long fact(int n);
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Factorial: "<<fact(a);
    return 0;
}

long long fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}