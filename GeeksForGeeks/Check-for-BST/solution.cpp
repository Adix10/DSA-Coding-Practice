/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */
class Solution {
  public:
    bool check(Node* root, long long minVal, long long maxVal) {
        if (root == nullptr)
            return true;
        if (root->data <= minVal || root->data >= maxVal)
            return false;
        return check(root->left, minVal, root->data) &&
               check(root->right, root->data, maxVal);
    }
    bool isBST(Node* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};