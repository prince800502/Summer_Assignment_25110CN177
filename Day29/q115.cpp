#include<iostream>
#include<string>
using namespace std;
class sttring{
    private:
    string text="";
    public:
void inputString(){
    cout<<"\nEnter string to add: ";
    cin.ignore();
    getline(cin,text);
}
void displayString(){
    if (text == "") {
        cout<<"\n[Error] The vault is empty. Please enter a string first.\n";}
    else{
        cout<<"\n[Current String]: " << text << "\n";
        cout<<"[Length]: "<<text.length()<<" characters\n";}
}
void reverseString(){
        if (text == "") {
            cout << "\n[Error] The vault is empty!\n";
                return;}
        string reversed = "";
        for(int i=text.length()-1;i>=0;i--){
                reversed=reversed+text[i];}
        text = reversed;
        cout << "\n[System] String successfully reversed!\n";
        cout << text;
}
void convertUpper(){
    if (text == "") {
        cout << "\n[Error] The vault is empty!\n";
        return;}
        for (int i=0;i<text.length();i++){
            if(text[i]>='a'&&text[i]<='z'){
                text[i]=text[i]-32;}}
        cout<<"\n[System] Converted to UPPERCASE!\n";
     cout << text;
}
void countVowel(){
    if (text == ""){
        cout << "\n[Error] The vault is empty!\n";
        return;}
        int vowel=0;
        for (int i=0;i<text.length();i++){
            if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U'){
                vowel++;}}
        cout<<"\n[System] Counted vowels are: "<<vowel<<endl;
    }
};
int main(){
    sttring opt;
    int choice;
    opt.inputString();
    do{
        cout<<"\n\t\t============String Operations===========";
        cout<<"\n1. Display String & Length";
        cout<<"\n2. Reverse the String";
        cout<<"\n3. Convert to UPPERCASE";
        cout<<"\n4. Count Vowels";
        cout<<"\n5. Exit";
        cout<<"\n==>";
        cin>>choice;
        if(choice==1){
            opt.displayString();
        }
        else if(choice==2){
            opt.reverseString();
        }
        else if(choice==3){
            opt.convertUpper();
        }
        else if(choice==4){
            opt.countVowel();
        }
        else if(choice==5){
             cout<<"========CLOSING========";
            return 0;
        }
        else{cout<<"Invalid input!!";}
    }
while(choice!=5);
return 0;
}