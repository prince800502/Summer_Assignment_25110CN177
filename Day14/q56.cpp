#include<iostream>
using namespace std;
int main(){
    int A[50],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    if(n>0 && n<=50){
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Duplicated elements are: "<<endl;
    for(int i=0;i<n;i++){
        bool alreadyprint=false;

        for(int k=0;k<i;k++){
            if(A[k]==A[i]){
            alreadyprint=true;
            break;
            }
        }

        if(alreadyprint){
            continue;
        }

        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                cout<<A[i]<<"\t";
                break;
            }
        }
    }
}

else{
    cout<<"Please enter a valid input";
}

return 0;
}