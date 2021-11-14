#include<stdio.h>

int main()
{
//   char str=['a','r','v','i','n','d','\0'}
  char str[]="arvind";

 return 0;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<stdio.h>

int main()
{
  char str[]="arvind";
  printf("%p",str);  // add of first element of string arr

    return 0;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    printf("%p",arr); // add of first element of int arr
    
    return 0;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include<stdio.h>

int main()
{
  char str[]="arvind";
  char *p=str;
  
  printf("%p\n",p); 
  printf("%p\n",str);  // add of first element of string arr
  
  printf("%c\n",*p);  // means *p is pointing to first element of arr i.e. == 'a' 
  
  p++;
  
  printf("%c\n",*p); // will go to next adress i.e. +1B ... to 'r'

    return 0;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<stdio.h>

int main()
{
  char str[]="arvind";
  char *p=str;
  
  // p >> adress
 // *p >> value
  
  while(*p!='\0')
  {
      printf("%c",*p);
      p++; // every time we +1 the address it point next char element
  }
  

    return 0;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++ OR +++++++++++++++++++++++++++++++++


#include<stdio.h>

int main()
{
  char str[]="arvind";
  int i=0;
  while(str[i]!='\0')
  {
      printf("%c",str[i]);
      i++;
  }
  
  return 0;
  
}
