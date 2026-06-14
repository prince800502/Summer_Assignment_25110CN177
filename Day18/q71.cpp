#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n;
    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    //sorting of array
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }
    int x,low = 0, high = n-1;
    cout<<"Enter required element: ";
    cin>>x;
    bool found = false;
    while(low<=high){
        int mid = low + (high-low)/2;
    if(A[mid]==x){
        cout<<"Element found at index "<<mid<<" after sorting";
        found = true;
        break;
    }
    else if(x<A[mid]){
        high = mid-1;
    }
    else if(x>A[mid]){
        low = mid+1;
    }
}
if(!found){
cout<<"Element not found";
}
return 0;
}