#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void linkedListTraversal(class Node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
int getcount(Node * head){
    Node * current=head;
    int count =0;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    return count;
}
int main(){
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 43;
    third->next = fourth;
    fourth->data = 66;
    fourth->next = fifth;
    fifth->data =88;
    fifth->next = NULL;
    linkedListTraversal(head);
    cout<<"The length of the LinkedList is "<<getcount(head);
    return 0;
}