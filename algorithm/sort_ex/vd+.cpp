#include <bits/stdc++.h>
using namespace std;
// leetcode-
// valid paridomine
string standardize_string(string s){
      int n = s.length();
         for(int i =0;i<n;i++){
            s[i] = tolower(s[i]);
        }
        
        string t= "";
        for(int i =0;i<n;i++){
            if((s[i] != toupper(s[i])) || (s[i]-'0'>=1 && s[i]-'0'<=9))  {
                t+=s[i];
            }
        }
        return t;
    }
int main (){
    string s = "0P";
    s= standardize_string(s);
    cout<<s<<endl;
        string tmp =s;
        int left = 0;
        int right = tmp.length()-1;
        while(left<right){
            swap(tmp[left],tmp[right]);
            left++;
            right--;
        }
        cout<<s<<endl;
        cout<<tmp<<endl;
        bool ok  = (tmp==s);
        cout<<ok;
    return 0;
}