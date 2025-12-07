#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

int height(struct TreeNode* node) {
    if (node == NULL) return 0;
    int lh = height(node->left);
    int rh = height(node->right);
    return 1 + (lh > rh ? lh : rh);
}

int isBalanced(struct TreeNode* root) {
    if (root == NULL) return 1;
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    return 0;
}

int main() {
    return 0;
}
