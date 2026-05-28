#include<iostream>
using namespace std;
int main(){
    int n,count=0,r;
    cout<<"Enter a number: ";
    cin>>n;
    int x=n;
    while(n>0){
        r=n%10;
        count++;
        n=n/10;
    }
    cout<<"There are "<<count<<" digits in "<<x;
    return 0;
}