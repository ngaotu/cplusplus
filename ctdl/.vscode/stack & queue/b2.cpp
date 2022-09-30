#include <bits/stdc++.h>
using namespace std;
// so toa tau o ben a
void Input(stack <int>& s1,int n){
    for(int i=1;i<=n;i++){
s1.push(n-i+1);
    }
}
void ShowResutl(stack<int> s1){
    while(s1.empty()==false){
cout<<s1.top()<<" "; // dua ra gia tri dau tien cua stack
s1.pop(); // xoa no di
    }
}
void Hoanvi(stack<int>&s2,int n){
for(int i=1;i<=n;i++){
    int x;
    cout<<"Enter X: ";
    cin>>x;
    s2.push(x);
}
}
int main (){
    int n;
    cout<<"Enter number trains: ";
    cin>>n;
stack <int> s1;
stack<int> s2;
Input(s1,n);
ShowResutl(s1);
Hoanvi(s2,n);
ShowResutl(s2);
swap(s1,s2);
cout<<"\n";
ShowResutl(s2);
    return 0;
}