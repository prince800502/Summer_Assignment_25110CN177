#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,r,count=0,armstrong=0;
    cout<<"Enter a number: ";
    cin>>n;
    int x=n;
    while(n>0){
        n=n/10;
        count++;
    }
    n=x;
    while(n>0){
        r=n%10;
        armstrong += pow(r,count);
        n=n/10;
    }
    if(armstrong==x){
        cout<<"Entered number is Armstrong Number";
    }
    else{
        cout<<"Entered number is not a Armstrong Number.";
    }
    return 0;
}