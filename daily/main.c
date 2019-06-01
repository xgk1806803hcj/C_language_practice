#include <stdio.h>
#include <stdlib.h>

int partition(int *a[],int low,int high)
{
    int pivotkey;
    a[0]=a[low];
    pivotkey=a[low];
    while(low<high)
    {
        while(low<high&&a[high]>=pivotkey)
        high--;
        a[low]=a[high];
        while(low<high&&a[low]<=pivotkey)
        low++;
        a[high]=a[low];
    }
    a[low]=a[0];
    return low;
}

void Qsort(int *a[],int low,int high)
{
    int pivotloc;
    if(low<high)
    {
        pivotloc=partition(&a[11],low,high);
        Qsort(&a[11],low,pivotloc-1);
        Qsort(&a[11],pivotloc+1,high);
    }
}

int main()
{
    int i,a[11];
    for(i=1;i<11;i++)
      a[i]=11-i;
    Qsort(&a[11],1,10);
    for(i=1;i<11;i++)
      printf("%d ",a[i]);
    printf("\n");
    return 0;
}
