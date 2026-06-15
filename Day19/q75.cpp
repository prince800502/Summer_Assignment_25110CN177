#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[30][30],T[30][30],row,column;
    cout<<"Enter the number of row in matrix: ";
    cin>>row;
    cout<<"Enter the number of column in matrix: ";
    cin>>column;
    cout<<"Enter the elements of matrix A: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Transpose of the matrix is given below: "<<endl;
    for(int j=0;j<column;j++){
        for(int i=0;i<row;i++){
            T[j][i] = A[i][j];
            cout<<T[j][i]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}