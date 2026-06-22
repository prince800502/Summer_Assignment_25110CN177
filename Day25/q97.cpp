#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[100], n1, B[100], n2;
    cout<<"Enter size of first array: ";
    cin>>n1;
    cout<<"Enter elements of first array (in sorted way): ";
    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    cout<<"Enter the size of second array: ";
    cin>>n2;
    cout<<"Enter the elements of second array (in sorted way): ";
    for(int i=0;i<n2;i++){
        cin>>B[i];
    }
    cout<<"Merged Array: "<<endl;
    int j=0,i=0;
    while(i<n1 && j<n2){
        if(A[i]<B[j]){
            cout<<A[i]<<"  ";
            i++;
        }
        else if(B[j]<A[i]){
            cout<<B[j]<<"  ";
            j++;
        }
        else{
            cout<<A[i]<<"  "<<B[j]<<"  ";
            i++;
            j++;
        }
    }
    while(i<n1){
        cout<<A[i]<<"  ";
        i++;
    }
    while(j<n2){
        cout<<B[j]<<"  ";
        j++;
    }
    
return 0;

}