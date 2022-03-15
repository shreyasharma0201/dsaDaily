long long maxArea(long long A[], int len)
{
    long long i = 0, ans = 0, j = len-1, di = 0;
    
    while(i < j){
        long long water = (j - i) * min(A[i], A[j]);
        ans = max(ans, water);
        if(A[i] < A[j]) i++; 
        else j--;
    }
    return ans;
}
