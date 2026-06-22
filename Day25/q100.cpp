#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[100];
    int n;
    cout<<"Enter number of words: ";
    cin>>n;
    cout<<"Enter words: ";
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,str[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(str[i].length() > str[j].length()){
                swap(str[i],str[j]);
            }
        }
    }

    cout<<"sorted words by length are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}