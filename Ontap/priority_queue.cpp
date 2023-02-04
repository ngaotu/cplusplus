#include <bits/stdc++.h>
using namespace std;
#define MAX 100
void heapify(int *a,int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && a[largest]<a[left]){
        largest = left;
    }
    if(right<n&& a[largest]<a[right]){
        largest= right;
    }
    if(largest!=i){
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}
struct priorityQueue{
    // phan tu cuoi cua hang doi uu tien
    int last;
    int arrtop;
    int arr[MAX];
    priorityQueue(){
        last = -1;
        arrtop = -1;
    }
    bool isEmpty();
    bool isFull();
    int size();
    bool top();
    bool push(int e);
    bool pop();
} typedef pq;

bool pq::isEmpty(){
    return last ==-1;
}
bool pq::isFull(){
    return last==MAX-1;
}
bool pq::push(int e){
    if(isFull()){
        return false;
    }
    else if (isEmpty()){
        arrtop = 0;
    }
    last++;
    heapify(arr,MAX,arrtop);
    return true;
}
int main (){
    priority_queue <int,vector<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(4);
    
    cout<<pq.top();
    return 0;
}