#include <bits/stdc++.h>
using namespace std;
// xoa gia tri o vi tri k
struct node{
int data;
node*Next;
node*Pre;
};
typedef struct node Node;
Node*CreateNode(int x){
    Node*p=new Node;
    p->data=x;
    p->Next=NULL;
    p->Pre=NULL;
    return p;
}
struct List{
Node*pHead;
Node*pTail;
};
typedef struct List DoublyList;
void CreateList(DoublyList&l){
    l.pHead=l.pTail=NULL;
}
void AddElement(DoublyList&l,Node*p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else{
        p->Pre=l.pTail;
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
//xoa phan tu o vi tri bat ki
void DelElement(DoublyList &l,int n,int &k){
    cout<<"\ndelete location: ";
    cin>>k;
    int temp=0;
     Node*q=NULL;
     if(k==1){
       l.pHead=l.pHead->Next;
        l.pHead->Pre=NULL;
     }
     else if(k==n){
l.pTail=l.pTail->Pre;
l.pTail->Next=NULL;
     } else {
    for(Node*p=l.pHead;p!=NULL;p=p->Next){
        temp++;
        if(temp==k-1){
           q=p;
        }
        if(temp==k){
            q->Next=p->Next;
            p->Next->Pre=q;
        }
    }
     }
    PrintResult(l);
}
int main (){
DoublyList l;
int n,k;
Node*p;
CreateList(l);
GetInput(l,p,n);
PrintResult(l);
DelElement(l,n,k);
    return 0;
}