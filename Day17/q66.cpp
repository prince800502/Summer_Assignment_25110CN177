#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],B[50],I[100],n1,n2;
    cout<<"Enter the size of the first array: ";
    cin>>n1;
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n1;i++){
        cin>>A[i];
        I[i]=A[i];
    }
    cout<<"Enter the size of the second array: ";
    cin>>n2;
    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<n2;i++){
        cin>>B[i];
        I[n1+i]=B[i];
    }
    for(int j=0;j<n1+n2;j++){
        bool found = false;
        for(int k=0;k<j;k++){
            if(I[j]==I[k]){
                found =true;
                break;
            }
        }
        if(!found){
            cout<<I[j]<<" ";
        }
    }
    return 0;
}