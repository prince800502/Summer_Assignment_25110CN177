#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int k=0;k<n-1;k++){
        for(int j=0;j<n-1-k;j++){
        if(A[j]>A[j+1]){
            swap(A[j],A[j+1]);
        }
    }
    }
    cout<<"Sorted Array is given below: "<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<"  ";
    }
    return 0;

}