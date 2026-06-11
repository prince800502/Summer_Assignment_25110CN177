#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int j=0; j<n/2; j++){
        swap(A[j], A[n-1-j]);
    }
  cout<<"Reversed Array is given below: "<<endl;
  for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    

    return 0;
}