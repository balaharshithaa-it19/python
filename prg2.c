#include<stdio.h>

int main()
{
 int i,n;
 printf("enter a no. to find it's factors");
 scanf("%d", &n);

 for(i=1;i<=n;i++)
  {
    if(n%i==0)
    { 
     printf("%d ",i);
    }
 }
 return 0;
}
