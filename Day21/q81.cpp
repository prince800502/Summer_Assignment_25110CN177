#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str , 100);
    int length=0;
    while(str[length] != '\0'){
        length++;
    }
    cout<<"Length of the string is: "<<length;
    return 0;
}