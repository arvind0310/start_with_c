#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("how many integer you want?:");
    scanf("%d",&n);
    
    ptr=(int *)calloc(n,sizeof(int));
    
    // for(int i=0;i<n;i++)
    
    // {
    //     printf("enter the %d elemnt: ",i);
    //     scanf("%d",&ptr[i]);
    // }

     for(int i=0;i<n;i++)
    {
        printf("element %d is %d\n",i,ptr[i]);
    }

    return 0;
}


// >>> automatically allocate the given space to : 0
