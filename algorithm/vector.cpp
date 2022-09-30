#include <iostream>
#include <vector>

using namespace std;

int main (){
vector <int> v;
int n;
cout<<"Nhap n: ";
cin>>n;
v.resize(n);


 for ( int i=0;i<v.size();i++){
 v.at(i)=i*i;
}
// for(int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
// }
// for(vector<int>::iterator it=v.begin() ;it!=v.end();it++){
//     cout<<*it<<" ";
// }
// for(auto it=v.begin();it<v.end();it++){
//     cout<<*it<<" ";
// }
for(auto i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<< *(v.begin()+2);
    return 0;
}