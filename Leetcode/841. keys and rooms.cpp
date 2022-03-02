class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int v = rooms.size();
        vector<bool> visited(v, false);
        
        stack<int> s;
        s.push(0);
        while(!s.empty()){
            int curr = s.top();
            s.pop();
            visited[curr] = true;
            
            for(auto i: rooms[curr]){
                if(!visited[i])
                    s.push(i);
            }
        }
        
        for(auto i: visited){
            if(!i)
                return false;
        }
        return true;   
    }
};
