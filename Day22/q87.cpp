#include<bits/stdc++.h>
using  namespace std;
int main(){
    char str[200];
    cout<<"Enter a sentence: ";
    cin.getline(str,200);
    for(int i=0;str[i]!='\0';i++){
        int count=0;
        bool alreadyprint = false;
        for(int k=0; k<i;k++){
            if(str[k]==str[i]){
                alreadyprint = true;
                break;
            }
        }
        if(alreadyprint || str[i]==' '){
            continue;
        }
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        cout<<str[i]<<" : "<<count+1<<endl;
    }
    return 0;

}