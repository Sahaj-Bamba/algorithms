#include<stdio.h>
void mergeSort(int startIndex,int endIndex,int list[]);
int main()
{
    int num[]={3,11,7,21,9,5,17,14};
    int offset;
    mergeSort(0,7,num);
    printf("\n\t======================\n\t");
    for(offset=0;offset<8;offset++)
    {
        printf("%d ",num[offset]);
    }
    printf("\n\t======================\n\t");
}
void mergeSort(int startIndex,int endIndex,int list[])
{
    int median,counter,*tempList,limit,index=0,size=0,start;

    if(startIndex==endIndex)return;
    median = (startIndex+endIndex)/2;
    mergeSort(startIndex,median,list);
    mergeSort(median+1,endIndex,list);

    counter=startIndex;start = startIndex;limit = median+1;
    while(counter++<=endIndex)size++;
    tempList = (int*)calloc(size,sizeof(int));
    while(start<=median && limit<=endIndex)
    {
        if(list[start]<list[limit])tempList[index++] = list[start++];
        else if(list[start]>list[limit])tempList[index++] = list[limit++];
        else{tempList[index++] = list[start++];tempList[index++] = list[limit++];}
    }
    while(start<=median)tempList[index++] = list[start++];
    while(limit<=endIndex)tempList[index++] = list[limit++];
    for(index=0;index<size;index++)
    list[startIndex++] = tempList[index];
    free(tempList);
}
+
