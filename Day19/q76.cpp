#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[30][30],n,sum = 0;
    cout<<"Enter the value of n for rows and columns in a square matrix: ";
    cin>>n;
    cout<<"Enter the elements of matrix A: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
            if(i==j){
                sum += A[i][j];
            }
        }
    }
    cout<<"Sum of the diagonal elements is: "<<sum;
    return 0;
}
