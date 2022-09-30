#include <bits/stdc++.h>
using namespace std;

struct FootballTeam{
    string name;
    int goal;
    int lose;
    int redCard;
    int yellowCard;
} typedef team;

void GetTeam(team & s){
    cout<<"Input name: ";
    getline(cin,s.name);
    cout<<"Input goal number: ";
    cin>>s.goal;
    cout<<"Input goal lose: ";
    cin>>s.lose;
    cout<<"Input red card: ";
    cin>>s.redCard;
    cout<<"Input yellow card: ";
    cin>>s.yellowCard;
}
void ShowTeam(team s){
    cout<<"\nName: "<<s.name<<"\nWin: "<<s.goal<<"\nLose: "<<s.lose<<"\nRedCard: "<<s.redCard<<"\nYellow Card: "<<s.yellowCard;
}
void GetListTeam(team * ds){
 for(int i =0;i<32;i++){
     GetTeam(ds[i]);
     cin.ignore();
 }
}
void GetOutput(team * ds){
    for(int i =0;i<32;i++){
     ShowTeam(ds[i]);
     cout<<"\n\t==========================";
 }
}


void FindTeam(team * ds){
    string nameFind;
    cout<<"\nInput name to find: ";
    getline(cin,nameFind);
    for(int i =0 ;i<32;i++){
        if(nameFind==ds[i].name){
            ShowTeam(ds[i]);
            return ;
        }
    }
    cout<<"No team has this name!";
}
void Score(team *ds){
    int score;
    for(int i=0;i<32;i++){
        score=ds[i].goal*10-ds[i].lose*5-2*ds[i].yellowCard-5*ds[i].redCard;
        cout<<"\nScore: "<<score;
        cout<<"\n\t=======";
    }
}
int main (){
 team ds[32];
 GetListTeam(ds);
 GetOutput(ds);
 FindTeam(ds);
 Score(ds);
    return 0;
}