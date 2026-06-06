#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
         for(int space=1;space<i;space++){
            cout<<" ";
        }
        for(int j=1; j<=2*(5-i)+1  ;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
