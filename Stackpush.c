#include <stdio.h>
#include<stdlib.h>
#define MAX 50
int main()
{
    int queue_array[MAX];
    int rear = -1;
    int front = -1;
    int item,i;
    if(rear == MAX -1)
        printf("Queue Overflow ");
    else
    {
        if(front == -1)front = 0;
        printf("Inset the element in queue : ");
        for(i=0; i<5; i++)
        {
            scanf("%d", &item);
            rear = rear + 1;
            queue_array[rear] = item;
        }
    }
    if(front == -1)
        printf("Queue is empty ");
    else
    {
        printf("Queue is : ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
    }
}
