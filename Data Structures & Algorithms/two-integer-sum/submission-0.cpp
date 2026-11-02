class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int sec;

        for(int i=0;i<nums.size();i++){
            sec = target - nums[i];
            if(m.find(sec) != m.end()){
                return { m[sec], i};
            }
            m[nums[i]] = i;
        }

        return {-1, -1};
    }
};
