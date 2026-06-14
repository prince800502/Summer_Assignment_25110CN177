#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    //selection sorting
    for(int i=0;i<n-1;i++){
        int max = i;
        for(int j=i;j<n;j++){
            if(A[max]<A[j]){
                max = j;
            }
        }
        swap(A[i],A[max]);
    }
    cout<<"Sorted array in decending order is given below: "<<endl;
    for(int k=0;k<n;k++){
        cout<<A[k]<<"  ";
    }
    return 0;
}