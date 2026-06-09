#include<iostream>
using namespace std;
int main(){
    int A[50],n;
    cout<<"Enter size of the array: ";
    cin>>n;
    if(n>0 && n<=50){
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element index "<<i<<" :";
        cin>>A[i];
    }
    cout<<"Entered Array is: ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<"  ";
    }
}
else{
    cout<<"Please enter size between 1 and 50";
}
    return 0;
}