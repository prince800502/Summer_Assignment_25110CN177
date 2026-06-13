#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],B[50],n1,n2;
    cout<<"Enter size of the first array: ";
    cin>>n1;
    cout<<"Enter elements of the first array: ";
    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    cout<<"Enter size of the second array: ";
    cin>>n2;
    cout<<"Enter elements of the second array: ";
    for(int i=0;i<n2;i++){
        cin>>B[i];
    }
    //comparing each element
    cout<<"Common elements of both the array is given below: "; 
    for(int i=0;i<n1;i++){
        bool alreadyprint= true;
        for(int j=0; j<n2 ;j++){
            if(A[i]==B[j] && alreadyprint){
                cout<<A[i]<<"  ";
                alreadyprint = false;
            }
        }
    }

    return 0;

}