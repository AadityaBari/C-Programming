// Stack implementation using array (Technique 1)

#include<stdio.h>

int stack[10];
int top = 0;
int upperBound = 9;
int size = 0;

void push(int num)
{
    int i;

    if(size == upperBound + 1)
    {
        return; // stack full
    }

    i = size;

    while(i > top)
    {
        stack[i] = stack[i - 1];
        i--;
    }

    stack[top] = num;
    size++;
}

int pop()
{
    int i, num;

    if(size == 0)
    {
        return 0; // stack empty
    }

    num = stack[top];
    i = top;

    while(i < size - 1)
    {
        stack[i] = stack[i + 1];
        i++;
    }

    size--;

    return num;
}

int isEmpty()
{
    return size == 0;
}

int isFull()
{
    return size == upperBound + 1;
}

int main()
{
    int ch, num;

    while(1)
    {
        printf("\n1. Push A Number On Stack\n");
        printf("2. POP A Number From Stack\n");
        printf("3. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        if(ch == 1)
        {
            if(isFull())
            {
                printf("Error! Stack Is Full\n");
            }
            else
            {
                printf("Enter Number To Push On Stack : ");
                scanf("%d", &num);

                if(num == 0)
                {
                    printf("Error! Zero Cannot Be Pushed On Stack\n");
                }
                else
                {
                    push(num);
                    printf("%d Pushed On Stack\n", num);
                }
            }
        }

        else if(ch == 2)
        {
            if(isEmpty())
            {
                printf("Error! Stack Is Empty\n");
            }
            else
            {
                num = pop();
                printf("%d Popped From Stack\n", num);
            }
        }

        else if(ch == 3)
        {
            break;
        }

        else
        {
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
