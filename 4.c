#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

int init_list(Node **head)
{
    *head = (Node *)malloc(sizeof(Node));
    if (*head == NULL)
    {
        return 0;
    }
    (*head)->value = 0;
    (*head)->next = NULL;
    return 1;
}

void destroy_list(Node **head)
{
    if (head == NULL || *head == NULL)
    {
        return;
    }

    Node *current = *head;
    while (current != NULL)
    {
        Node *next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

void print_list(Node *head)
{
    Node *current = head->next;
    while (current != NULL)
    {
        printf("%d", current->value);
        if (current->next != NULL)
        {
            printf(" ");
        }
        current = current->next;
    }
    printf("\n");
}

int insert_tail(Node *head, int value);
Node *find_value(Node *head, int value);
int update_value(Node *head, int old_value, int new_value);
int delete_value(Node *head, int value);

int main(void)
{
    Node *head = NULL;
    if (!init_list(&head))
    {
        return 1;
    }

    insert_tail(head, 10);
    insert_tail(head, 20);
    insert_tail(head, 30);

    if (find_value(head, 20) == NULL)
    {
        return 1;
    }

    update_value(head, 20, 25);
    delete_value(head, 10);
    print_list(head);

    destroy_list(&head);
    return 0;
}