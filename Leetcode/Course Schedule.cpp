class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int> graph[n];
        vector<int> degree(n, 0);
        for(auto &node: pre){
            graph[node[0]].push_back(node[1]);
            degree[node[1]]++;
        }
        vector<int> res;
        
        queue<int> q;
        for(int i = 0; i < n; i++)
            if(degree[i] == 0) q.push(i);
        
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            n--;
            res.push_back(cur);
            for(auto next: graph[cur])
                if(--degree[next] == 0) q.push(next);
        } 
        if(n == 0){
            reverse(res.begin(), res.end());
            return res;
        }else{
            vector<int> empty;
            return empty;
        }
    }
};
