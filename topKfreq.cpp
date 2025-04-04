class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      
             map<int,int>m;
            for(int i=0;i<nums.size();i++){
                m[nums[i]]++;
            }
            vector<int>ans;
            vector<pair<int, int>> vec(m.begin(),m.end());
            sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; 
        });
    
           for (int i = 0; i < k && i < vec.size(); i++) {
            ans.push_back(vec[i].first);
        }
    
            return ans;
    
        
    }
};
