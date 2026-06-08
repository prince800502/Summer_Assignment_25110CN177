#include<iostream>
#include<cmath>
using namespace std;
void arm(int a);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    arm(n);
    return 0;
}

void arm(int a){
    int  r,count=0,sum=0;
    int x=a;
    while(x>0){
        x/=10;
        count++;
    }
    x=a;
    while(x>0){
        r=x%10;
        sum = sum + pow(r,count);
        x/=10;
    }
    if(sum == a){
        cout<<"Entered number is Armstrong";
    }
    else if(a==0){
        cout<<"Entered number is armstrong";
    }
    else
    cout<<"It's not Armstrong";
}