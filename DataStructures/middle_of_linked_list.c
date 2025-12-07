#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* findMiddle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    return 0;
}
