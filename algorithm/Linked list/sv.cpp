
#include <bits/stdc++.h>
using namespace std;
// 1 loi o ham tim thong tin theo ten 
struct Student{
string name;
string id;
string datebirth;
float mark;
};
struct node
{
   Student data;
    node*pNext;
};
typedef struct node Node;
Node*CreateNode(Student x){
    Node*p=new Node;
    if(p==NULL){
        cout<<"\nCap phat that bai";
        return NULL;
    }
    p->data=x;
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
void CreateList(SingleList &l){
    l.pHead=NULL;
    l.pTail=NULL;
}
// them vao 1 nut cho dslk
void AddElement(SingleList &l,Node *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else {
        l.pTail->pNext=p;
         l.pTail=p;
    }
}
// dd/mm/yyyy
// ham doc ngay sinh tu file

// ham doc thong tin  1 sinh vien
void ReadStudent(Student  &sv,ifstream &Filein){
      getline(Filein,sv.name,',');
    getline(Filein,sv.id,',');
    getline(Filein,sv.datebirth,',');
    Filein>>sv.mark;
}
void ShowInformation(Student sv){
    cout<<sv.name<<" "<<sv.id<<" "<<sv.datebirth<<" "<<sv.mark;
}
void ReadFile(ifstream &Filein,SingleList &l){
   while(!Filein.eof()){
       Student sv;
ReadStudent(sv,Filein);
Node*p=CreateNode(sv);
AddElement(l,p);
   }
}
void ShowResult(SingleList l){
for(Node*k=l.pHead;k!=NULL;k=k->pNext){
   ShowInformation(k->data);
   cout<<"\n";
}
}
// ham doi cho 
void Swap(Student & x, Student & y){
    Student temp;
    temp=x;
    x=y;
    y=temp;
}
// sap xep diem tang dan
void SortValue(SingleList&l){
    Node*temp;
  
    for(  Node* k=l.pHead;k!=NULL;k=k->pNext){
for(Node*j=k->pNext;j!=NULL;j=j->pNext){
if(k->data.mark<j->data.mark){
 Swap(k->data,j->data);
}
}
    }
}
//xaut file diem tang dan
void ExportFile(ofstream & fileout,SingleList l){
    fileout.open("Sapxepdiem.out",ios::out);
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
    fileout<<k->data.name<<" "<<k->data.datebirth<<" "<<k->data.id<<" "<<k->data.mark<<"\n";

    }
    fileout.close();
}
// tim kiem thong tin dua vao id
void FindInforID(SingleList l){
    string id;
    bool ok=false;
    cout<<"ID Number of student who need to find: ";
    getline(cin,id);
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
    if(id==k->data.id){

        ShowInformation(k->data);
        ok=true;
    }

}
if(ok==false){
    cout<<"Can't find that student!";
    }
}
// tim kiem thong tin dua vao ten
void FindInforName(SingleList l){
    string name;
    bool ok=false;
    cout<<"Full Name of student who need to find:";
    getline(cin,name);
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
    if(name==k->data.name){
        ShowInformation(k->data);
        ok=true;
    }

}
if(ok==false){
    cout<<"Can't find that student!";
    }
}
void DeletePointer(SingleList &l){
    Node*k=NULL;
  while(l.pHead!=NULL){
      k=l.pHead;
      l.pHead=l.pHead->pNext;
      delete k;
  }
}
int main (){
    int choose;
    ofstream fileout;
SingleList l;
ifstream Filein;
  CreateList(l); // khoi tao danh sach
   Filein.open("sv.txt",ios::in);

while (true){
cout<<"\n\t\t==========MENU==========";
cout<<"\n\t1.Export your students list to console";
cout<<"\n\t2.Sort your list ";
cout<<"\n\t3. Sort and Export list to the file";
cout<<"\n\t4.Searching information student by id number";
cout<<"\n\t5.Searching information student by name";
cout<<"\n\t6.Finish your program and Delete the list";
cout<<"\n\t\t==========END===========";
cout<<"\n\t.Your choice: ";
cin>>choose;
if(choose==6){
    DeletePointer(l);
    ShowResult(l);
    break;
}
else if(choose==1){
ReadFile(Filein,l);
ShowResult(l);
}
else if(choose==2){
SortValue(l);
ShowResult(l);
}
else if (choose==3){
SortValue(l);
ExportFile(fileout,l);
}
else if(choose==4){
    cin.ignore();
FindInforID(l);
}
else if (choose==5){
    cin.ignore();
FindInforName(l);
}
else {
    cout<<"\n Your choise are invalid! Please try again";
}
}
Filein.close();

    return 0;
}