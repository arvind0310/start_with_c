#include<stdio.h>

int main()
{
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    
  char str[n+1];
  printf("enter your string:");
  scanf("%s",str);
  
  int check=1;
  
//   printf("enterd string is:%s",str);

int i;

for( i=0;i<n;i++);
{
    if(str[i]!=str[n-1-i])
    {
        check=0;
        // break;
    }
}

if(check)
{
    printf("Palindrom it is..");
}
else
{
    printf("Not a Palindrom");
}
  
  return 0;
  
}
