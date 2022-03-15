class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        int flag=0,n = arr.size();
        int res;
        
        // Sort the array 
        sort(arr.begin(),arr.end());
        
    
        // Fix the smallest number among the three integers 
        for(int i = 0 ; i < n-2 ; ++ i ) {
    
        // Two pointers initially pointing at the last 
        //  and the element next to the fixed element 
            int j = i+1, k = n-1;
            
            // While there could be more pairs to check 
            while(j<k) {
    
                // Calculate the sum of the current triplet 
                int sum=arr[i]+arr[j]+arr[k];
                
                if(!flag){
                    res=sum;
                    flag=1;
                }
                
    
                // If sum is closer than current closest sum 
                if(abs(sum-target)<abs(res-target)) 
                    res=sum;
                
                else if(abs(sum-target)==abs(res-target)) {
                  if(sum>res)
                    res=sum;
                }
                
                // If sum is greater than target increment first pointer
                if(target>sum)
                    j++;
                // Else decrement second pointer
                else
                    k--;
            }
        }
        return res;
    }
};
