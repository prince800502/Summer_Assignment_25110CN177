#include<iostream>
using namespace std;
int main(){
    int n,reverse=0,r;
    cout<<"Enter a number: ";
    cin>>n;
    int x=n;
    while(n>0){
        r=n%10;
        reverse = r + reverse*10;
        n=n/10;
    }
    if(x==reverse){
        cout<<x<<" is Pallindrome.";
    }
    else{
        cout<<"Given number is not Pallindrome.";
    }
    return 0;
}