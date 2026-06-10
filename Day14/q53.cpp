#include<iostream>
using namespace std;
int main(){
    int n,x;
    bool found=false;
   int A[50];
   cout<<"Enter the size of Array less than 50: ";
   cin>>x;
   if(x>0 && x<=50){
   for(int j=0;j<x;j++){
    cin>>A[j];
   }

    cout<<"Enter a number to find it: ";
    cin>>n;
    for(int i=0;i<x;i++){
        if(A[i]==n){
            cout<<"Position Index: "<<i<<endl;
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Data found";
    }
    else{
        cout<<"Data not found";
    }
}
else{
    cout<<"Enter valid input";
}

    return 0;

}