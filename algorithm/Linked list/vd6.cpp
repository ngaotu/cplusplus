#include <bits/stdc++.h>
using namespace std;
// vd2+vd3
struct Node{
    int data;
    Node*pNext;
};
 Node*CreateNode(int x){
     Node*p=new Node;
     p->data=x;
     p->pNext=NULL;
     return p;
 }
 struct List{
     Node*pHead;
     Node*pTail;
 };
 void CreateList(List & l){
     l.pHead=l.pTail=NULL;
 }
 void AddtoLast(List &l, Node*p){
     if(l.pHead==NULL){
         l.pHead=l.pTail=p;
     }
     else {
         l.pTail->pNext=p;
         l.pTail=p;
     }
 }
 void GetNumber(List & l,int n){
    int x;
    for(int i =0;i<n;i++){
        cout<<"Input number: ";
        cin>>x;
        Node*p=CreateNode(x);
        AddtoLast(l,p);
    }
 }
 void ShowNumber(List l){
     for(Node*k=l.pHead;k!=NULL;k=k->pNext){
         cout<<k->data<<" ";
     }
 }
 void Search(List l , int &x,int n){
     cout<<"Search x: ";
     cin>>x;
     Node*p=CreateNode(x);
     int position = -1, ok =-1;
     for(Node*k=l.pHead;k!=NULL;k=k->pNext){
         position++;
         if(k->data==p->data){
             ok=position;
             break;
         }
     }
     if(ok!=-1){
         cout<<"The place of x: "<<ok;
     }
     else {
         AddtoLast(l,p); 
         n++;
     }

 }
 void Delete(List & l , int k){
     cout<<"Input the place to delete: ";
     cin>>k;
     int cnt=-1;
     if(k==0){
         Node*q=l.pHead;
         l.pHead=l.pHead->pNext;
         q->pNext=NULL;
  
     }
     else {

     for(Node*p=l.pHead;p!=NULL;p=p->pNext){
         cnt++;
         if(cnt==k-1){
             p->pNext=p->pNext->pNext;
         }
     }
     }
 }


int main (){
  List l;
  int n,k;
  cout<<"Input the number of list: ";
  cin>>n;
  Node * p =NULL;
  CreateList(l);
  GetNumber(l,n);
  
  ShowNumber(l);
  int x;
//   Search(l,x,n);
  Delete(l,k);
  ShowNumber(l);
    return 0;
}