// in so chinh phuong bang danh sach lien ket
#include <bits/stdc++.h>
using namespace std;
// created a node
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
p->pNext=NULL; // dia chi cua node them vao cuoi  dang la null
return p;
}
// khai bao dslk
struct List
{
    Node*pHead;   // khai bao node dau
    Node*pTail;   // khai bao node cuoi
};

typedef struct List SingLinkedlist;
void CreatList(SingLinkedlist&l){
l.pHead=NULL; // dia chi ban dau cua dslk la rong
l.pTail=NULL;
}
void AddElement(SingLinkedlist&l,Node*p){
if(l.pHead==NULL){
l.pHead=l.pTail=p;
}
else { 
l.pTail->pNext=p;
l.pTail=p;
}
}
bool SquareNumber(int x){
    int temp=sqrt(x);
    if(temp*temp==x){
        return true;
    }
      return false;
}
void GetElements(SingLinkedlist&l,Node*p,int n){
    CreatList(l); // khoi tao danh sach lien ket
   
    for(int i=1;i<=n;i++){
         int x;
        cout<<"Enter value X: ";
cin>>x;
if(SquareNumber(x)==true){
 p=CreateNode(x);  // khoi tao node
AddElement(l,p);
    }
    }
}

void ShowResult(SingLinkedlist l){
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        cout<<k->data<<" ";
    }
}
int main (){
    SingLinkedlist l;
int n;
Node*p;
cout<<"Enter Number N: ";
cin>>n;
GetElements(l,p,n);
ShowResult(l);
    return 0;
}