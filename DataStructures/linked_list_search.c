#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int searchNode(struct Node* head, int target) {
    struct Node* current = head;
    int position = 0;
    
    while (current != NULL) {
        if (current->data == target) {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1;
}

int main() {
    struct Node* head = NULL;
    int result = searchNode(head, 10);
    printf("Position: %d\n", result);
    return 0;
}
