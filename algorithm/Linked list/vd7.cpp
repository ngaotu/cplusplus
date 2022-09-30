#include <bits/stdc++.h>
using namespace std;

struct Date{
 int day,month,year;
};
void GetDate(Date & d){
    cout<<"Date of birth: ";
    cin>>d.day>>d.month>>d.year;
}
struct Student{
 string id;
 string name;
 Date date;
 float mark;
};
void GetStudent(Student & sv){
    cin.ignore();
    cout<<"Input id number: ";
    getline(cin,sv.id);
    cout<<"Input name: ";
    getline(cin,sv.name);
    cout<<"Input date: ";
    GetDate(sv.date);
    cout<<"Input mark: ";
    cin>>sv.mark;
}
void ShowStudent(Student sv){
    cout<<"\nID: "<<sv.id<<"\nName: "<<sv.name<<"\nDate: "<<sv.date.day<<"//"<<sv.date.month<<"//"<<sv.date.year<<"\nMark: "<<sv.mark;
    cout<<"\n=================";
}
struct Node{
  Student data;
  Node*pNext;
};
Node*CreateNode(Student sv){
    Node*p= new Node;
    p->data=sv;
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
void AddtoLast(List & l, Node* p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else {
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void GetList(List & l,int &n ){
 cout<<"Input the number of list student: ";
 cin>>n;
 Student sv;
 for(int i = 0;i<n;i++){
  GetStudent(sv);
  Node*p=CreateNode(sv);
  AddtoLast(l,p);
 }
}
void ShowList(List l){
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        ShowStudent(k->data);
    }
}
void QuickSort(List &l){
    List l1,l2;
    CreateList(l1);
    CreateList(l2);
    // nue danh sach lien ket chi co 1 node
    if(l.pHead==l.pTail){
        return;
    }
    Node*pivot=l.pHead;
    // gan lai gia tri cho pHead
    l.pHead=l.pHead->pNext;
    pivot->pNext=NULL; 
    
    while(l.pHead!=NULL){
        Node*p=l.pHead;
        l.pHead=l.pHead->pNext;
        p->pNext=NULL; 
        // tach tung node ra khoi danh sach lien ket ban dau
        if(p->data.name<pivot->data.name){
            AddtoLast(l1,p);
        }
        else {
            AddtoLast(l2,p);
        }
    }
    QuickSort(l1);
    QuickSort(l2);
    if(l1.pHead!=NULL){
        l.pHead=l1.pHead;
        l1.pTail->pNext=pivot;
    }
    else {
     l.pHead= pivot;
    }
    pivot->pNext=l2.pHead;
    if(l2.pHead!=NULL){
        l.pTail=l2.pTail;
    }
    else {
        l.pTail=pivot;
    }
    
    //  co lap chot
}
Node*GetMid(List & l,int n  ){
    int locate=-1;
    Node*mid=NULL;
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
         locate++;
         if(locate==(n-1)/2){
            mid=k;

         }
    }
 return mid;
}
 void DevideList(List l , List & l1, List & l2){

 }
void MergeSort(List &l){
    List l1,l2;
    CreateList(l1);
    CreateList(l2);
    if(l.pHead==NULL||l.pHead->pNext==NULL){
        return;
    }
    else {
        DevideList(l,l1,l2);
        MergeSort(l1);
        MergeSort(l2);
    }
}

int main (){
List l;
CreateList(l);
Node*p=NULL;
int n;
GetList(l,n);
QuickSort(l);
ShowList(l);
Node*q=GetMid(l,n);
ShowStudent(q->data);
    return 0;
}