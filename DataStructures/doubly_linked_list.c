#include <stdio.h>
#include <stdlib.h>

struct DNode {
    int data;
    struct DNode* next;
    struct DNode* prev;
};

struct DNode* createNode(int data) {
    struct DNode* newNode = (struct DNode*)malloc(sizeof(struct DNode));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

int main() {
    struct DNode* head = createNode(10);
    return 0;
}
