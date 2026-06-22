#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[100];
    int n;
    cout<<"Enter the number of names you want to be sorted alphabatically: ";
    cin>>n;
    cin.ignore();
    cout<<"Enter names: ";
    for(int i=0;i<n;i++){
        getline(cin,str[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(str[i] > str[j]){
                swap(str[i],str[j]);
        }
    }
}

cout<<"Sorted names by alphabatically are: ";
for(int i=0;i<n;i++){
    cout<<str[i]<<endl;
}
    return 0;
}
