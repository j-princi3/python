#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
    vector<int> myVector;
    for (int i = 0; i < variables.size(); i++) {
        int p = int(pow((int(pow(variables[i][0], variables[i][1])) % 10), variables[i][2])) % variables[i][3];
        if (p == target) {
            myVector.push_back(i);
        }
    }
    return myVector;
}

int main() {
    vector<vector<int>> nums1 = {{39,3,1000,1000}};
    int targetValue = 17;

    vector<int> result = getGoodIndices(nums1, targetValue);

    for (int element : result) {
        cout << element << " ";
    }

    return 0;
}
