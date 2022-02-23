class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int count = 0; // created a count variable
        
        for(int i = 0; i < f.size(); i++){ // start looping from 1st position till end of the array
            if(f[i] == 0){ // only if flower plant place is empty we will  gonna perform this logic
                // creating two values previous & next. Are they 0 or 1
                int prev = (i == 0 || f[i - 1] == 0) ? 0 : 1;
                int next = (i == f.size() - 1 || f[i + 1] == 0) ? 0 : 1;
                
                if(prev == 0 && next == 0){ // and only if these two values are 0
                    i++; // will plant a flower
                    count++; // increment the count
                }
            }
        }
        return count >= n;
    }
};
