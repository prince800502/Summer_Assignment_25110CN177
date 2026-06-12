#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n,freq[50],count=0;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int max_freq=0,element;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(A[i]==A[j]){
                count++;

            }

        }

        if(count>max_freq){
            max_freq=count;
            element = A[i];
        }

    }

    cout<<"Element with "<<max_freq<<" of highest frequency is: "<<element;
    return 0;
}