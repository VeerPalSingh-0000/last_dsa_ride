class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        string extra;
        unordered_map<string, int> m;
        int idx = 0;

        for(int i=0;i<strs.size();i++){
            extra = strs[i];
            sort(extra.begin(), extra.end());

            if(m.find(extra) != m.end()){
                ans[m[extra]].push_back(strs[i]);
            }else{
                ans.push_back({strs[i]});
                m[extra] = idx;
                idx++;
            }
                
        }

        return ans;
    }
};
