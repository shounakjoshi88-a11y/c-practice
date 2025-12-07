#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

int searchBST(struct TreeNode* root, int target) {
    if (root == NULL) {
        return 0;
    }
    
    if (root->data == target) {
        return 1;
    } else if (target < root->data) {
        return searchBST(root->left, target);
    } else {
        return searchBST(root->right, target);
    }
}

int main() {
    return 0;
}
