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
    int count_odd=0,count_even=0;
    for(int j=0;j<n;j++){
        if(A[j]%2==0){
            count_even++;
        }
        else{
        count_odd++;
        }
    }
    cout << "Number of even elements in the array: " << count_even << endl;
cout << "Number of odd elements in the array: " << count_odd;
}
else{
    cout<<"Please enter size between 1 and 50";
}
    return 0;
}