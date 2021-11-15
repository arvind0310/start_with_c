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


//++++++++++++++   >>> printing element <<<<  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//1.>> element by element

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

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<stdio.h>

int main()
{
  char *p = "arvind";
  
  printf("%p\n",p);
  printf("%c\n",*p);
  printf("%s\n",p); // print whole string

  return 0;
  
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



#include<stdio.h>

int main()
{

  char str[]="arvind";
  char *p = str;
  
  printf("%s\n",p);
  
  return 0;
  
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<stdio.h>

int main()
{
  char str[]="arvind";
  printf("%s",str);
  return 0;
  
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main () {
   char str[50];

   printf("Enter a string : ");
   gets(str); // will take string with spaces in a single line input

   printf("You entered: %s", str);

   return(0);
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(char *str)   // or >> /void print(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}

int main(){
    
char str[]="arvind";
print(str);


return 0;
}
//+++++++++++++++++++++++++++++++++ OR +++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}

int main(){
    
char str[]="arvind";
print(str);


return 0;
}

//+++++++++++++++++++++++++++++++++++++ OR +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include <stdio.h>
#include <string.h>


void print(char *str)    // like char *str= str
                          // print(str) >>>> char *ptr =str >> void print(char *ptr)
{
    
    while(*str!='\0')
    {
        printf("%c",*str);
        str++;
    }
}

int main(){
    
char str[]="arvind";

print(str);


return 0;
}

