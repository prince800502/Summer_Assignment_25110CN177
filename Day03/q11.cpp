#include<iostream>
using namespace std;
int main(){
    int a,b,rem=0;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int x=a;
    int n=b;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;

    }
    cout<<"The GCD of "<<x<<" and "<<n<<" is: "<<a;
    return 0;
}