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
    cout<<"Intersection of both the array is given below: "; 
    for(int i=0;i<n1;i++){
        bool alreadyprint= false;

        for(int m=0;m<i;m++){
            if(A[i]==A[m]){
                alreadyprint=true;
                break;
            }
        }

        if(alreadyprint){
            continue;
        }
        for(int j=0; j<n2 ;j++){
            if(A[i]==B[j]){
                cout<<A[i]<<"  ";
                break;
            }
        }
    }

    return 0;

}