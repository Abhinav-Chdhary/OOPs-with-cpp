#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Function to perform Dijkstra's algorithm
void dijkstra(vector<vector<pair<int, int>>>& graph, int source, vector<int>& distances) {
    int numNodes = graph.size();
    distances.resize(numNodes, INT_MAX);

    // Priority queue to store nodes based on their distance
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Set distance of source node to 0 and push it into the priority queue
    distances[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int currNode = pq.top().second;
        int currDistance = pq.top().first;
        pq.pop();

        // Ignore if the current distance is greater than the stored distance
        if (currDistance > distances[currNode])
            continue;

        // Iterate through the neighbors of the current node
        for (auto neighbor : graph[currNode]) {
            int neighborNode = neighbor.first;
            int neighborDistance = neighbor.second;

            // Calculate the new distance
            int newDistance = currDistance + neighborDistance;

            // If the new distance is smaller, update the distance and push the neighbor into the priority queue
            if (newDistance < distances[neighborNode]) {
                distances[neighborNode] = newDistance;
                pq.push({newDistance, neighborNode});
            }
        }
    }
}

int main() {
    int numNodes, numEdges;
    cout << "Enter the number of nodes and edges in the graph: ";
    cin >> numNodes >> numEdges;

    vector<vector<pair<int, int>>> graph(numNodes);

    cout << "Enter the details of each edge (start, end, distance):" << endl;
    for (int i = 0; i < numEdges; i++) {
        int start, end, distance;
        cin >> start >> end >> distance;
        graph[start].push_back({end, distance});
        graph[end].push_back({start, distance});  // If the graph is undirected
    }

    int source;
    cout << "Enter the source node: ";
    cin >> source;

    vector<int> distances;
    dijkstra(graph, source, distances);

    cout << "Shortest distances from the source node to each node:" << endl;
    for (int i = 0; i < numNodes; i++) {
        cout << "Node " << i << ": " << distances[i] << endl;
    }

    return 0;
}
