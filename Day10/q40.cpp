#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int space=1;space<=5-i;space++){
            cout<<" ";
        }
        for(char star = 65; star<=i+64; star++){
            cout<<star;
        }
        for(char star = (i+64)-1; star>=65 ; star--){
            cout<<star;
        }
        cout<<endl;
    }
    return 0;
}