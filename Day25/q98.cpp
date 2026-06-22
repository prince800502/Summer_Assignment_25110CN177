#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);
    cout<<"Common characters are: "<<endl;
    int len1 =0, len2 = 0 ;
    while(s1[len1]!='\0'){
        len1++;
    }
    while(s2[len2]!='\0'){
        len2++;
    }
    for(int i=0;i<len1;i++){
        bool already_print = false;
        for(int k=0;k<i;k++){
            if(s1[k]==s1[i]){
                already_print = true;
                break;
            }
        }
        if(already_print){
            continue;
        }
        if(s1[i] == ' '){
            continue;
        }
        for(int j=0;j<len2;j++){
            if(s1[i]==s2[j]){
                cout<<s1[i]<<endl;
                break;
            }
        }
    }
    return 0;
}