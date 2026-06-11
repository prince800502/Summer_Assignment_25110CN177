#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n,x;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n;i++){
        cin>>A[i];
    }
    x=A[0];
    for(int j=0; j<n-1 ; j++){
        A[j]=A[j+1];
    }
    A[n-1]=x;
    cout<<"Left rotated Array: "<<endl;
    for(int i=0; i<n;i++){
        cout<<A[i]<<"\t";
    }
    return 0;
}