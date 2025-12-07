#include <stdio.h>

int heap[100];   // array for heap
int size = 0;    // current heap size

// Function to insert an element into the Min-Heap
void insert(int value) {
    size++;
    heap[size] = value;

    int i = size;

    // Heapify UP (for Min Heap)
    while (i > 1 && heap[i/2] > heap[i]) {
        int temp = heap[i/2];
        heap[i/2] = heap[i];
        heap[i] = temp;
        i = i / 2;  // move upward
    }
}

// Function to display heap
void display() {
    printf("Heap elements: ");
    for (int i = 1; i <= size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    insert(20);
    insert(50);
    insert(10);
    insert(30);
    insert(60);

    display();   // prints heap in array form

    return 0;
}
