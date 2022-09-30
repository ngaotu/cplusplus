#include <bits/stdc++.h>
using namespace std;
// bai toan: nhap dslk don cac so nguyen . TiN GTRI LON NHAT TRONG DANH SACH

// khai bao single linked list
struct node{
    int data;
    node*pNext; // khai bao con tro
};
typedef struct node Node; // thay the struct node thanh Node
// khai bao list
struct List {
Node * pHead; // node quan li dau danh sach
Node* pTail; // node quan li cuoi danh sach
};
typedef struct List SingleList;
// khoi tao dslk
void CreateList(SingleList&l){
    l.pHead=NULL;
    l.pTail=NULL;
}
Node* CreateNode(int x){
    Node * p=new Node; // cap phat vung nhp cho Node p
p->data=x;
p->pNext=NULL;
return p;
}
void AddHeadElements(SingleList&l,Node*p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p; // node dau cung la node cuoi = p
    }
    else{
    p->pNext=l.pHead;
    l.pHead=p;
}
}
void AddEndElements(SingleList&l,Node*p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p; // node dau cung la node cuoi = p
    }
else {
l.pTail->pNext=p;
    l.pTail=p;
}
}
void ShowLinkedlist(SingleList l){
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        cout<<k->data<<" ";
    }
}

int main (){
    SingleList l;
    CreateList(l);// khoi tao dslk don
int n;
cout<<"The number of sequence: ";
cin>>n;

for ( int i=1;i<=n;i++){
    int x;
cout<<"Creative X: ";
cin>>x;
Node*p=CreateNode(x);
AddEndElements(l,p);
}
ShowLinkedlist(l);
    return 0;
}