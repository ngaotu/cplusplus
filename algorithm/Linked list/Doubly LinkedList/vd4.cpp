#include <bits/stdc++.h>
using namespace std;
// dslk dkep ( doubly linked list)
//de bai: in ra man hinh nhu yeu cau 
// vi du; n =3-> 3 2 1 2 3 
struct node{
int data;
node*Next; // tro den node sau no
node*Pre; // tro den node truoc no

};
typedef struct node Node;
struct List{
Node*pHead;
Node*pTail;
};
typedef struct List DoublyList;
// khoi tao dslk doi
void CreateList(DoublyList&l){
l.pHead=NULL;
l.pTail=NULL;
}
Node*CreateNode(int x){
    Node*p=new Node;
    p->data=x;
    p->Pre=NULL;
    p->Next=NULL;
    return p;
}
void AddHead(DoublyList&l,Node*p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else{
        l.pHead->Pre=p;
        p->Pre=NULL;
        p->Next=l.pHead;
        l.pHead=p;
    }
}
// them voa cuoi dslk doi
void AddElement(DoublyList&l,Node*p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else{
        p->Pre=l.pTail;
        p->Next=NULL;
        l.pTail->Next=p;
        l.pTail=p;
    }
}
void GetInput(DoublyList&l,Node*p,Node*q,int& n){
int x;
cout<<"Enter the number of list: ";
cin>>n;
for(int i=1;i<=n;i++){
    cout<<"Enter value X:";
    cin>>x;
    p=CreateNode(x);
   AddHead(l,p);
   if(i>1){
   q=CreateNode(x);
   AddElement(l,q);
}
}
}
// duyet tu dau danh sach
void PrintResult(DoublyList l){
    for(Node*k=l.pHead;k!=NULL;k=k->Next){
        cout<<k->data<<" ";
    }
}
int main (){
DoublyList l;
Node*p;
Node*q;
int n;
CreateList(l);
GetInput(l,p,q,n);
PrintResult(l);
    return 0;
}