class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int inc = arr[0], exc = 0;
        
        for(int i = 1; i < n; i++){
            int ninc = exc + arr[i];
            int nexc = max (inc, exc);
            inc = ninc;
            exc = nexc;
        }
        
        return max(inc, exc);
    }
};
