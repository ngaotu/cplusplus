#include <bits/stdc++.h>
using namespace std;

// gia thuyet cua collatz 
void collatzNumber(int x){
    if(x==1){
       cout<< x;
       return;
    }
if(x%2==0){
  collatzNumber(x/2);
  cout<<" * 2 ";
}
else{
     collatzNumber(x*3+1);
     cout<<"/ 3 ";
}
}
int main (){

int x;
cout<<"Enter Number: ";
cin>>x;
collatzNumber(x);
cout<<" = "<<x;
    return 0;
}