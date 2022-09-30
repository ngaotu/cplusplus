#include <bits/stdc++.h>
using namespace std;
 
struct Student
{
    string name;
    string Class;
    string phonenumber;
    float mark;
};
struct node {
Student data;
node*pNext;

};
typedef struct node Node;
Node*CreateNode(Student sv){
Node*p=new Node;
p->data=sv;
p->pNext=NULL;
return p;
}
struct List
{
    Node*pHead;
    Node*pTail;
};
typedef struct List SingleList;
void CreateList(SingleList&l){
    l.pHead=NULL;
    l.pTail=NULL;
}

void AddElement(SingleList& l , Node*p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }
    else{
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void Input(Student &x){
cin.ignore();
cout<<"Full Name: ";
getline(cin,x.name);
cout<<"Your class: ";
getline(cin,x.Class);
cout<<"Your phone Number: ";
cin>>x.phonenumber;
cout<<"Average Mark: ";
cin>>x.mark;
}
void GetInput(SingleList&l,Node*p,int &n){
    cout<<"Enter the number of students: ";
    cin>>n;
    Student x;
    for(int i =1;i<=n;i++){
        Input(x);
        p=CreateNode(x);
        AddElement(l,p);
    }
}
void ShowInfor(Student x){
cout<<"\nName: "<<x.name;
cout<<"\nClass: "<<x.Class;
cout<<"\nPhone Number: "<<x.phonenumber;
cout<<"\nMark: "<<x.mark;
}

// xep loai hoc sinh 
void EvaluationMark(Student x){
 if(x.mark<4){
     cout<<"\nStudent evaluation mark:F";
 } else
  if(x.mark<5&&x.mark>=4){
     cout<<"\nStudent evaluation mark:D";
 }
 else
  if(x.mark<6&&x.mark>=5){
     cout<<"\nStudent evaluation mark:D+";
 } else
  if(x.mark<6.5&&x.mark>=6){
     cout<<"\nStudent evaluation mark:C";
 } else
  if(x.mark>=6.5&&x.mark<7){
     cout<<"\nStudent evaluation mark:C+";
 } else
  if(x.mark>=7&&x.mark<8){
     cout<<"\nStudent evaluation mark:B";
 } else
 if(x.mark>=8&&x.mark<8.5){
     cout<<"\nStudent evaluation mark:B+";
 } else
 if(x.mark>=8.5&&x.mark<9){
     cout<<"\nStudent evaluation mark:A";
 } else
 if(x.mark>=9&&x.mark<=10){
     cout<<"\nStudent evaluation mark:A+";
 }
 else {
     cout<<"Your Mark is invalid value";
 }
}

// in ten va xep loai
void Choice1(SingleList l){
    int count=1;
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        cout<<"\n\t\t=====STUDENT "<<count<<"=====";
        cout<<"\nName"<<k->data.name;
        EvaluationMark(k->data);
        count++;
    }
}
// in day du thong tin hoc sinh
void ShowResult(SingleList l){
    int count =1;
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        cout<<"\n\t\t=====STUDENT "<<count<<"=====";
        ShowInfor(k->data);
        count++;
    }
}
// tim kiem hoc sinh
void FindStudent(SingleList l ){
    Student sv;
    bool ok=false;
    cin.ignore();
    cout<<"Name of Student who need to search: ";
getline(cin,sv.name);
cout<<"Class: ";
getline(cin,sv.Class);
for(Node*k=l.pHead;k!=NULL;k=k->pNext){
    if(sv.name==k->data.name&&sv.Class==k->data.Class){
        ok=true;
        cout<<"\n\t\t=====STUDENT=====";
        cout<<"\nPhone Number: "<<k->data.phonenumber;
    }
    }
    if(ok==false){
        cout<<"Can't find student information!";
    }
}

// them vao 1 ho so hoc sinh
void AddStudent(SingleList &l){
    cout<<"\n\t======Add student======\n";
    Student sv;
    Input(sv);
    Node*p=CreateNode(sv);
    AddElement(l,p);
}

// ham xoa 1 node
// xoa node dau

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
void Delete(SingleList&l){
    cout<<"\n.Get Class information";
    Student x;
    cout<<"\nClass need to delete: ";
    cin>>x.Class;
    Node*q;
for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        if(x.Class!=k->data.Class&&x.Class==k->pNext->data.Class){
q=k;
        }
    }
    ShowInfor(q->data);
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        if(q->data.Class==k->data.Class){
            Node*g=k->pNext;
            k->pNext=g->pNext;
            delete g;
        }
        }
    }
void DeteleClass(SingleList&l){
    cout<<"\n.Get Class information";
    Student x;
    cout<<"\nClass need to delete: ";
    cin>>x.Class;
    if(l.pHead->data.Class==x.Class){
        DelHeadElement(l);
    }
    if(l.pTail->data.Class==x.Class){
        DelEndElement(l);
    }
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        if(x.Class==k->data.Class){
            Delete(l);
        }
    }
}

// ham doi 2 node
void Swap(Student &x,Student &y){
    Student temp;
    temp=x;
    x=y;
    y=temp;
}
// sap xep diem trung binh
void SortMark(SingleList&l){
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
for(Node*j=k->pNext;j!=NULL;j=j->pNext){
    if(k->data.mark<j->data.mark){
        Swap(k->data,j->data);
    }
}
    }
}
// chen roi sap xep
void AddAndSort(SingleList&l){
    cout<<"\n\t======Add student======\n";
    Student sv;
    Input(sv);
    Node*p=CreateNode(sv);
    AddElement(l,p);
    SortMark(l);
}
void DelPointer(SingleList&l){
    Node*k;
    while(l.pHead!=NULL){
        k=l.pHead;
        l.pHead=l.pHead->pNext;
        delete k;
    }
}

void File(ofstream & file,SingleList l){
    file.open("Save.out",ios::out);
int count =1;
    for(Node*k=l.pHead;k!=NULL;k=k->pNext){
        file<<"\n\t\t=====STUDENT "<<count<<"=====";
     file<<"\nName: "<<k->data.name;
file<<"\nClass: "<<k->data.Class;
file<<"\nPhone Number: "<<k->data.phonenumber;
file<<"\nMark: "<<k->data.mark;
        count++;
    }
    file.close();
}
void Menu(ofstream &file,SingleList &l,int n,int& choose,Node*p){
    while(true){
cout<<"\n\t\t==========MENU==========";
cout<<"\n\t1.Get Input information ";
cout<<"\n\t2.Get students list ";
cout<<"\n\t3.Export name and telephone number";
cout<<"\n\t4.Search the student by name and by class";
cout<<"\n\t5.Add new  student to this list ";
cout<<"\n\t6.Detele student who studies in class ....";
cout<<"\n\t7.Sort mark of all students";
cout<<"\n\t8.Add and sort new student ";
cout<<"\n\t9.Delete this list";
cout<<"\n\t10.Save this list to the file";
cout<<"\n\t0.Exit";
cout<<"\n\t\t===========END==========";
cout<<"\n\t.Your choice: ";
cin>>choose;
if(choose==1){
    GetInput(l,p,n);
}
else if(choose==0){
    break;
}
else if(choose==2){
ShowResult(l);
}
else if(choose==3){
Choice1(l);
}
else if (choose==4){
 FindStudent(l);
}
else if (choose==5){
AddStudent(l);
ShowResult(l);
}
else if(choose==6){


}
else if (choose==7){
SortMark(l);
ShowResult(l);
}
else if (choose==8){
AddAndSort(l);
ShowResult(l);
}
else if(choose==9){
DelPointer(l); 
}
else if (choose==10){
File(file,l);
}
else{
    cout<<"Your choice is invalid value! Please try again";
}
 }
}
int main (){
    ofstream file;
SingleList l;
Node*p;
int n;
 int choose;
      CreateList(l);
   Menu(file,l,n,choose,p);
    return 0;
}