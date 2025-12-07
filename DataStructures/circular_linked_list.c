#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createCircularList(int data) {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = data;
    head->next = head;
    return head;
}

int main() {
    return 0;
}
