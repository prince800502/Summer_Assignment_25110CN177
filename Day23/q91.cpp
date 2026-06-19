#include<bits/stdc++.h>
using namespace std;
int main(){
    char str1[200], str2[200];
    cout<<"Enter first string: ";
    cin.getline(str1,200);
    cout<<"Enter second string: ";
    cin.getline(str2,200);
    int freq1[256]={0},freq2[256]={0},len1 = 0, len2 = 0;
    for(int i=0;str1[i]!='\0';i++){
        freq1[str1[i]]++;
        len1++;
    }
     for(int i=0;str2[i]!='\0';i++){
        freq2[str2[i]]++;
        len2++;
    }
    if(len1!=len2){
        cout<<"These are not Anagram strings";

    }
    else {
    bool check = true;
    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            check = false;
            break;
        }
    }
    if(check){
        cout<<"These are Anagram strings";
    }
    else{
        cout<<"These are not Anagram strings";
    }
}
    return 0;

}