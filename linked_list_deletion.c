#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct node *insertBetween(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
// struct node *deletefirstNode(struct node *head)
// {
//     struct node *ptr=head;
//     head=head->next;
//     free(ptr);
//     return head;
// }
// struct node *deleteAtIndex(struct node *head,int index)
// {
//     struct node *p=head;
//     struct node *q=head->next;
//     for(int i=0;i<index-1;i++){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q);
//     return head;
// }
// struct node *deleteAtLast(struct node *head)
// {
//     struct node *p=head;
//     struct node *q=head->next;
//     while(q->next!=NULL){
//         p = p->next;
//         q = q->next;
//     }
//     p->next=NULL;
//     free(q);
//     return head;
// }
struct node *deleteAtIndex(struct node *head,int value)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value|| q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 4;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 8;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = NULL;
    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    // head = deletefirstNode(head);
    head = deleteAtIndex(head,8);
    // head = deleteAtLast(head);
    
    printf("Linked list after deletion\n");
    linkedListTraversal(head);
    return 0;
}