#include<iostream>
using namespace std;
void fibonacci(int a);
int main(){
    int n;
    cout<<"Enter the terms in fibonacci series: ";
    cin>>n;
    fibonacci(n);
    return 0; 
}

void fibonacci(int a){
    int first_term = 0, second_term = 1, next_term;
    for(int i=1; i<=a;i++){
        cout<<first_term<<"\t";
        next_term = first_term + second_term;
        first_term = second_term;
        second_term = next_term;
    }
}