#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*pNext; // khai bao con tro 
};
typedef struct node Node;
//truyen data cho 1 node
Node* CreateNode(int x){
    Node*p=new Node;   // cap phat dong cho node
p->data=x;
p->pNext=NULL; // dia chi cua node dang la null
return p;
}
int main (){
Node*p;
int x;
int t=5;
while(t!=0){
cin>>x;
p=CreateNode(x);
cout<<p->pNext;
}
    return 0;
}