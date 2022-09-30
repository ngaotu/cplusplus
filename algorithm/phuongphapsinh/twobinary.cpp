// check bieu thuc co hop le 

#include <bits/stdc++.h>
using namespace std;
string convert(string a, string b){
int i=a.length()-1;
    int j=b.length()-1;
    string Res;
    int carry=0;
    
    while(i>=0 || j>=0)
    {
        int sum=carry;
        
        if(i>=0)
        {
            sum += a[i] - '0';
            i--;
            
        }
        
         if(j>=0)
        {
            sum += b[j] - '0';
            j--;
            
        }
        
        carry = sum > 1 ? 1:0;
        
        Res += to_string(sum%2);         
        
    }
    
    if(carry)
        Res += "1";
    
    reverse(Res.begin(),Res.end());
    
    return Res;
}

    
int main (){
    string tmp1,tmp2;
    cin>>tmp1>>tmp2;
    cout<<convert(tmp1,tmp2);

    return 0;
}