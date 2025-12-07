#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteNode(struct Node* head, int data) {
    if (head == NULL) return NULL;
    
    if (head->data == data) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    struct Node* current = head;
    while (current->next != NULL) {
        if (current->next->data == data) {
            struct Node* temp = current->next;
            current->next = current->next->next;
            free(temp);
            break;
        }
        current = current->next;
    }
    return head;
}

int main() {
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    return 0;
}
