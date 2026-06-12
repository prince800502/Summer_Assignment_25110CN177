#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n,sum;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter the sum you want: ";
    cin>>sum;

    for(int j=0;j<n;j++){
        
        for(int k=0;k<n;k++){
            if(A[j]+A[k]==sum && j!=k){
                cout<<"These elements will give the "<<sum<<" : "<< A[j] << "  "<<A[k];
            }
        }
    }
    return 0;
}
