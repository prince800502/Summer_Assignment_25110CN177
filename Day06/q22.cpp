#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,count=0,decimal=0,r;
    cout<<"Enter a binary input: ";
    cin>>n;
    int x=n;
    while(x>0){
        x/=10;
        count++;
    }
    for(int i=0; i<=(count-1) ; i++){
        r=n%10;
        decimal = decimal + r*pow(2,i);
        n/=10;
    }
    cout<<"Decimal form of given input is: "<<decimal;
    return 0;
}