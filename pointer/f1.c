

#include <stdio.h>

int main()
{
 int x=5;
 int *p=&x; // p will have add of x.
  
 printf("Add of x is:%p\n",&x);
 printf("add of x is:%p",p);

 
 printf("the vlue of x is: %d\n",x);
 printf("the vlue of x is: %d\n",*p);
 
 printf("the add of p is:%p\n",&p);
 printf("the value of p is:%p\n",*(&p));

 

 
    return 0;
}



