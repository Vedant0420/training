#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *next;
};

typedef struct List *node;

node create(int data)
{
    node new = (node)malloc(sizeof(struct List));
    new->data = data;
    new->next = NULL;
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
    return head;
}

node addAtBeg(node head, int data)
{
    node new = create(data);
    if (head == NULL)
        return new;
    new->next = head;
    return new;
}

node addAtNth(node head, int data, int pos)
{
    node new = create(data);

    if (pos < 0)
    {
        return head;
    }
    if (pos == 0 || head == NULL)
    {
        return addAtBeg(head, data);
    }

    int count = 0;
    node temp = head;
    while (temp != NULL && count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if(temp == NULL)
    {
        printf("Position out of bound\n");  
        return head;
    }
    new->next = temp->next;
    temp->next = new;
    return head;
}

node delAtLast(node head)
{

    if (head == NULL)
    {
        return NULL;
    }
    node temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

node delAtBeg(node head)
{

    if (head == NULL)
    {
        return NULL;
    }

    node temp = head;
    head = head->next;
    free(temp);
    return head;
}

node delAtNth(node head, int pos)
{

    if (head == NULL)
    {
        return NULL;
    }
    if (pos < 0)
    {
        return head;
    }
    if (pos == 0)
    {
        return delAtBeg(head);
    }

    int count = 0;
    node temp = head;
    while (temp->next != NULL && count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        return head;
    }
    node toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
    return head;
}

void display(node head)
{
    node temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    node head = NULL;
    head = addAtLast(head, 10);
    head = addAtLast(head, 20);
    head = addAtBeg(head, 5);
    head = addAtNth(head, 15, 2);
    display(head);
    head = delAtLast(head);
    display(head);
    head = delAtBeg(head);
    display(head);
    head = delAtNth(head, 1);
    display(head);
    return 0;
}
