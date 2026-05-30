#include<iostream>
using namespace std;
int main(){
    int a,b,count=0;
    cout<<"Enter the first term of the range: ";
    cin>>a;
    cout<<"Enter the last term of the range: ";
    cin>>b;
    cout<<"List of all prime numbers between "<<a<<" and "<<b<<endl;
    for(int i=a;i<=b;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
             
        }
        if(count==2){
            cout<<i<<"\t";
        }
       
            count=0;
    }
    return 0;
}