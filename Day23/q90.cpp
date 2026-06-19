#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    int freq[256] = {0};
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]]++;
    }
    bool found = false;
    for(int i=0;str[i]!='\0';i++){
        if(freq[str[i]]>1){
            cout<<"First repeating character is : "<<str[i];
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"First repeating character not found";
    }
    return 0;

}