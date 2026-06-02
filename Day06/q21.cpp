#include<iostream>
using namespace std;
int main(){
    int n,rem=1,count=0;
    int A[100];
    cout<<"Enter a number: ";
    cin>>n;
    int quo=n;
    for(int i=0; quo!=0 ; i++){
        rem =quo%2;
        A[i] = rem;
        quo=quo/2;
        count++;
    }
    cout<<"Binary form of given decimal input: ";
    for(int j=count-1;j>=0;j--){
        cout<<A[j];
    }
    return 0;
}