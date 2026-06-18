#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a sentence: ";
    cin.getline(str,100);
    int length=0,count=0;
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        if(( str[i]!=' ' && i==0) || (str[i]!=' ' && str[i-1]==' ')){
            count++;
        }
    }
    cout<<"Number of words in a given sentence is: "<<count;
    return 0;
}