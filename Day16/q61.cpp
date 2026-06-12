#include<bits/stdc++.h>
using namespace std;
int main(){

    int A[50],n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    // sorting array in  ascending Order: 
    sort(A, A+n);
    bool found = false;
    for(int j=0;j<n-1;j++){
        if(A[j+1]!=A[j]+1){
           cout<<"Missing element is: "<<A[j]+1;
           found = true;
        }
    }

    return 0;

}