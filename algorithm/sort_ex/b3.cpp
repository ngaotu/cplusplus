#include <bits/stdc++.h>
using namespace std;
 int cmp(int a,int b){
    return a>=b;
 }
//  cho n vien gach a1, a2,...an . voi ai la do cung cua moi vien gach ( so gach co the xep chong len tren )
// dua ra man hinh so gach xep duoc nhieu nhat co the
int main(){
	int n; cin >> n;
	int a[n];
    int stifness;
    int count =1;
    // do cung = stifness
	for(int &x : a) cin >> x;
	sort(a,a+n,cmp);
    stifness = a[0];
	for(int i=1;i<n;i++){
       if(stifness >=1){
        count++;
       }
       else {
        break;
       }
    //    so vien con lai co the xep phia tren
       stifness = min(stifness-1,a[i]);
    }
    cout<<"So vien: "<<count;
	return 0;
}