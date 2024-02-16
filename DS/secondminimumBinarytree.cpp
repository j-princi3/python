#include <iostream>
#include <limits>

using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to perform DFS traversal to find the second minimum node
void findSecondMinimum(TreeNode* root, int& minVal, int& secondMinVal) {
    if (root == nullptr) return;

    // Update minimum and second minimum values
    if (root->val < minVal) {
        secondMinVal = minVal;
        minVal = root->val;
    } else if (root->val > minVal && root->val < secondMinVal) {
        secondMinVal = root->val;
    }

    // Traverse left and right subtrees
    findSecondMinimum(root->left, minVal, secondMinVal);
    findSecondMinimum(root->right, minVal, secondMinVal);
}

// Function to find the second minimum node in a binary tree
int findSecondMinimum(TreeNode* root) {
    int minVal = root->val;
    int secondMinVal = numeric_limits<int>::max(); // Initialize second minimum value to maximum possible value

    findSecondMinimum(root, minVal, secondMinVal);

    // If second minimum value remains unchanged, it means there is no second minimum node
    if (secondMinVal == numeric_limits<int>::max()) {
        return -1; // Return -1 indicating no second minimum node found
    }

    return secondMinVal;
}

int main() {
    // Example binary tree
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    int secondMin = findSecondMinimum(root);
    if (secondMin != -1) {
        cout << "Second minimum value in the binary tree: " << secondMin << endl;
    } else {
        cout << "No second minimum value found in the binary tree" << endl;
    }

    // Deallocate memory
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
