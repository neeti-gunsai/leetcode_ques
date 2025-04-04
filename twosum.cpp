class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
   {
   map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int p = target - nums[i];
            if (m.find(p) != m.end() && m[p] != i) {
                return {i, m[p]};
            }
        }
        return {};
    
        
    }
};
