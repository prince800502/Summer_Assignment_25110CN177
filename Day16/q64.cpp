#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elments of the Array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int j=0;j<n;j++){
         bool found = false;
         for(int k=0;k<j;k++){
            if(A[j]==A[k]){
                found=true;
                break;
            }
         }
         if(!found){
        cout<<A[j]<<" ";
    }
    }
    
    return 0;
}