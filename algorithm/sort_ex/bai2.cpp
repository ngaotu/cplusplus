#include <bits/stdc++.h>
using namespace std;
//  dem so cap khieu vu nhieu nhat biet rang chieu cao ban nam >chieu cao ban nu trong moi cap
// cho chieu cao cac ban nam (a ) va chie ucao cac ban nu (b)

int main(){
	int n,m;
    int count =0;
    cout<<"Nhap so nam so nu: ";
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	
    sort(a,a+n);
    sort(b,b+m);
    int i = n-1;
    int j =m-1;
    while(i>=0&&j>=0){
        if(a[i]>b[j]){
            count++;
            i--;
            j--;
        }
        else {
            j--;
        }
    }
	cout<<count<<endl;
	return 0;
}