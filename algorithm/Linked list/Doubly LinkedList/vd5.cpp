#include <bits/stdc++.h>
using namespace std;
// dslk dkep ( doubly linked list)
//de bai: in ra man hinh nhu yeu cau 
// chen gia tri x  vao dslk tai chi so k
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
void GetInput(DoublyList&l,Node*p,int& n){
cout<<"Enter the number of list: ";
cin>>n;
for(int i=1;i<=n;i++){
    p=CreateNode(i);
AddElement(l,p);
}
}

// duyet tu dau danh sach
void PrintResult(DoublyList l){
    for(Node*k=l.pHead;k!=NULL;k=k->Next){
        cout<<k->data<<" ";
    }
}
// chen vao vi tri k ( gia tri x)
void InsertAfter(DoublyList&l,int &x,int&k,int n){
    int temp=0;
    n++;
    cout<<"The value need to insert: ";
    cin>>x;
    Node*j=CreateNode(x);
    cout<<"\nLocate: ";
    cin>>k;
    if(k==1){
        AddHead(l,j);
    }
    else 
    if(k==n){
        AddElement(l,j);
    }
    else {
    for(Node*p=l.pHead;p!=NULL;p=p->Next){
        temp++;
        if(temp==k-1){
j->Pre=p;
         j->Next=p->Next;
           p->Next->Pre=j;
               p->Next=j;
        }

    }
    }
    PrintResult(l);
    
}
int main (){
DoublyList l;
Node*p;
Node*q;
int n,x,k;
CreateList(l);
GetInput(l,p,n);
PrintResult(l);
InsertAfter(l,x,k,n);
    return 0;
}