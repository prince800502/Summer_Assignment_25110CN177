#include<iostream>
using namespace std;
int main(){
    for(char i=65;i<=69;i++){
        for(char j=65;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}