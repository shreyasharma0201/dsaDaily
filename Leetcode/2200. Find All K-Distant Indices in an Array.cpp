class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(key == nums[i]){
                int start = max(res.empty() ? 0 : res.back() + 1, i - k);
                for(int j = start; j <= min(i + k, n-1); j++){
                    res.push_back(j);
                }
            }
                
        }
        
        return res;
    }
};
