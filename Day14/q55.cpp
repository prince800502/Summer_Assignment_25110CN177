#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,A[50];
    cout<<"Enter thee size of array: ";
    cin>>n;
    if(n<2){
        cout<<"There is no second largest element";
    }
    else{
    cout<<"Enter the elements of Array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int second_largest=INT_MIN,largest=A[0];
    for(int i=1;i<n;i++){
        if(largest<A[i]){
            second_largest=largest;
            largest = A[i];
        }
        else if(A[i]>second_largest && A[i]!=largest){
            second_largest=A[i];
        }
    }
    if(second_largest==INT_MIN){
        cout<<"No second largest element exists";
    }
    else{
cout << "Largest element: " << largest << endl;
cout << "Second largest element: " << second_largest;
    }
}
    return 0;
    
}