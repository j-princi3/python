#include <iostream>
#include <queue>
#include <stack>

using namespace std;

bool isSortable(queue<int>& q1, queue<int>& q2) {
    stack<int> s;
    int expected = 1;

    while (!q1.empty() || !s.empty()) {
        if (!q1.empty() && q1.front() == expected) {
            q2.push(q1.front());
            q1.pop();
            ++expected;
        } else if (!s.empty() && s.top() == expected) {
            q2.push(s.top());
            s.pop();
            ++expected;
        } else if (!q1.empty()) {
            s.push(q1.front());
            q1.pop();
        } else {
            return false; // Cannot sort
        }
    }

    return true;
}

int main() {
    queue<int> q1, q2;

    q1.push(5);
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    if (isSortable(q1, q2)) {
        cout << "Queue can be sorted." << endl;
        cout << "Sorted Queue:" << endl;
        while (!q2.empty()) {
            cout << q2.front() << " ";
            q2.pop();
        }
        cout << endl;
    } else {
        cout << "Queue cannot be sorted." << endl;
    }

    return 0;
}
