#include <bits/stdc++.h>
using namespace std;
#define MAX 100
//  cau truc stack
struct Stack {
    int stkTop ;
    int stk[MAX];
    Stack(){
        // khoi tao stack rong 
        stkTop = -1;
    }
    bool isEmty();
    bool push(int  element);
    bool pop();
    int top();
    int size();
};
// kiem tra stack rong
bool Stack::isEmty(){
    if (stkTop==-1){
        return true;
    }
    else {
        return false;
    }
}
//  them phan tu vao stack
bool Stack::push(int  element){
    if(stkTop == MAX -1){
        cout<<"Full stack!";
        return false;
    }
    else {
        stkTop++;
        stk[stkTop] = element;
    }
    return true;
}
//  xoa phan tu o dinh stack
bool Stack::pop(){
    if(isEmty()){
        cout<<"Stack is empty";
        return false;
    }
    else {
    stkTop--;
    return true;
    }
}
//  lay gia tri o dinh cua stack
int Stack::top(){
    if(isEmty()){
        cout<<"Stack is empty";
        return 0;
    }
    else {
        int tmp = stk[stkTop];
        return tmp;
    }
}
// LAY SO PHAN TU HIEN CO TRONG STACK
 int Stack::size(){
    return stkTop+1;
 }

int main (){
    Stack stk;
    stk.push(5);
    stk.push(6);
    stk.push(7);
    cout<<stk.size();
    // cout<<stk.top();
    stk.pop();
    cout<<stk.top();
    return 0;
}