#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int length=0;
    cout<<"Enter a string in lowercase only: ";
    cin.getline(str,100);
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] -  32;
        }
    }
    cout<<"String in uppercase is given below: "<<endl;
    cout<<str;
    return 0;
}