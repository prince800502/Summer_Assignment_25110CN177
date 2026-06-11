#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50],n,j=0;
    cout<<"Enter the size  of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];

    }
    for(int i=0;i<n;i++){
     
        if(A[i]!=0){
            A[j]=A[i];
            j++;
    }
}
for(j;j<n;j++){
    A[j]=0;
}
cout<<"Final array with zero's at the end is given below: ";
for(int k=0;k<n;k++){
    cout<<A[k]<<"  ";
}
return 0;

}
