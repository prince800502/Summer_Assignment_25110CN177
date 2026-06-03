#include<iostream>
using namespace std;
int rev(int a,int b);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of a number is: "<<rev(n,0);
    return 0;
}

int rev(int n,int r){
    if(n==0){
        return r;
    }
    int last_digit = n%10;
    r = r*10+  last_digit;
    return rev(n/10, r);
}