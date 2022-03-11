/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
// BFS solution 
class Solution {
private:
    unordered_map<Node*, Node*> copies; // to maintain a map between new and old graph to stop again visiting already visited node.
public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        
        Node* copy = new Node(node->val);
        copies[node] = copy;
        queue<Node*> q;
        q.push(node);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            for(Node* neigh: curr->neighbors){
                if(copies.find(neigh) == copies.end()){   // check if node is visited or not
                    copies[neigh] = new Node(neigh->val); // if not make a visit, create new node and store new to old mapping 
                    q.push(neigh); // push it into queue
                }
                copies[curr]->neighbors.push_back(copies[neigh]); // push it as neighbors of current exploring.
            }
        }
        return copy;
    }
};
