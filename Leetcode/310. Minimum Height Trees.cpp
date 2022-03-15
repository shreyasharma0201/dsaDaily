class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 0) return { };
        if(n == 1) return {0};
        vector<vector<int>> adj(n, vector<int> ());
        vector<int> degree(n, 0);
        
        for(auto &p : edges){
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
            degree[p[0]]++;
            degree[p[1]]++;
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++){
            if(degree[i] == 1) q.push(i);
        }
        
        vector<int> res;
        while(!q.empty())
        {
            res.clear();            // clear vector before we start traversing level by level.
            int size = q.size();
            for(int i=0; i<size; i++)
            {
                int cur = q.front();
                q.pop();
                res.push_back(cur); //adding nodes to vector. Goal is to get a vector of just 1 or 2 nodes available. remember at max only nodes will be there.
                for(auto &neighbor: adj[cur])
                {
                    degree[neighbor]--;        //removing current leave nodes
                    if(degree[neighbor] == 1)    //adding current leave nodes
                        q.push(neighbor);
                }
            }
        }
        
        return res;

        
    }
};
