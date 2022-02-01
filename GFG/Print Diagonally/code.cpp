class Solution{
	
	public:
	bool isValid(int r, int c, int n){
	    if(r<0 || c<0 || c>=n || r>=n)
	        return false;
	    return true;
	}
	
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> list;
		for(int c=0; c<n; c++){
		    
		    int i = 0, j = c;
		    while(isValid(i, j, n)){
		        list.push_back(A[i][j]);
		        i++;
		        j--;
		    }
		}
		for(int r=1; r<n; r++){
		    
		    int i = r, j = n-1;
		    while(isValid(i, j, n)){
		        list.push_back(A[i][j]);
		        i++;
		        j--;
		    }
		}
		return list;
		
	}

};
