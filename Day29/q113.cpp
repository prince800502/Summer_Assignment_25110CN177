#include<iostream>
#include<string>
using namespace std;
class calculator{
    private:
    string memo[1000];
    int memocount=0;
    public:
double add(double num1,double num2){
    return num1 + num2;
}
double sub(double num1,double num2){
    return num1 - num2;
}
double mlt(double num1,double num2){
    return num1 * num2;
}
double dvd(double num1,double num2){
    return num1 / num2;
}
void savememo(double n1,string operat,double n2,double ans){
    string equation = to_string(n1) + " " + operat + " " + to_string(n2) + " " + "=" + " " + to_string(ans);
    memo[memocount] = equation;
    memocount++;
}
void loadmemo(){
    if(memocount==0){
        cout<<"-";}
    else{
        cout<<"\n=====History=====\n";
        for(int i=0;i<memocount;i++){
            cout<<memo[i]<<endl;}}
    }
};
int main(){
    calculator calc;
    int choice;
    double num1,num2;
    do{
        cout<<"==========MENU==========\n";
        cout<<"\n1. Addition";
        cout<<"\n2. Substraction";
        cout<<"\n3. Multiplication";
        cout<<"\n4. Division";
        cout<<"\n5. View Calculation history";
        cout<<"\n6. Exit\n";
        cout<<"==>";
        cin>>choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        if(choice==1){
            double answer = calc.add(num1,num2);
            cout<<"\n[Result]"<<num1<<"+"<<num2<<"="<<answer<<"\n";
            calc.savememo(num1, "+", num2, answer);
        }
        else if(choice==2){
            double answer = calc.sub(num1,num2);
            cout<<"\n[Result]"<<num1<<"-"<<num2<<"="<<answer<<"\n";
            calc.savememo(num1, "-", num2, answer);
        }
        else if(choice==3){
            double answer = calc.mlt(num1,num2);
            cout<<"\n[Result]"<<num1<<"*"<<num2<<"="<<answer<<"\n";
            calc.savememo(num1, "*", num2, answer);
        }
        else if(choice==4){
            if(num2==0){
                cout<<"\n[Result]"<<num1<<"/"<<num2<<"="<<"Not defined"<<"\n";
            }
            else{
            double answer = calc.dvd(num1,num2);
            cout<<"\n[Result]"<<num1<<"/"<<num2<<"="<<answer<<"\n";
                calc.savememo(num1, "/", num2, answer);
            }
        }
        else if(choice==5){
            calc.loadmemo();
        }
        else if(choice==6){
            cout<<"===========SHUTING OFF===========";
            return 0;
        }
        else{
            cout<<"Invalid selection!!";
        }}
while(choice!=6);
return 0;
}