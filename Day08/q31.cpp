#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(char j=65;j<=i+64;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}