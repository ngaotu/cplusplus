#include <bits/stdc++.h>
using namespace std;

int main (){
int a;
int count=0;
int number;
srand(time(NULL));
a=rand() % 100 + 0;
cout<<"\n\t\t======Game find number=======";
do{
cout<<"\nGuess number?: ";
cin>>number;
count++;
if(number<a){
    cout<<"Smaller than number that we need find!\n";
}
else if(number>a){
    cout<<"Bigger than number that we need find!\n";
}
else{
     cout<<"Well done! You won the game bro \n";
    cout<<"You played game "<<count<<" times to find  miracle number";
   
}
} while(number!=a);

    return 0;
}