#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],B[50],C[100],n1,n2;
    cout<<"Enter size of the first array: ";
    cin>>n1;
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    cout<<"Enter size of the second array: ";
    cin>>n2;
    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<n2;i++){
        cin>>B[i];
    }
    for(int k=0;k<n1;k++){
        
            C[k]=A[k];
    }
    for(int f=0;f<n2;f++){
        
            C[n1+ f]=B[f];
        
    }
    cout<<"Merged array is given below: ";
    for(int i=0;i<n1+n2;i++){
        cout<<C[i]<<"  ";
    }
    return 0;
}