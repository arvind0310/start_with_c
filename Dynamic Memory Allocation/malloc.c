#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("%lu",sizeof(float));
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++=

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int *)malloc(6*sizeof(int)); // now ptr can be used as arr of size "6". 
    
    for(int i=0;i<6;i++)
    
    {
        printf("enter the %d elemnt: ",i);
        scanf("%d",&ptr[i]);
    }

     for(int i=0;i<6;i++)
    {
        printf("element %d is %d\n",i,ptr[i]);  // print up to 6 element
    }

    return 0;
}

//+++++++++++++++++++++++++++ asking the number from user +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("how many integer you want?:");
    scanf("%d",&n);
    
    ptr=(int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    
    {
        printf("enter the %d elemnt: ",i);
        scanf("%d",&ptr[i]);
    }

     for(int i=0;i<n;i++)
    {
        printf("element %d is %d\n",i,ptr[i]);
    }

    return 0;
}


