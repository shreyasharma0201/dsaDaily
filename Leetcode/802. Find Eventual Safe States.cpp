class Solution {
public:
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> res;
        if(graph.size() == 0) return res; // if graph is empty
        
        int vertices = graph.size();
        int color[vertices]; // to store value unvisited: 0, safe: 1, unsafe: 2
        for(int i=0; i<vertices; i++)
            color[i] = 0;
        
        for(int i = 0; i < vertices; i++){
            if(dfs(graph, i, color)) // if i node is safe then push it into res
                res.push_back(i); // this will keep it in ascending order.
        }
        return res;
    }
    
    bool dfs(vector<vector<int>>& graph, int start, int color[]){
        if(color[start] != 0) return color[start] == 1; // if start is visited then check if it is safe or unsafe.
        // if safe then return true otherwise false.
        
        color[start] = 2;  // mark it unsafe first, dry run this case for self loop
        for(int adj : graph[start]){
            if(!dfs(graph, adj, color))  return false; // if start adj is part of cycle then start will itself become part of cycle and return false. 
        }
        // if visited all adjacent nodes and not found any cycle then mark it as safe.
        color[start] = 1;
        
        return true;
    }
    
};
