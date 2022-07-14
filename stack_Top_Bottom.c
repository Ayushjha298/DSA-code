#include <stdio.h>
#include <stdlib.h>
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
        printf("Stack Overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow\n");
        return-1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
    }
}
int peek(struct stack *sp,int i){
     int arrInd=sp->top-i+1;
    if(arrInd<0){
        printf("Invalid!!!!");
        return -1;
    }
    else{
       return sp->arr[arrInd];
    }
}
int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
int stackBottom(struct stack* sp){
    return sp->arr[0];
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created\n ");
    printf("Before pushing,full: %d\n",isFull(sp));
    printf("Before pushing,Empty: %d\n",isEmpty(sp));
    push(sp,1);
    push(sp,23);
    push(sp,99);
    push(sp,75);
    push(sp,3);
    push(sp,64);
    push(sp,57);
    push(sp,46);
    push(sp,89);
    push(sp,6);
    printf("The top most value of this stack is %d\n",stackTop(sp));
    printf("The bottom most value of this stack is %d\n",stackBottom(sp));
    // for(int j=1;j<=sp->top+1;j++){
    // printf("The value at position %d is %d\n",j,peek(sp,j));
    // }
    return 0;
}