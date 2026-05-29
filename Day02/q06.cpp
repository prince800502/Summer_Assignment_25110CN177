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
    cout<<"The reverse of "<<x<<" is: "<<reverse;
    return 0;
}