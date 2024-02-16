#include <iostream>
#include <vector>
#include <queue>
#include <stack>

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
        queue<int> q;
        q.push(fro);
        visit[fro] = true;
        while (!q.empty()) {
            int v = q.front();
            cout << v << " ";
            q.pop();
            for (int i = 0; i < arr[v].size(); i++) {
                if (!visit[arr[v][i]]) {
                    q.push(arr[v][i]);
                    visit[arr[v][i]] = true;
                }
            }
        }
    }

    void dfs(int fro) {
        stack<int> st;
        st.push(fro);
        visit[fro] = true;
        cout << fro << " ";
        while (!st.empty()) {
            int v = st.top();
            st.pop();
            for (int i = 0; i < arr[v].size(); i++) {
                if (!visit[arr[v][i]]) {
                    st.push(arr[v][i]);
                    visit[arr[v][i]] = true;
                    cout << arr[v][i] << " ";
                }
            }
        }
    }

    void print(int index) {
        for (int i = 0; i < arr[index].size(); i++) {
            cout << arr[index][i] << " ";
        }
    }

    ~graph() {
        delete[] visit; // Deallocate memory for the visit array
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

    cout << "DFS traversal: ";
    g->dfs(0);
    cout << endl;

    fill(g->visit, g->visit + 7, false); // Reset visit array for BFS

    cout << "BFS traversal: ";
    g->bfs(0);
    cout << endl;

    delete g; // Deallocate memory
    return 0;
}
