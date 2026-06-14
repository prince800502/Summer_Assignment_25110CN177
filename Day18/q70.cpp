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
        int min = i;
        for(int j=i;j<n;j++){
            if(A[min]>A[j]){
                min = j;
            }
        }
        swap(A[i],A[min]);
    }
    cout<<"Sorted array is given below: "<<endl;
    for(int k=0;k<n;k++){
        cout<<A[k]<<"  ";
    }
    return 0;
}