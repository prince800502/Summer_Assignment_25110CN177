#include<iostream>
using namespace std;
int fibo(int a);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Below is the series of "<<n<<" term \n";
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<"  ";
    }
    return 0;
}

int fibo(int a){
    if(a==0 || a==1){
        return a;
        }

        return fibo(a-1) + fibo(a-2);
}