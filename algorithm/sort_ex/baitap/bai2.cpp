#include <bits/stdc++.h>
using namespace std;

void Input(pair<int,int> *a,int n){
    for(int i =0;i<n;i++){
        cout<<"Nhap toa do: ";
        cin>>a[i].first>>a[i].second;
    }
}
void Show(pair<int,int> *a,int n){
    for(int i =0;i<n;i++){
        cout<<"("<<a[i].first<<","<<a[i].second<<"); ";
    }
}
void longestDistance(pair<int,int> *a,int n){
    float longest = sqrt(pow(a[0].first,2)+pow(a[0].second,2));
    int index = 0;
    for(int i =1;i<n;i++){
        float tmp = sqrt(pow(a[i].first,2)+pow(a[i].second,2));
        if(tmp>longest){
            longest = tmp;
            index = i;
        }
    }
    cout<<"Diem co toa do xa goc toa do nhat la: ("<<a[index].first<<","<<a[index].second<<") ";

}
bool cmp(pair<int,int> num1,pair<int,int> num2){
    if (num1.first!=num2.first){
        return num1.first<num2.first;
    }
    else {
        return num1.second<num2.second;
    }
}

void twoPointNearest(pair <int,int> *a,int n){
    // sort(a,a+n,cmp);
    float near = sqrt(pow(a[1].first-a[0].first,2)+pow(a[1].second-a[0].second,2));
    int pre = 0, cur = 1;
    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            float tmp = sqrt(pow(a[j].first-a[i].first,2)+pow(a[j].second-a[i].second,2));
            if(tmp<near){
            near = tmp;
            cur = j;
            pre = i;
        }
        // else {
        //     break;
        // }
        }
    }
    cout<<"Hai diem gan nhau nhat la: ("<<a[pre].first<<","<<a[pre].second<<"); ("<<a[cur].first<<","<<a[cur].second<<") ";  
}
void Rectangle(pair <int,int> *a,int n){
    sort(a,a+n,cmp);
    cout<<"Toa do hinh chu nhat la: ("<<a[0].first<<","<<a[n-1].second<<"); ("<<a[n-1].first<<","<<a[0].second<<") ";  

}
int main(){
    int n;
    cout<<"Nhap so diem: ";
    cin>>n;
    pair<int,int> *a = new pair<int,int> [n];
    Input(a,n);
    longestDistance(a,n);
    twoPointNearest(a,n);
    Rectangle(a,n);
    // Show(a,n);
}