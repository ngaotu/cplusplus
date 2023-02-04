//  On tap stack (ngan xep)
//  Stack la mot dang ngan xep hoat dong theo co che LIFO , nghia la cac phan tu duoc dua vao cuoi cung thi se duoc lay ra dau tien
//  Cac thao tac co ban : 
// isEmpty : kiem tra xem ngan xep co rong khong
// isFull : kiem tra xem ngan xep da day chua
// push : them mot phan tu vao dinh cua ngan xep
// pop : lay ra phan tu o dinh ngan xep va xoa no di
// top : tra ve gia tri cua dinh ngan xep

//  Cach cai dat :
// Thuong su dung mang de cai dat ngan xep
#include <bits/stdc++.h>
using namespace std;

#define Max 100
#define INF -2000000000
struct Stack{
    int st_top;
    int array[Max];
    int st_Size;

    Stack(){
        st_top = -1;
        st_Size =0;
    }
    bool isEmpty();
    bool isFull();
    bool push(int element);
    bool pop();
    int top();
    int size();
};

bool Stack::isEmpty(){
    if (st_top==-1){
        return true;
    }
    return false;
}
bool Stack::isFull(){
    if(st_Size==Max){
        return true;
    }
    return false;
}
bool Stack::push(int element){
    if(!isFull()){
        st_top+=1;
        array[st_top] = element;
        st_Size+=1;
        return true;
    }
    return false;
}
bool Stack::pop(){
    if(!isEmpty()){
        st_top-=1;
        return true;
    }
    return false;
}
int Stack::top(){
    if(!isEmpty()){
        return array[st_top];
    }
    else {
        return INF;
    }
}
int Stack::size(){
    return st_Size;
}



int main (){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while(!st.isEmpty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}