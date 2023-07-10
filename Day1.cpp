// <<-------------------- Problem Number-15 LeetCode "3-Sum" ------------------>>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> v;
        set<vector<int>> s1;
        int start=0;
        while(start<nums.size()-2){
            int s=start+1,e=nums.size()-1;
            while(s<e){
                if(nums[s]+nums[e]+nums[start] == 0){
                    v.push_back(nums[start]);
                    v.push_back(nums[s]);
                    v.push_back(nums[e]);
                    s1.insert(v);
                    v.clear();
                    s++;
                }
                else if(nums[s]+nums[e]+nums[start]<0){
                   s++;
                }
                else{
                    e--;
                }
            }
            start++;
        }
        vector<vector<int>> ans;
        for(auto it = s1.begin();it!=s1.end();it++)
        {
            ans.push_back(*it);
        }
        return ans;
    }
};