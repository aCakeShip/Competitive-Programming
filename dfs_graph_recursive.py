# This is basically practice for me. I'm converting C++ code to python for each new algorithm I learn. 
# good practice for the brain.

class Graph:
    # Dict to store data for nodes already traversed.
    _visited = {}
    # Unironically, the adjacency list is a dictionary in this case. 
    _adjacency_list = {} # The dict has an int key and the value mapped is a list of adjacent vertices.

    def add_edge(self, edge, weight):
        self._adjacency_list[edge] = weight

    def DFS(self, source):
        self._visited[source] = True
        print(source, end=" ")

        for vertex in self._adjacency_list:
            if not self._visited[vertex]:
                self.DFS(vertex)


def main():
    return


if __name__ == "__main__":
    main()