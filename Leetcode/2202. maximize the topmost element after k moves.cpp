class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == 0) return n >= 1 ? nums[0] : -1; // no moves allowed so if return 1st element if present.
        if(k == 1) return n == 1 ? -1 : nums[1]; // one move we can only remove topmost element.
        if(n == 1) return (k % 2 == 0) ? nums[0] : -1; // if only one element is there then odd times operation empty the array. 
        int mx = *max_element(nums.begin(), nums.begin()+min(k-1, n)); // find max of topmost element removed until k-1 operations only. 
        // reserv 1 operation to put back. 
        if(k < n) mx = max(mx, nums[k]); // we can take all the topmost `k` elements and return the one left at the top.
        
        return mx;
    }
};
