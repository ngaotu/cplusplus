#include <bits/stdc++.h>
using namespace std;
#define MAX 100 
//  hoat dong theo co che LIFO - LAST IN FIRST OUT 
struct Stack{
int pos_top;
int stk[MAX];
Stack (){
pos_top = -1;    
}
bool isEmpty();
bool isFull();
bool push(int num);
bool pop();
int top();
int size();
};
 bool Stack::isEmpty(){
    if(pos_top==-1){
        return true;
    }
    return false;
 }
 bool Stack::isFull(){
    if(pos_top ==MAX-1){
        return true;
    }
    return false;
 }
 bool Stack::push(int num){
    if(!isFull()){
        pos_top+=1;
        stk[pos_top] = num;
    }
    else {
        return false;
    }
    return true;
 }
 bool Stack::pop(){
    if(!isEmpty()){
        pos_top -=1;
    }
    else {
        return false;
    }
    return true;
 }
 int Stack::top(){
    if(isEmpty()){
        return -1;
    }
    else {
        return stk[pos_top];
    }
 }
 string DecToBin(int num){
    Stack s;
    string res;
    while(num>0){
        int tmp = num%2;
        s.push(tmp);
        num /=2;
    }
    while(!s.isEmpty()){
       res+= to_string(s.top());
        s.pop();
    }
    return res;
 }
int main (){
    Stack s;
    // s.push(5);
    // s.push(6);
    // s.push(7);
    // while(!s.isEmpty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    string res ;
    res = DecToBin(100);
    cout<<res;
    return 0;
}