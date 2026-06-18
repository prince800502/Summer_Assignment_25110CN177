#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100],rev[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        rev[i] = str[length-1-i];
    }
    rev[length]='\0';
    if(strcmp(rev,str)==0){
        cout<<"String is pallindrome";
    }
    else{
        cout<<"String is not Pallindrome";
    }
    return 0;
}