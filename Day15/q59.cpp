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
    x=A[n-1];
    for(int j=n-1;j>0;j--){
        A[j]=A[j-1];
    }
    A[0]=x;
    cout<<"Right rotated Array: "<<endl;
    for(int i=0; i<n;i++){
        cout<<A[i]<<"\t";
    }
    return 0;
}