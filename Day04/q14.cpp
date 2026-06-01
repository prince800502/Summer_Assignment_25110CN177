#include<iostream>
using namespace std;
int main(){
    int first,second,n,next_term;
    first=0;
    second=1;
    cout<<"Enter the nth term of fibonacci series: ";
    cin>>n;
    if(n==1){
        cout<<0;
    }
    else if(n==2){
        cout<<1;
        }
        else {
    for(int i=2;i<n;i++){
        next_term=first+second;
        first=second;
        second=next_term;
    }
     cout<<next_term;
}
   
    return 0;
}
