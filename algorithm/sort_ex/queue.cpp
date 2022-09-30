#include <bits/stdc++.h>
using namespace std;
class Queue {
    private:
    int QMax;
    int Qarray[100];
    // chi so cua phan tu dang o dau queue va chi so cua phan tu tiep theo duoc them vao queue
    int Qfront=0,Qrear=0;
    public:
        void Input(){
            cout<<"Qmax: ";
            cin>>QMax;
        }
        bool IsEmty(){
            if(Qfront == Qrear){
                return true;
            }
            else {
                return false;
            }
        }
        bool IsFull(){
            if(Qrear==QMax){
                return true;
            }
            else {
                return false;
            }
        }
        // them phan tu vao cuoi queue
        void Enqueue(int element){
            if(IsFull()){
                cout<<"Queue is full!";
                return; 
            }
            else {
                Qarray[Qrear]= element;
                Qrear++;
            }
        }
        //  xoa phan tu o dau queue
        void Dequeue(){
            if(IsEmty()){
                cout<<"Queue is empty";
                return;
            }
            else {
                Qarray[Qfront]= 0;
                Qfront++;
            }
        }
        int Front(){
            return Qarray[Qfront];
        }
};

int main (){
 Queue q;
 int num;
 cin>>num;
 q.Enqueue(num);
 cout<<q.Front();
 
    return 0;
}