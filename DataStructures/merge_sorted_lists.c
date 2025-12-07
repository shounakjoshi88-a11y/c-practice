#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* mergeSortedLists(struct Node* l1, struct Node* l2) {
    struct Node* dummy = (struct Node*)malloc(sizeof(struct Node));
    dummy->data = 0;
    dummy->next = NULL;
    
    struct Node* current = dummy;
    
    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }
    
    current->next = (l1 != NULL) ? l1 : l2;
    return dummy->next;
}

int main() {
    return 0;
}
