#include<iostream>
using namespace std;
int main(){
    int n,sum=0,r;
    cout<<"Enter a number: ";
    cin>>n;
    int x=n;
    while(n>0){
        r=n%10;
        sum+=r;
        n=n/10;
    }
    cout<<"Sum of the digits of "<<x<<" is: "<<sum;
    return 0;
}