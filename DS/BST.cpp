#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a new node in BST
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else if (val > root->val) {
        root->right = insert(root->right, val);
    }

    return root;
}

// Function to search for a value in BST
bool search(TreeNode* root, int val) {
    if (root == nullptr) {
        return false;
    }

    if (root->val == val) {
        return true;
    } else if (val < root->val) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

// Function to find the minimum value node in BST
TreeNode* findMin(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }

    while (root->left != nullptr) {
        root = root->left;
    }

    return root;
}

// Function to delete a node from BST
TreeNode* deleteNode(TreeNode* root, int val) {
    if (root == nullptr) {
        return nullptr;
    }

    if (val < root->val) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->val) {
        root->right = deleteNode(root->right, val);
    } else { // Node to be deleted is found
        // Case 1: Node has no children
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        // Case 2: Node has one child
        else if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Node has two children
        else {
            TreeNode* temp = findMin(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
    }
    return root;
}

// Function to perform inorder traversal of BST
void inorder(TreeNode* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;

    // Insertion
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 6);
    root = insert(root, 8);

    // Search
    cout << "Search 6: " << (search(root, 6) ? "Found" : "Not Found") << endl;
    cout << "Search 10: " << (search(root, 10) ? "Found" : "Not Found") << endl;

    // Deletion
    root = deleteNode(root, 3);
    root = deleteNode(root, 5);

    // Inorder Traversal
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    // Deallocate memory
    // Code for deallocation is not included for simplicity

    return 0;
}
