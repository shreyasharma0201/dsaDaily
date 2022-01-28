// Directed Graph
#include <bits/stdc++.h>
#define MAX 30
using namespace std;

class Graph
{
    int V;
    vector<int> adj[MAX];

public:
    Graph(int v)
    {
        V = v;
        adj[V] = {0};
    };
    void addEdge(int src, int des)
    {
        adj[src].push_back(des);
        // adj[des].push_back(src);
    }
    void printGraph()
    {
        for (int d = 0; d < V; ++d)
        {
            cout << "\n Vertex "
                 << d << ":";
            for (auto x : adj[d])
                cout << "-> " << x;
            printf("\n");
        }
    }
};

int main()
{
    int V = 3;
    Graph g(V);
    g.addEdge(1, 2);
    g.addEdge(0, 2);
    g.addEdge(2, 0);
    g.printGraph();
}
