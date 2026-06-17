#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    int length=0,vovel=0,consonant=0;
    cout<<"Enter a string: ";
    cin.getline(str,100);
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        if(str[i]== 'A' || str[i]== 'E' || str[i]== 'I' || str[i]== 'O' || str[i]== 'U' 
        || str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
            vovel++;
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            consonant++;
        }
    }
    cout<<"Number of vovel in the string is: "<<vovel<<endl;
    cout<<"Number of consonant in the string is: "<<consonant;
    return 0;
}