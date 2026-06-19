#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    int length =0, freq[256]={0};
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        freq[str[i]]++;
    }
    bool found  = false;
    for(int i=0;i<length;i++){
        if(freq[str[i]]==1){
            cout<<"First non repeating character is: "<<str[i];
            found = true;
            break;

        }
    }
    if(!found){
        cout<<"Non repeating character not found: ";
    }
    return 0;
}