#include <stdio.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("stack is overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
void pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack is empty");
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
    }
}
    int peek(struct stack *sp,int i){
        int arrInd=sp->top=i+1;

    
}
int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(int));
    return 0;
}