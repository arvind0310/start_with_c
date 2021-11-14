
1.>>>> // strlen(string)



#include<stdio.h>
#include<string.h>
int main()
{
    
    char str1[]="arvind yadav";
  
    int length=strlen(str1); // otherwise strlen() return long unsigned int
    
    printf("length of string is:%d",length);
    
    return 0;
    
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include<stdio.h>
#include<string.h>
int main()
{
    
    char *str1="arvind yadav";
    int length=strlen(str1);
    
    printf("length of string is:%d",length);
    
    return 0;
    
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include<stdio.h>
#include<string.h>
int main()
{
    
    char *str1="arvind yadav";
    
    printf("length of string is:%lu",strlen(str1));
    
    return 0;
    
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// 2. strcpy(destination , source)


#include<stdio.h>
#include<string.h>

int main()
{
  char str1[]="arvind";
  printf("str1 is:%s\n",str1);
  
  char str2[20];
  
  strcpy(str2,str1);   // (target,source)
  
  printf("str2 became:%s\n",str2);
  
  
  return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include<stdio.h>
#include<string.h>

int main()
{
  char *str1="arvind";
  printf("str1 is:%s\n",str1);
  
  char str2[20];
  
  strcpy(str2,str1);
  
  printf("str2 became:%s\n",str2);
  
  return 0;
}


