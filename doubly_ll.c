
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    printf("Forward: ");
    temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    printf("Backward: ");
    if (head != NULL) {
        temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        while (temp != NULL) {
            printf("%d <-> ", temp->data);
            temp = temp->prev;
        }
    }

    printf("NULL\n");

    return 0;
}
