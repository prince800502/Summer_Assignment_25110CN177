#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]]++;
    }
 int maxfreq=0;
 char maxchar;
   
    for(int i=0;str[i]!='\0';i++){
       if(freq[str[i]]>maxfreq){
        maxfreq = freq[str[i]];
        maxchar = str[i];
       }
    }
    cout<<"Maximum occuring character is: "<<maxchar;
    return 0;
}