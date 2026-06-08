#include<iostream>
using namespace std;
void palindrome(int a);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    palindrome(n);
    return 0;
}

void palindrome(int a){
    int rev=0,r;
    int n=a;
    while(a>0){
        r=a%10;
        rev = rev*10 + r;
        a/=10;
    }
    if(rev == n){
        cout<<"Number is pallindrome";
    }
    else
    cout<<"Number is not pallindrome";
}