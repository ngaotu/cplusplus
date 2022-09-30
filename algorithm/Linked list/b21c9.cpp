#include <iostream>
#include <cstring>
using namespace std;
// nhap dslk thong tin -> xuat ra thong tin nhung nguoi sinh truoc nam 1990
struct Information{
string name;
int birth;
string ethnic;
};
// khai bao cau truc 1 node 
struct node{
Information *data;
node*pNext;

};
Information*  Input(){
Information*sv=new Information;

    cout<<"Full Name: ";
getline(cin,sv->name);
cout<<"Date of birth: ";
cin>>sv->birth;
cin.ignore();
cout<<"Your ethnic group: ";
getline(cin,sv->ethnic);
return sv;
}
typedef struct node Node;

// khoi tao 1 node
Node* CreateNode(Information *x){
    Node*p=new Node;
    p->data=x;
    p->pNext=NULL;
    return p;
}
// khai bao cau truc danh sach
struct List{
Node*pHead;
Node*pTail;
};
typedef struct List SingleList;
// khoi tao dslk
void CreateList(SingleList&l){
l.pHead=NULL;
l.pTail=NULL;
}
void AddElement(SingleList&l,Node*p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else{
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void GetInputInf(SingleList&l,Node*p,int& n){
    
CreateList(l);
Information *x;
cout<<" The number of people:  ";
cin>>n;
cin.ignore();
for(int i=1;i<=n;i++){
 x= Input();
   p=CreateNode(x);
   AddElement(l,p);
}
}
void Showresult(SingleList l){
    system("cls");
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        cout<<k->data->name<<" "<<k->data->birth<<"  "<<k->data->ethnic<<endl;
    }
}
void Condition(SingleList l){
     for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        if(k->data->birth<1990){
            cout<<k->data->name<<" "<<k->data->birth<<"  "<<k->data->ethnic<<endl;
        }
    }
}
int main (){
SingleList l;
int n;
Node*p=NULL;
GetInputInf(l,p,n);
 Showresult(l);
Condition(l);
    return 0;
}