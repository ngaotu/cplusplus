#include <bits/stdc++.h>
using namespace std;
struct List{
    int data;
    List*pNext;
};

List * Create(int e){
    List * tmp = new List();
    tmp->data = e;
    tmp->pNext = NULL;
    return tmp;
}
bool isEmpty(List* a){
    return a==NULL;
}

void push_back(List* &a, int e){
    if(isEmpty(a)){
        a= Create(e);
    }
    else {
        List * tmp = Create(e);
        List * p = a;
        while(p->pNext !=NULL){
            p= p->pNext;
        }
        p->pNext = tmp;
    }    
}
void push_front(List* &a, int e){
    if(isEmpty(a)){
        a= Create(e);
    }
    else {
        List * tmp = Create(e);
        tmp->pNext = a;
        a = tmp;
    }    

}
void pop_front(List*&a){
    if(!isEmpty(a)){
        List * tmp = a;
        a = a->pNext;
        delete tmp;
    }
}
void pop_back(List* &a){
    if(!isEmpty(a)){
        List* pre = NULL;
        List * cur = a;
        // cho node gan cuoi tro den null
        while(cur->pNext!=NULL){
            pre = cur;
            cur = cur->pNext;
        }
        // ds chi co 1 ptu
        if(pre==NULL){
            a =NULL;
        }
        else {
            pre->pNext = NULL;
        }
    }
}
void show(List *a){
    while(a!=NULL){
        cout<<a->data<<" ";
        a = a->pNext;
    }
}

int main (){
    List *head = NULL;
    push_front(head,1);
    push_front(head,2);
    push_front(head,3);
    push_back(head,2);
    push_back(head,2);
    push_back(head,2);
    pop_back(head);
     pop_back(head);
      pop_back(head);
    show(head);
    return 0;
}