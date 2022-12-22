

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list_node {
    int value;
    struct list_node *next;
};

struct list_node* reverse_list(struct list_node *head) {

    struct list_node *prev = NULL;
    struct list_node *current = head;

    while (current) {
        
        struct list_node *node = current ->next;
        current->next = prev;
        prev = current;
        current = node;

    }

    return prev;
}

void show_list(struct list_node *head) {
    struct list_node *p = head;

    for (; p; p = p->next) printf("%d  ", p->value);

    printf("\n");
}

struct list_node *init_list(int n) {
    int i = 0;
    struct list_node *head, *p, *q;

    p = (struct list_node*)malloc(sizeof(struct list_node));
    head = p;
    for (i = 1;i < n;i ++) {
        q = (struct list_node*)malloc(sizeof(struct list_node));
        q->value = 2 * i;
        p->next = q;
        p = q;
    }

    p->next = NULL;

    return head;
}

int main() {

    struct list_node *head = init_list(10);
    show_list(head);

    head = reverse_list(head);
    //inversion_node(head);

    show_list(head);

    return 0;

}



