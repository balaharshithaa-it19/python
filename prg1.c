#include<stdio.h>

int main()
{
int i,n,j;
printf("enter a no.");
scanf("%d",&n);

for(i=1;i<=10;i++)
     {
       j = i * n;
       printf("%d * %d = %d \n ", i ,n,j);
     }
  return 0;
}
  
