#include<iostream>
using namespace std;
int main(){
    int n,freq=0;
    bool found = false;
    int A[]={15,52,63,96,85,74,15,2639,59,85,24,36,63,96,85,52};
    cout<<"Enter a number to find it's frequency: ";
    cin>>n;
    int size = sizeof(A)/sizeof(A[0]);
    for(int i=0;i<size;i++){
        if(A[i]==n){
            freq++;
            found = true;
        }
    }
    if(found){
        cout<<"Data found"<<endl;
        cout<<"Frequency of Data: "<<freq;
    }
    else {
        cout<<"Data not found";
    }


    return 0;
    


}