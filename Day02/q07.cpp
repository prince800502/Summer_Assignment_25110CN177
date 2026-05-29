#include<iostream>
using namespace std;
int main(){
    int n, s_o_m=1,r;
    cout<<"Enter a number: ";
    cin>>n;
    int x=n;
    while(n>0){
        r=n%10;
        s_o_m = s_o_m*r;
        n=n/10;
    }
    cout<<"Product of digits of  "<<x<<" is: "<<s_o_m;
    return 0;
}