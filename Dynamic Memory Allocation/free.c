

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;
    ptr=(int *)malloc(3*sizeof(int)); // now ptr can be used as arr of size "6". 
    
    for(int i=0;i<3;i++)
    
    {
        ptr2=(int *)malloc(400*sizeof(int)); // every time it will use the memory space of 460 intregres 
        
        printf("enter the %d elemnt: ",i);
        scanf("%d",&ptr[i]);
        
        free(ptr2);     // but at the same time we are making it free ... (make .. free and make free and loop)
    }

     for(int i=0;i<3;i++)
    {
        printf("element %d is %d\n",i,ptr[i]);  // print up to 6 element
    }
    

    return 0;
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

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
