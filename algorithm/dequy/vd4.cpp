#include <bits/stdc++.h>
using namespace std;

void ShowMove(int n,int a ,int b, int c){
    if(n==1){
cout<<"Chuyen  mot dia  tu coc "<<a<<" sang coc "<<c<<endl;
    }
    else{
        ShowMove(n-1,a,c,b);
        ShowMove(1,a,b,c);
        ShowMove(n-1,b,a,c);
    }
    
}
int main (){
int n;
cout<<"The number of disk: ";
cin>>n;

int a,b,c;
cout<<"Enter three pile : ";
cin>>a>>b>>c;
ShowMove(n,a,b,c);
    return 0;
}