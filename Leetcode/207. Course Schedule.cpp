//Brute Force
class Solution {
public:
    bool dfs(vector<int> graph[], int node, vector<bool> visited){
        if(visited[node])
            return false;
        
        visited[node] = true;
        
        for(auto i: graph[node]){
            if(!dfs(graph, i, visited)){
                return false;
            }   
        }
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> graph[numCourses];
        for(auto i: prerequisites){
            graph[i[0]].push_back(i[1]);
        }
        
        vector<bool> visited(numCourses, false);
        
        for(int i=0; i < numCourses; i++){  
            if(!dfs(graph, i, visited)) return false;
        }
        return true;
        
    }
};

// Optimized ----Kahn's Algorithm 
class Solution {
public:
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> graph[n];
        vector<int> degree(n, 0);
        for(auto &node: pre){
            graph[node[0]].push_back(node[1]);
            degree[node[1]]++;
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++)
            if(degree[i] == 0) q.push(i);
        
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            n--;
            for(auto next: graph[cur])
                if(--degree[next] == 0) q.push(next);
        }
        
        return n==0;
    }
};
