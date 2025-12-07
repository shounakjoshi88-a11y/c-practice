#include <stdio.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
void enqueue(int val) {
    if (rear == MAX - 1) printf("Queue Full\n");
    else {
        if (front == -1) front = 0;
        queue[++rear] = val;
    }
}
void dequeue() {
    if (front == -1 || front > rear) printf("Queue Empty\n");
    else printf("Dequeued: %d\n", queue[front++]);
}
void display() {
    if (front == -1 || front > rear) printf("Empty\n");
    else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) printf("%d ", queue[i]);
        printf("\n");
    }
}
int main() {
    enqueue(1); enqueue(2); enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}
