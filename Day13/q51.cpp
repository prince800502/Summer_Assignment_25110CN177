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
    int largest=A[0],smallest=A[0];
    for(int j=0;j<n;j++){
        if(largest<=A[j]){
            largest=A[j];
        }
    }
    for(int j=0;j<n;j++){
        if(smallest>=A[j]){
            smallest=A[j];
        }
    }
cout<<"smallest element in the array is: "<<smallest<<endl;
cout<<"largest element in the array is: "<<largest;
    

}
else{
    cout<<"Please enter size between 1 and 50";
}
    return 0;
}