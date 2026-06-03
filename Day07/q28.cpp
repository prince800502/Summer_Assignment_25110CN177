#include<iostream>
#include<math.h>
using namespace std;
int rev(int a);
int main(){
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    cout<<"Reverse of the given number is: "<<rev(n);
    return 0;
}

int rev(int a){
    if(a<10){
        return a;
    }
    int count=0;
    int x=a;
    while(a>0){
        a/=10;
        count++;
    }
    int r=x%10;
    int q=x/10;
    int reverse = r*pow(10,count-1) + rev(q);
    return reverse;
}