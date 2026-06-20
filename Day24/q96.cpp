#include<bits/stdc++.h>
using namespace std;
 int main(){
    string str,result="";
    cout<<"Enter a string: ";
    getline(cin,str);
    int len1=0;
    while(str[len1]!='\0'){
        len1++;
    }
    for(int i=0;i<len1;i++){
        bool found = false;
        for(int k=0;k<result.length();k++){
        if(str[i]==result[k]){
            found = true;
            break;
        }
    }
    if(!found){
        result = result + str[i];
    }
 }
 cout<<"After renoving duplicates remaining string is: "<<result;
 return 0;

}
