#include<stdio.h>
int main()
{
  int i,num,n,large=0;
  printf(" ");
  scanf("%d",&n);
  
  for(i=1; i<=n; i++)
  {
    printf("",i);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }
  printf("\nThe Largest Number is %d",large);
  
  
  return 0;

}
    
