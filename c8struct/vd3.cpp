#include <bits/stdc++.h>
using namespace std;

struct coordinate{
    string name;
 float coordinateX;
 float coordinateY;
} ;

void GetInput(coordinate & S){
    cout<<"Input name of coordinate: ";
    getline(cin,S.name);
    cout<<"Input coordinate X: ";
    cin>>S.coordinateX;
    cout<<"Input coordinate Y: ";
    cin>>S.coordinateY;
   cin.ignore();
}
void ShowOutput(coordinate  S){
    cout<<S.name<<"("<<S.coordinateX<<","<<S.coordinateY<<")"<<endl; 
}

float distance(coordinate a, coordinate b){
    return sqrt(pow((a.coordinateX-b.coordinateX),2)+pow((a.coordinateY-b.coordinateY),2));
}
float Square(coordinate a, coordinate b,coordinate c){
    float ab= distance(a,b);
    float bc = distance(b,c);
    float ac = distance(a,c);
    if(distance(a,b)+distance(b,c)<distance(c,a)|| distance(a,c)+distance(b,c)<distance(b,a) || distance(a,b)+distance(a,c)<distance(c,b)){
        return false;
    }
    else {
        float p = (ab+bc+ac)/2;
        return sqrt(p*(p-ab)*(p-ac)*(p-bc));
    }
}

int main (){
  coordinate a,b,c;
  GetInput(a);
  GetInput(b);
  GetInput(c);
  ShowOutput(a);
  ShowOutput(b);
  ShowOutput(c);  
  cout<<"=> S triangular: "<<Square(a,b,c);
    return 0;
}