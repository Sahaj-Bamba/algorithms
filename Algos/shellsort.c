#include<stdio.h>
void shellSort(int list[],int size);
int main()
{
    int number[]={14,18,19,37,23,12,15,40,11};
    int offset;
    shellSort(number,9);
    printf("\n\t=======================\n\t");
    for(offset=0;offset<10;offset++)
    {
        printf("%d ",number[offset]);
    }
}
void shellSort(int number[],int size)
{
    int offset,gap,tempEnd,tempOff,end,temp,index;
    for(gap=size/2;gap>0;gap=gap/2)
    {
        for(offset=0,end=gap;end<size;offset++,end++)
        {
            if(number[end]<number[offset])
            {
                temp=number[offset];
                number[offset]=number[end];
                number[offset]=temp;
                for(tempEnd=offset,tempOff=offset-gap;tempOff>=0;tempEnd-=gap,tempOff-=gap)
                {
                    if(number[tempEnd]<number[tempOff])
                    {
                        temp=number[tempEnd];
                        number[tempEnd]=number[tempOff];
                        number[tempOff]=temp;
                    }
                    else break;
                }
            }
       }
       printf("\n\t========================\n\t");
       for(index=0;index<size;index++)
       {
            printf("%d ",number[index]);
       }
       printf("\n\t========================\n\t");
    }
}
