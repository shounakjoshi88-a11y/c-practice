#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int hasCycle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            return 1;
        }
    }
    return 0;
}

int main() {
    printf("Cycle detection ready\n");
    return 0;
}
