#include <bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        vector <int>index;
        int n =nums.size();
        unordered_map <int,int> mp;
        for(int i =0;i<n;i++){
           int remain = target-nums[i];
           if(mp.find(remain)!=mp.end()){
            index.push_back(mp[remain]);
            index.push_back(i);
            break;
           }
           else{
             mp.insert({nums[i],i});
           }
           
        }
//    for (auto x:mp){
//     cout<<x.first<<" "<<x.second<<endl;
//    }
        return index;
    }
int main (){
    vector <int> nums ={1,6,3,3};
    int target;
    cin>>target;
    vector <int> index = twoSum(nums,target);
    for(int i =0;i<index.size();i++){
        cout<<index.at(i)<<" ";
    }
    return 0;
}