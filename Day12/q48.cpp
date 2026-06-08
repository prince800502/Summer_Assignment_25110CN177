#include<iostream>
using namespace std;
void perfect(int n);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    perfect(n);
    return 0;
}

void perfect(int a){
    int sum=0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==a){
        cout<<"Entered number is a perfect number";
    }
    else
    cout<<"Entered number is not a perfect number";
}