#include <bits/stdc++.h>
using namespace std;
 vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i =n-1;i>=0;i--){
        if((digits[i]+1)>9){
            digits[i] = 1;
            digits.push_back(0);
        }
            else {
                break;
            }
        }
        return digits;
    }
int main (){
    vector <int> digits;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        digits.push_back(x);
    }
    plusOne(digits);
    for(int i =0;i<digits.size();i++){
        cout<<digits[i]<<" ";
    }
    return 0;
}