#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int *)malloc(3*sizeof(int)); // now ptr can be used as arr of size "6". 
    
    for(int i=0;i<3;i++)
    
    {
        printf("enter the %d elemnt: ",i);
        scanf("%d",&ptr[i]);
    }

     for(int i=0;i<3;i++)
    {
        printf("element %d is %d\n",i,ptr[i]);  // print up to 6 element
    }
    
    free(ptr);

    return 0;
}
