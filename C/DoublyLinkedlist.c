#include <stdio.h>
#include <stdlib.h>
struct DList
{
    int data;
    struct DList *next;
    struct DList *prev; //new
};

typedef struct DList *node;
node create(int data)
{
    node new = (node)malloc(sizeof(struct DList));
    new->data = data;
    new->next = NULL;
    new->prev = NULL; //new
    return new;
}
node addAtLast(node head, int data)
{
    node new = create(data);
    if (head == NULL)
        return new;
    node temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new;
    new->prev = temp; //new
    return head;
}

node delAtLast(node head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    node temp = head;
    while (temp->next != NULL) //new
    {
        temp = temp->next; 
    }
    temp->prev->next = NULL;  //new
    free(temp);
    return head;
}

void display(node head)
{
    node temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{

    node head = NULL;
    head = addAtLast(head, 10);
    head = addAtLast(head, 20);
    head = addAtLast(head, 30);
    display(head);
    head = delAtLast(head);
    display(head);
    return 0;
}