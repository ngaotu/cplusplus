#include <bits/stdc++.h>
using namespace std;

struct Date{
 int day;
 int month;
 int year;
};
struct Student{
  string id;
  string name;
  Date date;
  float mark;
};
void GetDate(Date& d){
    cout<<"\nDay: ";
    cin>>d.day;
    cout<<"Month: ";
    cin>>d.month;
    cout<<"Year: ";
    cin>>d.year;
}
void GetStudent(Student & sv){
    cin.ignore();
    cout<<"Input id number: ";
    getline(cin,sv.id);
    cout<<"Input name: ";
    getline(cin,sv.name);
    cout<<"Input date of birth: ";
    GetDate(sv.date);
    cout<<"Input mark: ";
    cin>>sv.mark;
}
void ShowStudent(Student sv){
     cout<<"\nID: "<<sv.id<<"\nName: "<<sv.name<<"\nDate: "
     <<sv.date.day<<"//"<<sv.date.month<<"//"<<sv.date.year;
     cout<<"\n\t=========";
     
}
struct Node {
    Student data;
    Node* pNext;
};

struct SingleList {
 Node*pHead;
 Node*pTail;
} typedef List;


// khoi tao danh sach lien ket
void CreateList(List& l ){
    l.pHead=NULL;
    l.pTail=NULL;
}
//  tao node
Node*CreateNode(Student sv){
   Node*p= new Node;
   p->data= sv;
   p->pNext=NULL;
   return p;
}
void AddtoHead(List & l,Node*p){
  if(l.pHead==NULL){
      l.pHead=l.pTail=p;
  }
   else {
       p->pNext=l.pHead;
       l.pHead=p;
   }
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
void GetInput(List & l, Node*p, int & n){
    Student sv;
    cout<<"Input n: ";
    cin>>n;
    for(int i = 0;i<n;i++){
        GetStudent(sv);
    p= CreateNode(sv);
    AddtoLast(l,p);
    }

}
void GetOutPut(List l, int n){
    Node*k=l.pHead;
    while(k!=NULL){
        ShowStudent(k->data);
        k=k->pNext;
    }
}
void InsertElement(List & l , int n ){
    Student x;
    int count =-1;
    GetStudent(x);
    Node*p= CreateNode(x);
    int k ;
    do{
        cout<<"Input k: ";
        cin>>k;
    } while(k>=n||k<0);
    if(k==0){
    p->pNext=l.pHead;
     l.pHead=p;

    }
    else {

    for(Node*q = l.pHead;q!=NULL;q=q->pNext){
        count++;
        if(count==k-1){
            p->pNext=q->pNext;
            q->pNext=p;
           
        }
    }
    }
}
int main (){
 List l;
 Node*p;
 int n;
 CreateList(l);
 GetInput(l,p,n);
 InsertElement(l,n);
 GetOutPut(l,n);
    return 0;
}