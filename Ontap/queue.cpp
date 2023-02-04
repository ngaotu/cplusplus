//  hang doi -queue : la mot loai dan hsach lien ket hoat dong theo co che FIFO , nghia la phan tu vao dau tien se duoc lay ra dau tien
// Cac thao tac theo queue: 
// isEmpty()
// isFull()
// size()
// enqueue() them mot phan tu vao cuoi hang doi
// dequeue() lay phan tu o dau hang doi ra va xoa
// back() ; tra ve  phan tu o cuoi
// front() : tra ve phan tu o dau hang doi

//  Luu y khi cai dat queue : phai xu ly day queue va tran queue ( tran queue: la khi tong so phan tu chua dat MAX nhung last da o vi tri MAX-1)
#include <bits/stdc++.h>
using namespace std;
#define INF -2*pow(10,9)
#define MAX 100
struct Queue{
    int first,last;
    int array[MAX];
    int sz;
    Queue(){
        first = -1;
        last = -1;
        sz = 0;
    }
    bool isFull();
    bool isEmpty();
    bool enqueue(int element);
    bool dequeue();
    int back();
    int front();
    int size();
};

bool Queue::isEmpty(){
    if(first == -1){
        return true;
    }
    return false;
}
bool Queue::isFull(){
    if(sz ==MAX){
        return true;
    }
    return false;
}
bool Queue::enqueue(int e){
    if (isFull()){
        return false;
    }
    if(isEmpty()){
        first=0;
    }
    //  xu ly tran queue
    else if (last ==MAX-1){
        for(int i = last;i>=first;i--){
            array[i-first] =array[i]; 
        }
        last -= first;
        first = 0;
    }
    last +=1;
    sz +=1;
    array[last] = e;
    return true;
}
bool Queue::dequeue(){
    if(isEmpty()){
        return false;
    }
    if(last ==first){
        first = last = -1;
    }
    else {
        first +=1;
    }
    sz -=1;
    return true;
}
int Queue::back(){
    return array[last];
}
int Queue::front(){
    return array[first];
}
int Queue::size(){
    return sz;
}


int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    while (!q.isEmpty())
    {
        cout<<q.front()<<" ";
        q.dequeue();
    }
    
    return 0;
}