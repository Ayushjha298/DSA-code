struct node *deleteAtLast(struct node *head)
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