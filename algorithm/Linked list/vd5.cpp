#include <bits/stdc++.h>
using namespace std;
  
 struct Student{
   string name;
   float mark;
  bool operator==(const Student tmp){
       if(tmp.mark==mark&&tmp.name==name){
           return true;
       }
       return false;
   }
 };
 struct Node{
   Student data;
   Node*pNext;
 };
 void GetStudent(Student &sv){
     cin.ignore();
   cout<<"Input name: ";
   getline(cin,sv.name);
   cout<<"Input mark: ";
   cin>>sv.mark;
 }
 void Show(Student sv){
     cout<<"\nName: "<<sv.name<<"\nMark: "<<sv.mark;
     cout<<"\n=================";
 }
 Node*CreateNode(Student sv){
     Node*p= new Node;
     p->data=sv;
     p->pNext=NULL;
     return p;
 }

 struct List {
   Node*pHead;
   Node*pTail;
 };

 void CreateList(List & l){
     l.pHead=l.pTail=NULL;
 }
 void AddtoLast(List & l, Node*p){
     if(l.pHead==NULL){
         l.pHead=l.pTail=p;
     }
     else {
         l.pTail->pNext=p;
         l.pTail=p;
     }
 }
 void AddtoHead(List &l,Node*p){
     if(l.pHead==NULL){
         l.pHead=l.pTail=p;
     }
     else {
         p->pNext=l.pHead;
         l.pHead=p;
     }
 }
//   chen hoc sinh x vao vi tri k trong danh sach
 void Insert(List&l,int & n){
     Node*q;
     Student s;
      int count=-1;
     GetStudent(s);
     q=CreateNode(s);
     int k;
     do{
     cout<<"Input the place to insert: ";
     cin>>k;

     } while(k<0||k>=n);
     if(k==0){
         q->pNext=l.pHead;
         l.pHead=q;

     }
     else {
     for(Node*p=l.pHead;p!=NULL;p=p->pNext){
        count++;
        if(count==k-1){
            q->pNext=p->pNext;
            p->pNext=q;
            break;
        }
     }
    n++;
     }
 }
//   tim kiem hoc sinh x
 int Search(List l, Student s){
     int count=-1;
     for(Node*p=l.pHead;p!=NULL;p=p->pNext){
         count++;
         if(p->data==s){
              return count;
         } 
     }
     return -1;
 }
 
// xoa hoc sinh x
  void Delete(List &l,int n){
      int k;
      if(l.pHead==NULL){
          cout<<"Empty list!";
          
      }
      else {
        do{
            cout<<"Input the place to delete: ";
            cin>>k;
        } while(k<0||k>=n);

    if(k==0){
        Node*q=l.pHead;
        l.pHead=l.pHead->pNext;
        q->pNext=NULL;
    }
     else {
         int cnt=-1;
         for(Node*p=l.pHead;p!=NULL;p=p->pNext){
             cnt++;
             if(cnt==k-1){
                 Node*q=p->pNext;
                 p->pNext=p->pNext->pNext;
                 q->pNext=NULL;
             }
         }
     }
      }
  }
 void GetInput(List&l, Node*p,int & n){
   cout<<"Input the number of list student: ";
   cin>>n;
   Student sv;
   for(int i=0;i<n;i++){
      GetStudent(sv);
      p=CreateNode(sv);
      AddtoLast(l,p);
   }
 }
 void ShowList(List l,Node*p){
     for(Node*k=l.pHead;k!=NULL;k=k->pNext){
         Show(k->data);
     }
 }
int main (){
List l;
Node*p=NULL;
CreateList(l);
int n;
GetInput(l,p,n);
Insert(l,n);
ShowList(l,p);
// Student s;
//  GetStudent(s);
// if(Search(l,s)==-1){
//     cout<<"This value is not found!";
// }
// else {
//     cout<<"Place: "<<Search(l,s)<<"\n";
// }
Delete(l,n);
ShowList(l,p);
    return 0;
}