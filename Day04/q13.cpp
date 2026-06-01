#include<iostream>
using namespace std;
int main(){
    int first,second,n,next_term;
    first=0;
    second=1;
    cout<<"Enter the terms in fibonacci series: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<first<<"\t";
        next_term=first+second;
        first=second;
        second=next_term;
    }
    return 0;
}
