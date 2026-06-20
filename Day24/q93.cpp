#include<bits/stdc++.h>
using namespace std;
bool isrotation(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    string concatinated = s1 + s1;
    return concatinated.find(s2) != string::npos;
    /* find function simply substring milne pr uski starting ki index value ko return krta hai
       aur na milne pr string::npos return krta hai basically mai yha pr true or false ka kaam kr rha hu
       " this comment is for my personal understanding for a long period of time."   */
}

int main(){
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second String: ";
    getline(cin,s2);
    if(isrotation(s1,s2)){
        cout<<"Entered string is a rotation of one another";
    }
    else{
        cout<<"It's not a rotation";
    }
    return 0;
}