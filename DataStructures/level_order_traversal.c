#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct Queue {
    struct TreeNode* node;
    struct Queue* next;
};

void levelOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    
    struct Queue* front = NULL;
    struct Queue* rear = NULL;
    
    struct Queue* newNode = (struct Queue*)malloc(sizeof(struct Queue));
    newNode->node = root;
    newNode->next = NULL;
    front = rear = newNode;
    
    while (front != NULL) {
        struct TreeNode* current = front->node;
        printf("%d ", current->data);
        
        if (current->left != NULL) {
            struct Queue* newQ = (struct Queue*)malloc(sizeof(struct Queue));
            newQ->node = current->left;
            newQ->next = NULL;
            rear->next = newQ;
            rear = newQ;
        }
        
        if (current->right != NULL) {
            struct Queue* newQ = (struct Queue*)malloc(sizeof(struct Queue));
            newQ->node = current->right;
            newQ->next = NULL;
            rear->next = newQ;
            rear = newQ;
        }
        
        struct Queue* temp = front;
        front = front->next;
        free(temp);
    }
}

int main() {
    return 0;
}
