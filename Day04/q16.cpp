#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,r,count=0,armstrong=0;
    cout<<"Enter the first term of the range: ";
    cin>>a;
    cout<<"Enter the last term of the range: ";
    cin>>b;
    for(int i=a;i<=b;i++){
        int x=i;
        while(x>0){
            x=x/10;
            count++;
        }
        x=i;
        while(x>0){
            r=x%10;
            armstrong += (int)pow(r,count);  //kyoki pow function double return krta hai issiliye cast kr diya integer me//
            x=x/10;
        }
        count=0;
        if(i==armstrong){
            cout<<i<<"\t";
        }
        armstrong=0;
    }
    return 0;
}