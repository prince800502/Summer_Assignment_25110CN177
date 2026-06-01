#include<iostream>
using namespace std;
int main(){
    int n,factor=0,count=0,prime_factor=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            factor=i;
        }
        for(int j=1;j<=factor;j++){
            if(factor%j==0){
                count++;
            }
        }
        if(count==2){
        prime_factor=factor;
        }
        count=0;
    }
    cout<<"largest prime factor: "<<prime_factor;
    return 0;
}