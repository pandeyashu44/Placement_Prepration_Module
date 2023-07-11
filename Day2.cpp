class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int, int> mp;
       int prefixsum=0, count=0;
       mp[0]=1;

       for(int i=0; i<nums.size(); i++){
           prefixsum+=nums[i];
           int remove=prefixsum-k;
           count+=mp[remove];
           mp[prefixsum]++;
       } 
       return count;
    }
};