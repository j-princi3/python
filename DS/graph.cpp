#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class graph {
public:
    vector<vector<int>> arr;
    queue<int> vertex;
    bool *visit;

    graph(int size) {
        arr.resize(size);
        visit = new bool[size]; // Allocate memory for the visit array
        fill(visit, visit + size, false); // Initialize visit array to false
        vertex.push(0);
        visit[0] = true;
    }

    void insertAsEdge(int src, int dest) {
        arr[src].push_back(dest);
    }

    void bfs(int fro) {
        if (vertex.empty()) {
            return;
        }
        for (int i = 0; i < arr[fro].size(); i++) {
            if (!visit[arr[fro][i]]) {
                vertex.push(arr[fro][i]);
                visit[arr[fro][i]] = true;
            }
        }
        cout << fro << " ";
        vertex.pop();
        bfs(vertex.front());
    }

    void print(int index) {
        for (int i = 0; i < arr[index].size(); i++) {
            cout << arr[index][i] << " ";
        }
    }
};

int main() {
    graph *g = new graph(7);
    g->insertAsEdge(0, 1);
    g->insertAsEdge(0, 2);

    g->insertAsEdge(1, 3);
    g->insertAsEdge(1, 0);

    g->insertAsEdge(3, 1);
    g->insertAsEdge(3, 4);
    g->insertAsEdge(3, 5);

    g->insertAsEdge(2, 0);
    g->insertAsEdge(2, 4);

    g->insertAsEdge(4, 2);
    g->insertAsEdge(4, 3);
    g->insertAsEdge(4, 5);

    g->insertAsEdge(5, 6);

    g->insertAsEdge(6, 5);
    g->print(4);
    g->bfs(0);

    delete g; // Deallocate memory
    return 0;
}
