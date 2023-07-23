class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans=strs[0];
        for(int i=1; i<strs.size(); i++){
            for(int j=0; j<ans.size(); j++){
                if(strs[i][j]!=ans[j]){
                    int k=ans.size()-1;
                    while(k!=j-1){
                        ans.pop_back();
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};