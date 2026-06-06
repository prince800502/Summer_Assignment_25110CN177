#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int space=1;space<=5-i;space++){
            cout<<" ";
        }
        for(int star = 1; star<=i; star++){
            cout<<star;
        }
        for(int star = i-1; star>=1 ; star--){
            cout<<star;
        }
        cout<<endl;
    }
    return 0;
}