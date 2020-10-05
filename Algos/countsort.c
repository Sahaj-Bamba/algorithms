#include<stdio.h>
void countSort(int list[],int size);
int main()
{
    int number[]={2,1,1,1,1,1,1,1,1,1};
    int offset;
    countSort(number,10);
    printf("\n\t=======================\n\t");
    for(offset=0;offset<10;offset++)
    {
        printf("%d ",number[offset]);
    }
}
void countSort(int list[],int size)
{
    int offset,min,max,countSize;
    int *count,*tempAry;
    tempAry = (int*)calloc(size,sizeof(int));

    min=max=list[0];
    for(offset=1;offset<size;offset++)
    {
        if(min>list[offset])min=list[offset];
        if(max<list[offset])max=list[offset];
    }
    countSize = max-min+2;
    count = (int*)calloc(countSize,sizeof(int));
    for(offset=0;offset<size;offset++)count[list[offset]-min]++;
    for(offset=1;offset<countSize;offset++)count[offset]=count[offset]+count[offset-1];
    for(offset=0;offset<size;offset++)
    {
        tempAry[count[list[offset]-min]-1]=list[offset];
        count[list[offset]-min]--;

    }
    printf("\n\t==========================\n\t");
    for(offset=0;offset<size;offset++)
    {
        printf("%d ",tempAry[offset]);
        list[offset]=tempAry[offset];
    }
}
