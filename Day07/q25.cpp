#include<iostream>
using namespace std;
int factorial(int a);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The value of factorial of "<<n<<" is: "<<factorial(n);
    return 0;
}

int factorial(int a){
    if(a==0){
        return 1;
    }
    int factNm1=factorial(a-1);
    int factn = factNm1*a;
    return factn;
}