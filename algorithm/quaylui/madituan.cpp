#include <bits/stdc++.h>
using namespace std;
// liet ke cac hoan vi hoan toan (Xi != i ) cua tap {1,2,...,n}
int n;
void Input_board(int board[100][100]){
    for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
board[i][j]=0;
}
}
}

 // show this moves of a knight
 void PrintResult(int board[][100]){

     for(int i=0;i<n;i++){
         for( int j=0;j<n;j++){
         cout<<board[i][j]<<" ";
     }
     cout<<endl;
     }
      cout<<endl;
   }
   int Check_move(int i,int j){
return (i>=0&&i<n&&j>=0&&j<n);
   }
void knight_chess(int & count,int i,int j,int n,int step,int board[][100],int* X,int* Y){
int Inext,Jnext; // the next move 
for(int ability=0;ability<8;ability++){
Inext=i+X[ability];
Jnext=j+Y[ability];
// check valid move 
if(Check_move(Inext,Jnext)&&board[Inext][Jnext]==0){
    board[Inext][Jnext]=step+1; // try moving this box (mark (step+1) this box )
    if(step==n*n-1){
PrintResult(board);
count++;
    }
    else {
        knight_chess(count,Inext,Jnext,n,step+1,board,X,Y);
       
    }
     board[Inext][Jnext]=0;
}
}
}
int main (){
    int count=0;
cout<<"Enter nxn: ";
cin>>n;
int board[100][100];
int a,b;

do{
cout<<"\nEnter coordinates x: ";
cin>>a;
} while(a>=n);
do{
cout<<"\nEnter coordinates y: ";
cin>>b;} while(b>=n);
// moves of Ox
int X[8]={-2,-2,-1,-1,1,1,2,2};
//move of Oy
int Y[8]={-1,1,-2,2,-2,2,-1,1};
Input_board(board);
 board[a][b]=1;
        knight_chess(count,a,b,n,1,board,X,Y);
 if(count==0){
     cout<<"Khong co loi giai !";
 }
 else{
     cout<<"So cach di la: "<<count;
 }
    return 0;

}