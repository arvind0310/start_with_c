

#include <stdio.h>

int factorial(int x)
{
    if (x==0 || x==1)
    {
        return 1;
    }
    
   else if(x>0)
   {
      int fact=1;
      for (int i=1;i<=x;i++)
      {
          fact=fact*i;
      }
       return fact;
   }
 
}


int main()
{
 int x;
printf("enter the number x:");
scanf("%d",&x);

int result=factorial(x);

printf("the result is:%d",result);

    return 0;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// #include <stdio.h>

// int factorial(int x)
// {
// if (x==1 || x==0)
// {
//     return 1;
// }

// else
// {
//     return x*factorial(x-1);

// }

// }


// int main()
// {
//  int x;
// printf("enter the number x:");
// scanf("%d",&x);

// int result=factorial(x);

// printf("the result is:%d",result);

//     return 0;
// }
