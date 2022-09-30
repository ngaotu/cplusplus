#include <bits/stdc++.h>
using namespace std;
// chen 100 vao sau 10 ( neu khong co thi chen vao dau dslk)
// tao node
struct node
{
    int data;
    node*pNext;
};
typedef struct node Node;
Node*CreateNode(int Data){
    Node*p=new Node;
    p->data=Data;
    p->pNext=NULL;
    return p;
}
struct List
{
    Node*pHead;
    Node*pTail;
};
typedef struct List SingleList;
// tao dia chi ban dau la rong cho   dslk
void CreateList(SingleList&l){
    l.pHead=NULL;
    l.pTail=NULL;
}
// them vao 1 nut cho dslk
void AddElement(SingleList&l,Node*p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else {
        l.pTail->pNext=p;
         l.pTail=p;
    }
}
void GetInputElement(SingleList&l,Node*p,int &n){
    CreateList(l);
    int x;
    cout<<"The number of sequence: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"X= ";
        cin>>x;
        p=CreateNode(x);
        AddElement(l,p);
    }

}
void ShowResult(SingleList l ){
    for(Node*p=l.pHead;p!=NULL;p=p->pNext){
        if(p!=l.pHead){
           cout<< "->";
        }
        cout<<p->data;
      
}
}
void Insertion(SingleList &l,Node*t,int locate){
    Node*q;
    int temp=0;
    bool ok=true;
    Node*k;
    cout<<"\nInsert element: ";
cin>>locate;
    for(k=l.pHead;k!=NULL;k=k->pNext){
        temp++;
        if(temp==locate){
            q=k; // gan node q = node o vi tri can chen
        }
if(k->data==q->data){
    ok=false;
  break;
}
 }
    if(ok==false){
    t->pNext=k->pNext;
   
    k->pNext=t;
    }
    else{
t->pNext=l.pHead;
l.pHead=t;
 } 
}
void DelHeadElement(SingleList&l){
    Node*p=l.pHead;
 l.pHead=l.pHead->pNext;
 delete p;
}
void DelEndElement(SingleList&l){
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        if(k->pNext==l.pTail){
            k->pNext=NULL;
            l.pTail=k;
        }
    }
}
void Delete(SingleList&l,int locate,int n){
    Node*q;
   
cout<<"\nDetele element: ";
cin>>locate;
int temp=0;
// xoa node dau tien
if(locate==1){
 DelHeadElement(l);
 return;
}
if(locate==n){
    DelEndElement(l);
    return ;
}
for(Node*k=l.pHead;k!=NULL;k=k->pNext){
temp++;

// tim node truoc node bi xoa
 if(temp==locate-1&&locate>1){
    q=k;
 }
  if(q->data==k->data){
    Node *g=k->pNext;
     k->pNext=g->pNext;
 delete g;
 }

 }
}
int main (){
    int locate;
    int y;
     Node*t; 
SingleList l;
int n;
Node*p;
GetInputElement(l,p,n);
ShowResult(l);
cout<<endl;
  cout<<"Enter the value need insert: ";
    cin>>y;
    t=CreateNode(y);
//  Insertion(l,t,locate);
//  n++; // chen them 1 so thi tang so luong node len 1;
//     ShowResult(l);
   Delete(l,locate,n);
 ShowResult(l);
    return 0;
}