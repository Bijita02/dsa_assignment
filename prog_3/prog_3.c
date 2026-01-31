#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insertEnd(struct Node *head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp = head;

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

void reverseTraversal(struct Node *head) {
    if (head == NULL) {
        return;
    }

    reverseTraversal(head->next);
    printf("%d ", head->data);
}

int main() {
    struct Node *head = NULL;
    int n, value, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter data %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Reverse Traversal:\n");
    reverseTraversal(head);

    return 0;
}
