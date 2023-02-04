#include <bits/stdc++.h>
using namespace std;
#define MAX 7
struct CircularQueue{
    int first,last;
    int array[MAX];
    CircularQueue(){
        first = -1;
        last = -1;
    }
    bool isEmpty();
    bool isFull();
    bool enqueue(int e);
    bool dequeue();
    int front();
    int back();
    int size();
} typedef CQ;

bool CQ::isEmpty(){
    return first==-1;
}
bool CQ::isFull(){
    return (last+1)%MAX==first;
}
bool CQ::enqueue(int e){
    if(isFull()){
        return false;
    }
    if(isEmpty()){
        first=0;
    }
    last=(last+1)%MAX;
    array[last] = e;
    return true;
}
bool CQ::dequeue(){
    if(isEmpty()){
        return false;
    }
    if(last==first){
        first = last = -1;
    }
    else {
        first = (first+1)%MAX;   
    }
    return true;
}
int CQ::front(){
    return array[first];
}
int CQ::back(){
    return array[last];
}
int CQ::size(){
    if(isEmpty()){
        return 0;
    }
    if(first>last){
        return MAX-(first-last)+1;
    }
    return last-first+1;
}
int main (){
    CQ cq;
    for(int i = 0;i<10;i++){
        cq.enqueue(i);
    }
    // cq.dequeue();
    // cq.dequeue();
    // cq.enqueue(8);
    cout<<cq.size();
    while(!cq.isEmpty()){
        cout<<cq.front()<<" ";
        cq.dequeue();
    }
    return 0;
}