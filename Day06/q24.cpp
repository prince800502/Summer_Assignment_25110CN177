#include<iostream>
using namespace std;
int main(){
    int n,x,result=1;
    cout<<"Enter a base number: ";
    cin>>n;
    cout<<"Enter it's power: ";
    cin>>x;
    for(int i=1;i<=x;i++){
        result*=n;
    }
    cout<<"Answer: "<<result;
    return 0;
}