#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[50][50],B[50][50],C[50][50]={},n1,m1,n2,m2;
    cout<<"Enter the number of rows in First matrix: ";
    cin>>n1;
    cout<<"Enter the number of columns in the first matrix: ";
    cin>>m1;
    cout<<"Enter the elements of the first matrix: "<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>A[i][j];
        }
    }

    cout<<"Enter the number of rows in Second matrix: ";
    cin>>n2;
    cout<<"Enter the number of columns in the Second matrix: ";
    cin>>m2;
    cout<<"Enter the elements of the Second matrix: "<<endl;
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>B[i][j];
        }
    }
if(m1==n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            for( int k=0;k<m1;k++){
         C[i][j] = C[i][j] + A[i][k]*B[k][j];
            }
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
}
else {
    cout<<"Matrix multiplication not possible";
}
    return 0;
}