#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int len = 0;
    while(s[len]!='\0'){
        len++;
    }
    char ch;
    for(int i=0;i<len;i++){
        ch = s[i];
        int count = 1;
        while(s[i] == s[i+1]){
            count++;
            i++;
        }
        cout<<ch<<count;
    }

    return 0;
}