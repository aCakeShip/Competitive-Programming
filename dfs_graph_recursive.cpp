// This is a depth-first-search traversal algorithm implementation for graphs.

/* Depth First Traversal (or Search) for a graph is similar to Depth First Traversal of a tree. 
The only catch here is, unlike trees, graphs may contain cycles, a node may be visited twice. 
To avoid processing a node more than once, use a boolean visited array. */
#include <iostream>
#include <vector>
#include <map>
#include <list>


class Graph {
    /* Graph class keeps two private variables: a visited map (int:bool) and the actual graph 
    stored as an adjacency list (again as a map of int:list) */ 
private:
    map<int, bool> visited;
    map<int, list<int>> adj;
public:
    void addEdge(int vertex_one, int vertex_two){
        adj[vertex_one].push_back(vertex_two);
    }
    
    // The actual DFS recursive algorithm
    void DFS(int vertex){
        visited[vertex] = true;
        cout << vertex << " ";

        list<int>::iterator i;
        for (i = adj[vertex].begin(); i != adj[vertex].end(); ++i)
            if (!visited[*i])
                DFS(*i);
    }   
};


using namespace std;


// Driver Code
int main(){

    // Create a graph given in the above diagram
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 9);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(9, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);
 
    return 0;
}