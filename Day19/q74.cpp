#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[30][30],B[30][30],S[30][30],row,column;
    cout<<"Enter the number of rows in matrices: ";
    cin>>row;
    cout<<"Enter the number of columns in matrices: ";
    cin>>column;
    cout<<"Enter the elements of matrix A: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements of matrix B: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>B[i][j];
        }
    }
    cout<<"Subtraction of the matrices (i.e: A-B) is given below: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
         S[i][j] = A[i][j] - B[i][j];
         cout<<S[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}