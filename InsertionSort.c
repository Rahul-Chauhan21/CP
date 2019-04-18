#include<stdio.h>
#include<stdlib.h>

void InSort(int *ptr, int n)
{
    for(int i=0;i<n;i++)
    {
        int value=ptr[i];
        int hole=i;
        while(hole>0&&ptr[hole-1]>value)
        {
            ptr[hole]=ptr[hole-1];
            hole--;
        }
        ptr[hole]=value;

    }
}
void PrintArr(int *ptr, int n)
{
        for(int i=0;i<n;i++)
        {
            printf("%d ",ptr[i]);
        }
        printf("\n");
}

int main()
{
int n;
scanf("%d",&n);

//nt *ptr=(int*)malloc(n*sizeof(int));
int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

PrintArr(&arr,n);
InSort(&arr,n);
PrintArr(&arr,n);
}
