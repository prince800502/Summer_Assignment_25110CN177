#include<iostream>
using namespace std;
int sod(int a);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The sum of the digits is: "<<sod(n);
    return 0;
}

int sod(int a){
    if(a==0){
        return 0;
    }
    int sum=0,r,q;
    r=a%10;
    q = a/10;
    sum = r+sod(q);
    return sum;
}