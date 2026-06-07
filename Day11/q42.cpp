#include<iostream>
using namespace std;
int max(int a, int b);
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Maximum number is: "<<max(a,b);
    return 0;
}

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}