#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50][50],n1,m1;
    cout<<"Enter number of rows for the matrix: ";
    cin>>n1;
    cout<<"Enter number of columns for the matrix: ";
    cin>>m1;
    cout<<"Enter the elements for matrix: "<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>A[i][j];
        }
    }
if(n1==m1){
    bool match = true;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            if(A[i][j]!=A[j][i]){
                match = false;
                break;
            }
        }
        if(!match){
            break;
        }
    }
if(match){
    cout<<"Matrix is a symmetric matrix";
}
else{
    cout<<"It is not a symmetric matrix";
}
}
else{
    cout<<"Symmetric matrix must be a square matrix";
}
return  0;

    
}