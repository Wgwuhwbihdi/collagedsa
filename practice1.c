#include <stdio.h>
#include <conio.h>
#define MAX 20
typedef struct Stack
{
    int data[MAX];
    int top;
} stack;

void init(stack *s)
{
    s->top == -1;
}
int empty(stack *s)
{
    if (s->top = -1)
    {
        printf('Stack is empty');
    }
    else
    {
        printf("stack is not empty");
    }
}

int full(stack *s)
{
    if (s->top == MAX - 1)
    {
        printf("stack over");
    }
    else
    {
        printf("stack is underflow");
    }
}
void push(stack *s, int x)
{
    s->top = s->top + 1;
    s->data[s->top] = x;
}
int pop(stack *s)
{
    int x;
    x = s->data[s->top];
    s->top = s->top - 1;
    return (x);
}
int main()
{

    return (0);
}