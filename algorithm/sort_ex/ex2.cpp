 #include <bits/stdc++.h>
 using namespace std;
     string longestCommonPrefix(vector<string>& strs) {
        string prefix= strs.at(0);
        int n= strs.size();
        
        for(int i =1;i<n;i++){
           string tmp;
            for(int j = 0;j<strs[i].length();j++){
                if(strs[i][j]==prefix[j]){
                    tmp +=prefix[j];
                }
                else {

                    break;
                }
                prefix = tmp;
            }
        }
        if(prefix==""){
            prefix += "\"\"";
        }
        return prefix;
    }
    int main (){
   vector <string> s;
    s = {"flmower","fllow","light"};
    cout<<longestCommonPrefix(s);
        return 0;
    }