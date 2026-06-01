#include<iostream>
using namespace std;
int main(){
    int n,sum=0,r;
    int fact=1;
    cout<<"Enter a number : ";
    cin>>n;
    int x=n;
    while(n>0){
        r=n%10;
        for(int i=1;i<=r;i++){
            fact*=i;
        }
        sum+=fact;
        fact=1;
        n=n/10;
    }
    if(sum==x){
        cout<<x<<" is a strong number";
    }
    else{
        cout<<x<<" is not a strong number";
    }
    return 0;
}