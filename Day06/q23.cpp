#include<iostream>
using namespace std;
int main(){
    int n,bit=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        if(n%2==1){
            bit++;
        }
        n/=2;
    }
    cout<<"Set bits in a number is: "<<bit;
    return 0;
}