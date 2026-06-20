#include<bits/stdc++.h>
using namespace std; 
int main(){
    string str;
    cout<<"Enter a sentence: ";
    getline(cin,str);
    int len = 0;
    while(str[len]!='\0'){
        len ++;
    }
    int maxlen =0,maxstart =0;
    int start =0,count =0;
    for(int i=0;i<len;i++){
        if(str[i]!= ' ' && str[i]!='\0'){
            count++;
        }
        else{
            if(count>maxlen){
            maxlen = count;
            maxstart = start;
        }
        start = i+1;
        count = 0;
    }
        
    }
    if(count>maxlen){
            maxlen = count;
            maxstart = start;
        }
        
    cout<<"Maximum word in the entered sentence is: ";
    for(int i=maxstart;i<maxlen+maxstart;i++){
        cout<<str[i];
    }
    cout<<endl;
    cout<<"With a maximum length of "<<maxlen;
    return 0;
}