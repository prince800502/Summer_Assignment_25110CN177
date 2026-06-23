#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans1,ans2,ans3,ans4,ans5,score=0;
    cout<<"This is a Quiz Application"<<endl;
    cout<<"Question 1). What is National Bird?"<<endl;
    cout<<"Options: "<<"1) Parrot     2) Peacock    3) Pigeon    4) Tiger"<<endl;
    cin>>ans1;


    cout<<"Question 2). What is National Animal?"<<endl;
    cout<<"Options: "<<"1) Horse     2) Tiger    3) Lion    4) Bull"<<endl;
    cin>>ans2;


    cout<<"Question 3). Who is the current Prime Minister of India?"<<endl;
    cout<<"Options: "<<"1) Narendra Modi     2) Rahul Gandhi    3) Meloni    4) Lalu Prasad Yadav"<<endl;
    cin>>ans3;


    cout<<"Question 4). What is Ruby?"<<endl;
    cout<<"Options: "<<"1) A Lady    2) Programming Language    3) Table    4) None of these"<<endl;
    cin>>ans4;


    cout<<"Question 5). What is real value of pie?"<<endl;
    cout<<"Options: "<<"1) 3.1415926     2) 3.1415925    3) 3.1415956    4) 3.1425926"<<endl;
    cin>>ans5;

    if(ans1==2){
        score++;
        cout<<"Question (1) is correct"<<endl;
    }
    else{
        cout<<"Question (1) is incorrect"<<endl;

    }


    if(ans2==2){
        score++;
        cout<<"Question (2) is correct"<<endl;
    }
    else{
        cout<<"Question (2) is incorrect"<<endl;

    }


    if(ans3==1){
        score++;
        cout<<"Question (3) is correct"<<endl;
    }
    else{
        cout<<"Question (3) is incorrect"<<endl;

    }


    if(ans4==2){
        score++;
        cout<<"Question (4) is correct"<<endl;
    }
    else{
        cout<<"Question (4) is incorrect"<<endl;

    }


    if(ans5==1){
        score++;
        cout<<"Question (5) is correct"<<endl;
    }
    else{
        cout<<"Question (5) is incorrect"<<endl;

    }

    cout<<"Final Score: "<<score<<" out of 5";
    return 0;




}