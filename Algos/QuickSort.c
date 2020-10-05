#include<stdio.h>
void qsort(int partition_wall,int pivot,int list[]);
int partition(int partition_index,int pivot,int list[]);
int main()
{
    int list[] = {30,2,14,46,32,22,3,5,26,0};
//    int list[] = {10,9,8,7,6,5,4,3,2,1};
 //   int list[] = {1,2,3,4,5,6,7,8,9,10};


    int offset;
    printf("\n\tcalling qsort : ");
    qsort(0,9,list);
    printf("\n\t=================\n\t");
    for(offset=0;offset<10;offset++)
    {
        printf("%d ",list[offset]);
    }
}
void qsort(int front,int rear,int list[])
{
    int sortIndex;
    if(front<rear)
    {
        sortIndex = partition(front,rear,list);
        qsort(front,sortIndex-1,list);
        qsort(sortIndex+1,rear,list);
    }
}
int partition(int front,int rear,int list[])
{
    int wall=front,temp;
    while(front<rear)
    {
        if(list[rear]>list[front])
        {
            temp = list[front];
            list[front]=list[wall];
            list[wall]=temp;
            wall++;
        }
        front++;
    }
    temp = list[rear];
    list[rear] = list[wall];
    list[wall] = temp;
    printf("\n\t=============\n\t");
    for(temp=0;temp<10;temp++)
    {
        printf("%d ",list[temp]);
    }
    return(wall);
}

   // 30, 2,  14, 46, 32, 22, 3,  5,  26, 11
