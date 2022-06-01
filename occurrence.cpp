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
int count(Node * head,int key){
    Node * current =head;
    int count=0;
    while(current!=NULL){
        if(current->data==key){
            count++;
        }
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
    head->data = 5;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 43;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = fifth;
    fifth->data =88;
    fifth->next = NULL;
    linkedListTraversal(head);
    cout<<"The frequency of 5 is: "<<count(head,5); 
    return 0;
}