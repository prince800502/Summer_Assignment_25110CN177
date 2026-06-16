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
    int sum = 0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            sum+=A[i][j];
        }
        cout<<"Sum of row "<<i<<" is: "<<sum<<endl;
        sum =0;
    }
    return 0;
}