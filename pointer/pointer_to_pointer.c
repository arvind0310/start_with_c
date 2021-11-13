#include <stdio.h>

int main()
{
 int a=5;
 int *p=&a; // p will have add of x.
 
 
 printf("Add of x is:%p\n",p);
 printf("value of a is:%d\n",*p);
 
 int **q=&p;
 
printf("add of p is:%p\n",q);
printf("value of p is:%p\n",*q);
printf("the value pointed by p is:%d\n",**q);

 
    return 0;
}
